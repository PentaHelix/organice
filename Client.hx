import cpp.Lib;
import sys.net.*;

class Client{
	static function main(){
		var s:Socket = new Socket();
		s.connect(new Host("127.0.0.1"), 5423);
		Lib.println("Started client...");
		while(true){
			var input:String = Sys.stdin().readLine();
			s.write(input);
			var res:String = s.input.readLine();
			Lib.println(res);
		}
	}
}