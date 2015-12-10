import cpp.Lib;
import cpp.vm.Thread;
import sys.net.*;
import cpp.net.ThreadServer;
import sys.io.File;
import haxe.Json;
import haxe.io.Bytes;

using StringTools;

typedef Client = {
	var id:Int;
}

typedef Message = {
	var str:String;
}

typedef Task = {
	var id:Int;
	var done:Bool;
	var text:String;
	var link:String;
	var tags:Array<String>;
}

typedef ParameterValue = {
	var par:String;
	var val:Dynamic;
}

class Server extends ThreadServer<Client, Message>{
	static var json:Array<Task>;
	static var clients:Array<Socket> = [];
	static var taskIDInc:Int = 0;

	static function main(){
		var server:Server = new Server();

		Lib.println("Starting server...");
		Lib.println("Reading tasks...");

		loadJSON();

		Lib.println("Tasks loaded");

		server.run("127.0.0.1", 5423);
	}

	override function clientMessage(c:Client, msg:Message){
		Lib.println("Client "+c.id+" sent request:");
		Lib.println(msg.str);
		var cmd:Array<String> = msg.str.split(" ");
		if(cmd[0] == msg.str){
			cmd[0] = StringTools.trim(StringTools.replace(msg.str, ";", ""));
		}

		//If parameters are passed, reformat them
		if(cmd[1] == ";")cmd[1] = null;
		if(cmd[1] != null){
			cmd[1] = msg.str.substring(cmd[0].length+1, msg.str.length-1);
		}
		switch(cmd[0]){
			case "get":
				var tasks:Array<Task> = get(cmd[1]);
				send(clients[c.id], Json.stringify(tasks) + "\n");
			case "add":
				json.push(jsonFromParams(cmd[1]));
				setJSON();
			case "set":
				set(cmd[1]);
				setJSON();

			default:
				Lib.println("Invalid Command");
				clients[c.id].write("Invalid Commad \n");
		}
	}

	static function get(str:String):Array<Task>{
		if(str == null){
			return json;
		}

		var tags:Array<String> = str.split(",");
		var tasks:Array<Task> = new Array<Task>();
		for(task in json){
			for(tag in tags){
				if(task.tags.indexOf(tag) != -1){
					tasks.push(task);
					break;
				}
			}
		}
		return tasks;
	}

	static function set(str:String):Void{
		var t:Task = getTaskById(Std.parseInt(str));
		if(!t.done){
			t.done = true;
		}else{
			json.remove(t);
		}
	}

	override function clientConnected(s:Socket){
		clients.push(s);
		Lib.println("Client "+(clients.length-1)+" connected");
		return {id: clients.length-1};
	}

	override function clientDisconnected(c:Client){
		Lib.println("Client disconnected");
	}

	override function readClientMessage(c:Client, buf:Bytes, pos:Int, len:Int){
	    var complete = false;
	    var cpos = pos;
	    while (cpos < (pos+len) && !complete){
	    	complete = (buf.get(cpos) == 59);
	    	cpos++;
	 	}
    	if( !complete ) return null;
    	var msg:String = buf.getString(pos, cpos-pos);
    	return {msg: {str: msg}, bytes: cpos-pos};
	}

	static function loadJSON(){
		var file:String = File.getContent("tasks.json");
		json = Json.parse(file);
		for(task in json){
			if(task.id > taskIDInc)taskIDInc = task.id;
		}
	}

	static function setJSON(){
		var str:String = Json.stringify(json);
		File.saveContent("tasks.json", str);
	}

	static function jsonFromParams(str:String):Task{
		var params:Array<String> = str.split(":");
		var newTask = {
			id: ++taskIDInc,
			done: false,
			text: params[0],
			tags: params[1].split(","),
			link: params[2]
		}

		return newTask;
	}

	static function send(s:Socket, msg:String){
		s.write((msg.length+"").length+"");
		s.write(msg.length+"");
		s.write(msg);
	}

	static function getTaskById(id:Int):Task{
		for(t in json){
			if(t.id == id)return t;
		}

		return null;
	}
}