#include <hxcpp.h>

#ifndef INCLUDED_Server
#include <Server.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_net_ThreadServer
#include <cpp/net/ThreadServer.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

Void Server_obj::__construct()
{
HX_STACK_FRAME("Server","new",0x59340d55,"Server.new","Server.hx",26,0x1acdb3bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

//Server_obj::~Server_obj() { }

Dynamic Server_obj::__CreateEmpty() { return  new Server_obj; }
hx::ObjectPtr< Server_obj > Server_obj::__new()
{  hx::ObjectPtr< Server_obj > _result_ = new Server_obj();
	_result_->__construct();
	return _result_;}

Dynamic Server_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Server_obj > _result_ = new Server_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_clientMessage,Server_obj)
Void run(Dynamic c,Dynamic msg){
{
		HX_STACK_FRAME("Server","clientMessage",0x0ba723f1,"Server.clientMessage","Server.hx",44,0x1acdb3bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(45)
		::String tmp = (HX_HCSTRING("Client ","\x55","\x5f","\xd2","\xc8") + c->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::String tmp1 = (tmp + HX_HCSTRING(" sent request:","\xb3","\x19","\xe5","\x2a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::cpp::Lib_obj::println(tmp1);
		HX_STACK_LINE(46)
		::String tmp2 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::cpp::Lib_obj::println(tmp2);
		HX_STACK_LINE(48)
		Array< ::String > cmd = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(cmd,"cmd");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::String tmp3 = cmd->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::String _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			::String tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			::String _switch_1 = (tmp4);
			if (  ( _switch_1==HX_HCSTRING("get","\x96","\x80","\x4e","\x00"))){
				HX_STACK_LINE(52)
				::String tmp5 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				Dynamic tmp6 = ::Server_obj::getRequestParameter(tmp5,HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"),true);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				cpp::ArrayBase tasks = ::Server_obj::get(tmp6);		HX_STACK_VAR(tasks,"tasks");
				HX_STACK_LINE(53)
				::sys::net::Socket tmp7 = ::Server_obj::clients->__get(c->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic )).StaticCast< ::sys::net::Socket >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				::String tmp8 = ::haxe::format::JsonPrinter_obj::print(tasks,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				tmp7->write(tmp9);
			}
			else if (  ( _switch_1==HX_HCSTRING("add","\x21","\xf2","\x49","\x00"))){
				HX_STACK_LINE(56)
				::String tmp5 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				Dynamic tmp6 = ::Server_obj::getRequestParameter(tmp5,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				::String tmp7 = ((::String)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				::String tmp8 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				Dynamic tmp9 = ::Server_obj::getRequestParameter(tmp8,HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				::String tmp10 = ((::String)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				::String tmp11 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(58)
				Dynamic tmp12 = ::Server_obj::getRequestParameter(tmp11,HX_HCSTRING("link","\xfa","\x17","\xb3","\x47"),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(58)
				::String tmp13 = ((::String)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				::String tmp14 = msg->__Field(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				Dynamic tmp15 = ::Server_obj::getRequestParameter(tmp14,HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"),true);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				int tmp16 = ++(::Server_obj::taskIDInc);		HX_STACK_VAR(tmp16,"tmp16");
				struct _Function_3_1{
					inline static Dynamic Block( ::String &tmp13,::String &tmp10,Dynamic &tmp15,::String &tmp7,int &tmp16){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Server.hx",55,0x1acdb3bb)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42") , false,false);
							__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , tmp7,false);
							__result->Add(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d") , tmp10,false);
							__result->Add(HX_HCSTRING("link","\xfa","\x17","\xb3","\x47") , tmp13,false);
							__result->Add(HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c") , ((Array< ::String >)(tmp15)),false);
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp16,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(55)
				Dynamic tmp17 = _Function_3_1::Block(tmp13,tmp10,tmp15,tmp7,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(55)
				::Server_obj::json->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
				HX_STACK_LINE(61)
				::Server_obj::setJSON();
			}
			else if (  ( _switch_1==HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"))){
			}
			else  {
				HX_STACK_LINE(66)
				::cpp::Lib_obj::println(HX_HCSTRING("Invalid Command","\xe2","\x0e","\x37","\x4a"));
			}
;
;
		}
	}
return null();
}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_clientConnected,Server_obj)
Dynamic run(::sys::net::Socket s){
	HX_STACK_FRAME("Server","clientConnected",0x18842f73,"Server.clientConnected","Server.hx",108,0x1acdb3bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(109)
	::sys::net::Socket tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::Server_obj::clients->push(tmp);
	HX_STACK_LINE(110)
	int tmp1 = ::Server_obj::clients->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	::String tmp3 = (HX_HCSTRING("Client ","\x55","\x5f","\xd2","\xc8") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	::String tmp4 = (tmp3 + HX_HCSTRING(" connected","\xa9","\xde","\x45","\xac"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(110)
	::cpp::Lib_obj::println(tmp4);
	HX_STACK_LINE(111)
	int tmp5 = ::Server_obj::clients->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(111)
	int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp6){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Server.hx",111,0x1acdb3bb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , tmp6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(111)
	Dynamic tmp7 = _Function_1_1::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	return tmp7;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_clientDisconnected,Server_obj)
Void run(Dynamic c){
{
		HX_STACK_FRAME("Server","clientDisconnected",0xfb940551,"Server.clientDisconnected","Server.hx",115,0x1acdb3bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(115)
		::cpp::Lib_obj::println(HX_HCSTRING("Client disconnected","\x90","\x16","\xba","\xe1"));
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_readClientMessage,Server_obj)
Dynamic run(Dynamic c,::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("Server","readClientMessage",0xc178893b,"Server.readClientMessage","Server.hx",118,0x1acdb3bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(119)
	bool complete = false;		HX_STACK_VAR(complete,"complete");
	HX_STACK_LINE(120)
	int cpos = pos;		HX_STACK_VAR(cpos,"cpos");
	HX_STACK_LINE(121)
	while((true)){
		HX_STACK_LINE(121)
		int tmp = cpos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		int tmp1 = (pos + len);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		if ((tmp2)){
			HX_STACK_LINE(121)
			bool tmp4 = complete;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(121)
			tmp3 = false;
		}
		HX_STACK_LINE(121)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		if ((tmp4)){
			HX_STACK_LINE(121)
			break;
		}
		HX_STACK_LINE(122)
		int tmp5 = buf->b->__get(cpos);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		bool tmp6 = (tmp5 == (int)59);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		complete = tmp6;
		HX_STACK_LINE(123)
		(cpos)++;
	}
	HX_STACK_LINE(125)
	bool tmp = complete;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp1)){
		HX_STACK_LINE(125)
		return null();
	}
	HX_STACK_LINE(126)
	int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	int tmp3 = (cpos - pos);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::String tmp4 = buf->getString(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	::String msg = tmp4;		HX_STACK_VAR(msg,"msg");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &msg){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Server.hx",127,0x1acdb3bb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00") , msg,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(127)
	Dynamic tmp5 = _Function_1_1::Block(msg);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	int tmp6 = (cpos - pos);		HX_STACK_VAR(tmp6,"tmp6");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &tmp5,int &tmp6){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Server.hx",127,0x1acdb3bb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("msg","\x41","\x1a","\x53","\x00") , tmp5,false);
				__result->Add(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd") , tmp6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(127)
	Dynamic tmp7 = _Function_1_2::Block(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	return tmp7;
}
HX_END_LOCAL_FUNC4(return )
HX_END_DEFAULT_FUNC

cpp::ArrayBase Server_obj::json;

Array< ::Dynamic > Server_obj::clients;

int Server_obj::taskIDInc;

Void Server_obj::main( ){
{
		HX_STACK_FRAME("Server","main",0xb3ab51a4,"Server.main","Server.hx",31,0x1acdb3bb)
		HX_STACK_LINE(32)
		::Server tmp = ::Server_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::Server server = tmp;		HX_STACK_VAR(server,"server");
		HX_STACK_LINE(34)
		::cpp::Lib_obj::println(HX_HCSTRING("Starting server...","\xcb","\x72","\xb3","\x8c"));
		HX_STACK_LINE(35)
		::cpp::Lib_obj::println(HX_HCSTRING("Reading tasks...","\x94","\x16","\x59","\x3a"));
		HX_STACK_LINE(37)
		::Server_obj::loadJSON();
		HX_STACK_LINE(39)
		::cpp::Lib_obj::println(HX_HCSTRING("Tasks loaded","\x77","\xbc","\x38","\x30"));
		HX_STACK_LINE(41)
		server->run(HX_HCSTRING("127.0.0.1","\xfd","\xbc","\x5e","\xa1"),(int)5423);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Server_obj,main,(void))

cpp::ArrayBase Server_obj::get( Array< ::String > tags){
	HX_STACK_FRAME("Server","get",0x592ebd8b,"Server.get","Server.hx",70,0x1acdb3bb)
	HX_STACK_ARG(tags,"tags")
	HX_STACK_LINE(71)
	cpp::ArrayBase tasks = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tasks,"tasks");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		cpp::ArrayBase _g1 = ::Server_obj::json;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			if ((tmp1)){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			Dynamic task = tmp2;		HX_STACK_VAR(task,"task");
			HX_STACK_LINE(72)
			++(_g);
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp3 = (_g2 < tags->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(73)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					if ((tmp4)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					::String tmp5 = tags->__get(_g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					::String tag = tmp5;		HX_STACK_VAR(tag,"tag");
					HX_STACK_LINE(73)
					++(_g2);
					HX_STACK_LINE(74)
					::String tmp6 = tag;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					int tmp7 = task->__Field(HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(74)
					bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(74)
					if ((tmp8)){
						HX_STACK_LINE(75)
						Dynamic tmp9 = task;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(75)
						tasks->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
						HX_STACK_LINE(76)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(80)
	return tasks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Server_obj,get,return )

Dynamic Server_obj::getRequestParameter( ::String req,::String par,Dynamic __o_array){
Dynamic array = __o_array.Default(false);
	HX_STACK_FRAME("Server","getRequestParameter",0x767bf405,"Server.getRequestParameter","Server.hx",83,0x1acdb3bb)
	HX_STACK_ARG(req,"req")
	HX_STACK_ARG(par,"par")
	HX_STACK_ARG(array,"array")
{
		HX_STACK_LINE(84)
		::String tmp = req.split(HX_HCSTRING(";","\x3b","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		req = tmp;
		HX_STACK_LINE(85)
		Array< ::String > spl = req.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(spl,"spl");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp1 = (_g < spl->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(86)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(86)
				if ((tmp2)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				::String tmp3 = spl->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				::String s = tmp3;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(86)
				++(_g);
				HX_STACK_LINE(87)
				Array< ::String > param = s.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(param,"param");
				HX_STACK_LINE(88)
				::String tmp4 = param->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				::String tmp5 = par;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				if ((tmp6)){
					HX_STACK_LINE(89)
					::String tmp7 = s.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(89)
					Dynamic res = tmp7;		HX_STACK_VAR(res,"res");
					HX_STACK_LINE(90)
					::String tmp8 = param->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(90)
					int tmp9 = tmp8.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					bool tmp10 = (tmp9 != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					if ((tmp10)){
						HX_STACK_LINE(91)
						res = Array_obj< ::String >::__new();
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(92)
							::String tmp11 = param->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							Array< ::String > _g2 = tmp11.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(92)
							while((true)){
								HX_STACK_LINE(92)
								bool tmp12 = (_g1 < _g2->length);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(92)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(92)
								if ((tmp13)){
									HX_STACK_LINE(92)
									break;
								}
								HX_STACK_LINE(92)
								::String tmp14 = _g2->__get(_g1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(92)
								::String i = tmp14;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(92)
								++(_g1);
								HX_STACK_LINE(93)
								res->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(i);
							}
						}
						HX_STACK_LINE(95)
						Dynamic tmp11 = res;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(95)
						return tmp11;
					}
					HX_STACK_LINE(97)
					bool tmp11 = (array == true);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(97)
					if ((tmp11)){
						HX_STACK_LINE(98)
						return cpp::ArrayBase_obj::__new().Add(res);
					}
					else{
						HX_STACK_LINE(100)
						Dynamic tmp12 = res;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(100)
						return tmp12;
					}
				}
			}
		}
		HX_STACK_LINE(105)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Server_obj,getRequestParameter,return )

Void Server_obj::loadJSON( ){
{
		HX_STACK_FRAME("Server","loadJSON",0x91255a39,"Server.loadJSON","Server.hx",130,0x1acdb3bb)
		HX_STACK_LINE(131)
		::String tmp = ::sys::io::File_obj::getContent(HX_HCSTRING("tasks.json","\x08","\x71","\x3a","\xe0"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::String file = tmp;		HX_STACK_VAR(file,"file");
		HX_STACK_LINE(132)
		::haxe::format::JsonParser tmp1 = ::haxe::format::JsonParser_obj::__new(file);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		Dynamic tmp2 = tmp1->parseRec();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::Server_obj::json = tmp2;
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			cpp::ArrayBase _g1 = ::Server_obj::json;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(133)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(133)
				if ((tmp4)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				Dynamic task = tmp5;		HX_STACK_VAR(task,"task");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(134)
				int tmp6 = task->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				int tmp7 = ::Server_obj::taskIDInc;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(134)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				if ((tmp8)){
					HX_STACK_LINE(134)
					::Server_obj::taskIDInc = task->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Server_obj,loadJSON,(void))

Void Server_obj::setJSON( ){
{
		HX_STACK_FRAME("Server","setJSON",0x70ae7a3f,"Server.setJSON","Server.hx",138,0x1acdb3bb)
		HX_STACK_LINE(139)
		::String tmp = ::haxe::format::JsonPrinter_obj::print(::Server_obj::json,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::String str = tmp;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(140)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::sys::io::File_obj::saveContent(HX_HCSTRING("tasks.json","\x08","\x71","\x3a","\xe0"),tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Server_obj,setJSON,(void))


Server_obj::Server_obj()
{
	clientMessage = new __default_clientMessage(this);
	clientConnected = new __default_clientConnected(this);
	clientDisconnected = new __default_clientDisconnected(this);
	readClientMessage = new __default_readClientMessage(this);
}

void Server_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Server);
	HX_MARK_MEMBER_NAME(clientMessage,"clientMessage");
	HX_MARK_MEMBER_NAME(clientConnected,"clientConnected");
	HX_MARK_MEMBER_NAME(clientDisconnected,"clientDisconnected");
	HX_MARK_MEMBER_NAME(readClientMessage,"readClientMessage");
	::cpp::net::ThreadServer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Server_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clientMessage,"clientMessage");
	HX_VISIT_MEMBER_NAME(clientConnected,"clientConnected");
	HX_VISIT_MEMBER_NAME(clientDisconnected,"clientDisconnected");
	HX_VISIT_MEMBER_NAME(readClientMessage,"readClientMessage");
	::cpp::net::ThreadServer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Server_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"clientMessage") ) { return clientMessage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clientConnected") ) { return clientConnected; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readClientMessage") ) { return readClientMessage; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clientDisconnected") ) { return clientDisconnected; }
	}
	return super::__Field(inName,inCallProp);
}

bool Server_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json; return true;  }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { outValue = clients; return true;  }
		if (HX_FIELD_EQ(inName,"setJSON") ) { outValue = setJSON_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadJSON") ) { outValue = loadJSON_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"taskIDInc") ) { outValue = taskIDInc; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getRequestParameter") ) { outValue = getRequestParameter_dyn(); return true;  }
	}
	return false;
}

Dynamic Server_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"clientMessage") ) { clientMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clientConnected") ) { clientConnected=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readClientMessage") ) { readClientMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clientDisconnected") ) { clientDisconnected=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Server_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { json=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { clients=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"taskIDInc") ) { taskIDInc=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Server_obj,clientMessage),HX_HCSTRING("clientMessage","\xbc","\x42","\xc7","\x64")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Server_obj,clientConnected),HX_HCSTRING("clientConnected","\xfe","\xd6","\x01","\x11")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Server_obj,clientDisconnected),HX_HCSTRING("clientDisconnected","\xa6","\x66","\xb9","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Server_obj,readClientMessage),HX_HCSTRING("readClientMessage","\x86","\x69","\x57","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Server_obj::json,HX_HCSTRING("json","\x28","\x42","\x68","\x46")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Server_obj::clients,HX_HCSTRING("clients","\xc8","\x37","\x81","\xfb")},
	{hx::fsInt,(void *) &Server_obj::taskIDInc,HX_HCSTRING("taskIDInc","\x5e","\x66","\x3f","\xed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clientMessage","\xbc","\x42","\xc7","\x64"),
	HX_HCSTRING("clientConnected","\xfe","\xd6","\x01","\x11"),
	HX_HCSTRING("clientDisconnected","\xa6","\x66","\xb9","\x6d"),
	HX_HCSTRING("readClientMessage","\x86","\x69","\x57","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Server_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Server_obj::json,"json");
	HX_MARK_MEMBER_NAME(Server_obj::clients,"clients");
	HX_MARK_MEMBER_NAME(Server_obj::taskIDInc,"taskIDInc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Server_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Server_obj::json,"json");
	HX_VISIT_MEMBER_NAME(Server_obj::clients,"clients");
	HX_VISIT_MEMBER_NAME(Server_obj::taskIDInc,"taskIDInc");
};

#endif

hx::Class Server_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("clients","\xc8","\x37","\x81","\xfb"),
	HX_HCSTRING("taskIDInc","\x5e","\x66","\x3f","\xed"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getRequestParameter","\x10","\xbd","\x0b","\xe5"),
	HX_HCSTRING("loadJSON","\x4e","\xaf","\xef","\xb6"),
	HX_HCSTRING("setJSON","\xca","\x1e","\xd4","\x0b"),
	::String(null()) };

void Server_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Server_obj::__GetStatic;
	__mClass->mSetStaticField = &Server_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Server_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Server_obj::__boot()
{
	clients= Array_obj< ::Dynamic >::__new();
	taskIDInc= (int)0;
}

