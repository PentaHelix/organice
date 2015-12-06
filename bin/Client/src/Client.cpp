#include <hxcpp.h>

#ifndef INCLUDED_Client
#include <Client.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

Void Client_obj::__construct()
{
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Void Client_obj::main( ){
{
		HX_STACK_FRAME("Client","main",0xf3ef851c,"Client.main","Client.hx",5,0x69b39933)
		HX_STACK_LINE(6)
		::sys::net::Socket tmp = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6)
		::sys::net::Socket s = tmp;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(7)
		::sys::net::Host tmp1 = ::sys::net::Host_obj::__new(HX_HCSTRING("127.0.0.1","\xfd","\xbc","\x5e","\xa1"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		s->connect(tmp1,(int)5423);
		HX_STACK_LINE(8)
		::cpp::Lib_obj::println(HX_HCSTRING("Started client...","\xc4","\xe6","\x36","\x8f"));
		HX_STACK_LINE(9)
		while((true)){
			HX_STACK_LINE(10)
			::haxe::io::Input tmp2 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10)
			::String tmp3 = tmp2->readLine();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10)
			::String input = tmp3;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(11)
			::String tmp4 = input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11)
			s->write(tmp4);
			HX_STACK_LINE(12)
			::String tmp5 = s->input->readLine();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12)
			::String res = tmp5;		HX_STACK_VAR(res,"res");
			HX_STACK_LINE(13)
			::String tmp6 = res;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13)
			::cpp::Lib_obj::println(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Client_obj,main,(void))


Client_obj::Client_obj()
{
}

bool Client_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#endif

hx::Class Client_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Client_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Client_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Client_obj >;
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

