import cpp.Lib;
import cpp.vm.Thread;
import sys.net.*;
import cpp.net.ThreadServer;
import sys.io.File;
import haxe.Json;
import haxe.io.Bytes;

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
	var user:String;
	var link:String;
	var tags:Array<String>;
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

		switch(cmd[0]){
			case "get":
				var tasks:Array<Task> = get(getRequestParameter(msg.str, "tags", true));
				clients[c.id].write(Json.stringify(tasks) + "\n");
			case "add":
				json.push({done: false,
							text: getRequestParameter(msg.str, "text"),
							user: getRequestParameter(msg.str, "user"),
							link: getRequestParameter(msg.str, "link"),
							tags: getRequestParameter(msg.str, "tags", true),
							id:   ++taskIDInc});
				setJSON();
			case "set":


			default:
				Lib.println("Invalid Command");
		}
	}

	static function get(tags:Array<String>):Array<Task>{
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

	static function getRequestParameter(req:String, par:String, ?array=false):Dynamic{
		req = req.split(";")[0];
		var spl:Array<String> = req.split(" ");
		for(s in spl){
			var param:Array<String> = s.split(":");
			if(param[0] == par){
				var res:Dynamic = s.split(":")[1];
				if(param[1].indexOf(",") != -1){
					res = new Array<String>();
					for(i in param[1].split(",")){
						res.push(i);
					}
					return res;
				}
				if(array == true){
					return [res];
				}else{
					return res;
				}
			}
		}

		return "";
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
			if(task.id < taskIDInc)taskIDInc = task.id;
		}
	}

	static function setJSON(){
		var str:String = Json.stringify(json);
		File.saveContent("tasks.json", str);
	}

	static function getStringParameter(str:String, pos:Int){
		
	}
}