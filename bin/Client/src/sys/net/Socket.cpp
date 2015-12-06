#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
namespace sys{
namespace net{

Void Socket_obj::__construct()
{
HX_STACK_FRAME("sys.net.Socket","new",0x202a8cf7,"sys.net.Socket.new","D:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",127,0xbc55bbd0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(128)
	Dynamic tmp = ::sys::net::Socket_obj::socket_new(false);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	this->__s = tmp;
	HX_STACK_LINE(129)
	Dynamic tmp1 = this->__s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	::sys::net::_Socket::SocketInput tmp2 = ::sys::net::_Socket::SocketInput_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	this->input = tmp2;
	HX_STACK_LINE(130)
	Dynamic tmp3 = this->__s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	::sys::net::_Socket::SocketOutput tmp4 = ::sys::net::_Socket::SocketOutput_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	this->output = tmp4;
}
;
	return null();
}

//Socket_obj::~Socket_obj() { }

Dynamic Socket_obj::__CreateEmpty() { return  new Socket_obj; }
hx::ObjectPtr< Socket_obj > Socket_obj::__new()
{  hx::ObjectPtr< Socket_obj > _result_ = new Socket_obj();
	_result_->__construct();
	return _result_;}

Dynamic Socket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Socket_obj > _result_ = new Socket_obj();
	_result_->__construct();
	return _result_;}

Void Socket_obj::write( ::String content){
{
		HX_STACK_FRAME("sys.net.Socket","write",0xa0c9bd36,"sys.net.Socket.write","D:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",151,0xbc55bbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(152)
		Dynamic tmp = this->__s;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Array< unsigned char > Block( ::String &content){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","D:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",152,0xbc55bbd0)
				{
					HX_STACK_LINE(152)
					::String tmp1 = content;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(152)
					::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(152)
					::haxe::io::Bytes _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(152)
					return _this->b;
				}
				return null();
			}
		};
		HX_STACK_LINE(152)
		::sys::net::Socket_obj::socket_write(tmp,_Function_1_1::Block(content));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,write,(void))

Void Socket_obj::connect( ::sys::net::Host host,int port){
{
		HX_STACK_FRAME("sys.net.Socket","connect",0x1ee69001,"sys.net.Socket.connect","D:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",156,0xbc55bbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(port,"port")
		HX_STACK_LINE(156)
		try
		{
		HX_STACK_CATCHABLE(::String, 0);
		{
			HX_STACK_LINE(157)
			Dynamic tmp = this->__s;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(157)
			int tmp1 = host->ip;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			int tmp2 = port;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			::sys::net::Socket_obj::socket_connect(tmp,tmp1,tmp2);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String s = __e;{
					HX_STACK_LINE(159)
					bool tmp = (s == HX_HCSTRING("std@socket_connect","\x1b","\x03","\x66","\x65"));		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(159)
					if ((tmp)){
						HX_STACK_LINE(160)
						::String tmp1 = host->toString();		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(160)
						::String tmp2 = (HX_HCSTRING("Failed to connect on ","\xa9","\x2b","\xe3","\x45") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(160)
						::String tmp3 = (tmp2 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(160)
						int tmp4 = port;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(160)
						::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(160)
						HX_STACK_DO_THROW(tmp5);
					}
					else{
						HX_STACK_LINE(162)
						::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(162)
						::cpp::Lib_obj::rethrow(tmp1);
					}
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,connect,(void))

Dynamic Socket_obj::socket_new;

Dynamic Socket_obj::socket_write;

Dynamic Socket_obj::socket_connect;


Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(output,"output");
}

Dynamic Socket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return connect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Socket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"socket_new") ) { outValue = socket_new; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_write") ) { outValue = socket_write; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"socket_connect") ) { outValue = socket_connect; return true;  }
	}
	return false;
}

Dynamic Socket_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Socket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"socket_new") ) { socket_new=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_write") ) { socket_write=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"socket_connect") ) { socket_connect=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Socket_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Socket_obj,output),HX_HCSTRING("output","\x01","\x0f","\x81","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Socket_obj::socket_new,HX_HCSTRING("socket_new","\x94","\xf6","\xc0","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Socket_obj::socket_write,HX_HCSTRING("socket_write","\x13","\x88","\x03","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Socket_obj::socket_connect,HX_HCSTRING("socket_connect","\x1e","\x8c","\x4e","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_new,"socket_new");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_write,"socket_write");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_connect,"socket_connect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_new,"socket_new");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_write,"socket_write");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_connect,"socket_connect");
};

#endif

hx::Class Socket_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("socket_new","\x94","\xf6","\xc0","\xc3"),
	HX_HCSTRING("socket_write","\x13","\x88","\x03","\x26"),
	HX_HCSTRING("socket_connect","\x1e","\x8c","\x4e","\xbe"),
	::String(null()) };

void Socket_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.Socket","\x85","\x45","\x9d","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Socket_obj::__GetStatic;
	__mClass->mSetStaticField = &Socket_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Socket_obj >;
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

void Socket_obj::__boot()
{
	socket_new= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_new","\x94","\xf6","\xc0","\xc3"),(int)1);
	socket_write= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_write","\x13","\x88","\x03","\x26"),(int)2);
	socket_connect= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_connect","\x1e","\x8c","\x4e","\xbe"),(int)3);
}

} // end namespace sys
} // end namespace net
