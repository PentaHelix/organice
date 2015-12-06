#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_net_Poll
#include <cpp/net/Poll.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
namespace cpp{
namespace net{

Void Poll_obj::__construct(int n)
{
HX_STACK_FRAME("cpp.net.Poll","new",0x6f60d32d,"cpp.net.Poll.new","D:\\HaxeToolkit\\haxe\\std/cpp/net/Poll.hx",31,0x50c04ba9)
HX_STACK_THIS(this)
HX_STACK_ARG(n,"n")
{
	HX_STACK_LINE(32)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Dynamic tmp1 = ::cpp::net::Poll_obj::socket_poll_alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->mPollHandle = tmp1;
	HX_STACK_LINE(33)
	this->readIndexes = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(34)
	this->writeIndexes = cpp::ArrayBase_obj::__new();
}
;
	return null();
}

//Poll_obj::~Poll_obj() { }

Dynamic Poll_obj::__CreateEmpty() { return  new Poll_obj; }
hx::ObjectPtr< Poll_obj > Poll_obj::__new(int n)
{  hx::ObjectPtr< Poll_obj > _result_ = new Poll_obj();
	_result_->__construct(n);
	return _result_;}

Dynamic Poll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Poll_obj > _result_ = new Poll_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > Poll_obj::poll( Array< ::Dynamic > a,Dynamic t){
	HX_STACK_FRAME("cpp.net.Poll","poll",0x06b1eed2,"cpp.net.Poll.poll","D:\\HaxeToolkit\\haxe\\std/cpp/net/Poll.hx",48,0x50c04ba9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(49)
	bool tmp = (t == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	if ((tmp)){
		HX_STACK_LINE(49)
		t = ((Float)-1.0);
	}
	HX_STACK_LINE(50)
	Dynamic tmp1 = this->mPollHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	cpp::ArrayBase read = ::cpp::net::Poll_obj::socket_poll(a,tmp1,tmp2);		HX_STACK_VAR(read,"read");
	HX_STACK_LINE(52)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(53)
	bool tmp3 = (read != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	if ((tmp3)){
		HX_STACK_LINE(53)
		tmp4 = (read->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
	}
	else{
		HX_STACK_LINE(53)
		tmp4 = false;
	}
	HX_STACK_LINE(53)
	if ((tmp4)){
		HX_STACK_LINE(54)
		int tmp5 = (read->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		result[tmp5] = null();
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			int _g = read->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				if ((tmp7)){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(56)
				Dynamic tmp9 = read->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(56)
				result[i] = tmp9;
			}
		}
	}
	HX_STACK_LINE(58)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(Poll_obj,poll,return )

Dynamic Poll_obj::socket_poll_alloc;

Dynamic Poll_obj::socket_poll;


Poll_obj::Poll_obj()
{
}

void Poll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Poll);
	HX_MARK_MEMBER_NAME(mPollHandle,"mPollHandle");
	HX_MARK_MEMBER_NAME(readIndexes,"readIndexes");
	HX_MARK_MEMBER_NAME(writeIndexes,"writeIndexes");
	HX_MARK_END_CLASS();
}

void Poll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mPollHandle,"mPollHandle");
	HX_VISIT_MEMBER_NAME(readIndexes,"readIndexes");
	HX_VISIT_MEMBER_NAME(writeIndexes,"writeIndexes");
}

Dynamic Poll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"poll") ) { return poll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mPollHandle") ) { return mPollHandle; }
		if (HX_FIELD_EQ(inName,"readIndexes") ) { return readIndexes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeIndexes") ) { return writeIndexes; }
	}
	return super::__Field(inName,inCallProp);
}

bool Poll_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"socket_poll") ) { outValue = socket_poll; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"socket_poll_alloc") ) { outValue = socket_poll_alloc; return true;  }
	}
	return false;
}

Dynamic Poll_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mPollHandle") ) { mPollHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readIndexes") ) { readIndexes=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeIndexes") ) { writeIndexes=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Poll_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"socket_poll") ) { socket_poll=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"socket_poll_alloc") ) { socket_poll_alloc=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Poll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mPollHandle","\x14","\xde","\x8d","\x05"));
	outFields->push(HX_HCSTRING("readIndexes","\x4a","\xef","\xaa","\x33"));
	outFields->push(HX_HCSTRING("writeIndexes","\xe1","\x00","\xee","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Poll_obj,mPollHandle),HX_HCSTRING("mPollHandle","\x14","\xde","\x8d","\x05")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Poll_obj,readIndexes),HX_HCSTRING("readIndexes","\x4a","\xef","\xaa","\x33")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Poll_obj,writeIndexes),HX_HCSTRING("writeIndexes","\xe1","\x00","\xee","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Poll_obj::socket_poll_alloc,HX_HCSTRING("socket_poll_alloc","\x81","\xeb","\x74","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Poll_obj::socket_poll,HX_HCSTRING("socket_poll","\x8b","\xc5","\x70","\x86")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mPollHandle","\x14","\xde","\x8d","\x05"),
	HX_HCSTRING("readIndexes","\x4a","\xef","\xaa","\x33"),
	HX_HCSTRING("writeIndexes","\xe1","\x00","\xee","\xa5"),
	HX_HCSTRING("poll","\x3f","\x7e","\x5c","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Poll_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Poll_obj::socket_poll_alloc,"socket_poll_alloc");
	HX_MARK_MEMBER_NAME(Poll_obj::socket_poll,"socket_poll");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Poll_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Poll_obj::socket_poll_alloc,"socket_poll_alloc");
	HX_VISIT_MEMBER_NAME(Poll_obj::socket_poll,"socket_poll");
};

#endif

hx::Class Poll_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("socket_poll_alloc","\x81","\xeb","\x74","\xb0"),
	HX_HCSTRING("socket_poll","\x8b","\xc5","\x70","\x86"),
	::String(null()) };

void Poll_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.net.Poll","\xbb","\xb8","\xfa","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Poll_obj::__GetStatic;
	__mClass->mSetStaticField = &Poll_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Poll_obj >;
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

void Poll_obj::__boot()
{
	socket_poll_alloc= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_poll_alloc","\x81","\xeb","\x74","\xb0"),(int)1);
	socket_poll= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("socket_poll","\x8b","\xc5","\x70","\x86"),(int)3);
}

} // end namespace cpp
} // end namespace net
