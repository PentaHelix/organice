#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Output Sys_obj::_stderr( ){
	HX_STACK_FRAME("Sys","stderr",0x3eb04003,"Sys.stderr","D:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",41,0x11cfd118)
	HX_STACK_LINE(42)
	Dynamic tmp = ::Sys_obj::file_stderr();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::io::Output tmp1 = ::sys::io::FileOutput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stderr,return )

::String Sys_obj::systemName( ){
	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","D:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",80,0x11cfd118)
	HX_STACK_LINE(81)
	::String tmp = ::Sys_obj::sys_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

Dynamic Sys_obj::sys_string;

Dynamic Sys_obj::file_stderr;


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _stderr_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_string") ) { outValue = sys_string; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_stderr") ) { outValue = file_stderr; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_string,HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stderr,HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),
	HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	sys_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	file_stderr= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),(int)0);
}

