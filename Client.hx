import cpp.Lib;
import sys.net.*;

class Client{
	static function main(){
		var s:Socket = new Socket();
		s.connect(new Host("127.0.0.1"), 5423);
		Lib.println("Started client...");
		var input:String;
		while(true){
			input = "";
			while(input.indexOf(";") != input.length-1 || input.length == 0){
				if(input.charAt(input.length-1) != " " && input.length != 0)input += " ";
				input += Sys.stdin().readLine();
			}
			s.write(input);
			var res:String = s.input.readLine();
			Lib.println(res);
		}
	}
}