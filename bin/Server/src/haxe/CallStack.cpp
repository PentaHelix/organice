#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace haxe{

Void CallStack_obj::__construct()
{
	return null();
}

//CallStack_obj::~CallStack_obj() { }

Dynamic CallStack_obj::__CreateEmpty() { return  new CallStack_obj; }
hx::ObjectPtr< CallStack_obj > CallStack_obj::__new()
{  hx::ObjectPtr< CallStack_obj > _result_ = new CallStack_obj();
	_result_->__construct();
	return _result_;}

Dynamic CallStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CallStack_obj > _result_ = new CallStack_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > CallStack_obj::exceptionStack( ){
	Array< ::String > s = ::__hxcpp_get_exception_stack();
	return ::haxe::CallStack_obj::makeStack(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,exceptionStack,return )

::String CallStack_obj::toString( Array< ::Dynamic > stack){
	HX_STACK_FRAME("haxe.CallStack","toString",0xd59be738,"haxe.CallStack.toString","D:\\HaxeToolkit\\haxe\\std/haxe/CallStack.hx",206,0x6e9a0b25)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(207)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::StringBuf b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		while((true)){
			HX_STACK_LINE(208)
			bool tmp1 = (_g < stack->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(208)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			if ((tmp2)){
				HX_STACK_LINE(208)
				break;
			}
			HX_STACK_LINE(208)
			::haxe::StackItem tmp3 = stack->__get(_g).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(208)
			::haxe::StackItem s = tmp3;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(208)
			++(_g);
			HX_STACK_LINE(209)
			b->add(HX_HCSTRING("\nCalled from ","\xbd","\x26","\x6b","\x81"));
			HX_STACK_LINE(210)
			::StringBuf tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(210)
			::haxe::StackItem tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(210)
			::haxe::CallStack_obj::itemToString(tmp4,tmp5);
		}
	}
	HX_STACK_LINE(212)
	::String tmp1 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,toString,return )

Void CallStack_obj::itemToString( ::StringBuf b,::haxe::StackItem s){
{
		HX_STACK_FRAME("haxe.CallStack","itemToString",0xc121696b,"haxe.CallStack.itemToString","D:\\HaxeToolkit\\haxe\\std/haxe/CallStack.hx",216,0x6e9a0b25)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(216)
		switch( (int)(s->__Index())){
			case (int)0: {
				HX_STACK_LINE(218)
				b->add(HX_HCSTRING("a C function","\xf4","\x1b","\x53","\xcb"));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(216)
				::String tmp = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(216)
				::String m = tmp;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(219)
				{
					HX_STACK_LINE(220)
					b->add(HX_HCSTRING("module ","\xf4","\xe1","\xfa","\xf7"));
					HX_STACK_LINE(221)
					::String tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(221)
					b->add(tmp1);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(216)
				int tmp = (::haxe::StackItem(s))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(216)
				int line = tmp;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(216)
				::String tmp1 = (::haxe::StackItem(s))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(216)
				::String file = tmp1;		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(216)
				::haxe::StackItem tmp2 = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(216)
				::haxe::StackItem s1 = tmp2;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(223)
					bool tmp3 = (s1 != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(223)
					if ((tmp3)){
						HX_STACK_LINE(224)
						::StringBuf tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(224)
						::haxe::StackItem tmp5 = s1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(224)
						::haxe::CallStack_obj::itemToString(tmp4,tmp5);
						HX_STACK_LINE(225)
						b->add(HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));
					}
					HX_STACK_LINE(227)
					::String tmp4 = file;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(227)
					b->add(tmp4);
					HX_STACK_LINE(228)
					b->add(HX_HCSTRING(" line ","\x8c","\x69","\x6d","\x40"));
					HX_STACK_LINE(229)
					int tmp5 = line;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(229)
					b->add(tmp5);
					HX_STACK_LINE(230)
					bool tmp6 = (s1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(230)
					if ((tmp6)){
						HX_STACK_LINE(230)
						b->add(HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(216)
				::String tmp = (::haxe::StackItem(s))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(216)
				::String meth = tmp;		HX_STACK_VAR(meth,"meth");
				HX_STACK_LINE(216)
				::String tmp1 = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(216)
				::String cname = tmp1;		HX_STACK_VAR(cname,"cname");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(232)
					::String tmp2 = cname;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(232)
					b->add(tmp2);
					HX_STACK_LINE(233)
					b->add(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
					HX_STACK_LINE(234)
					::String tmp3 = meth;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(234)
					b->add(tmp3);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(216)
				Dynamic tmp = (::haxe::StackItem(s))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(216)
				Dynamic n = tmp;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(236)
					b->add(HX_HCSTRING("local function #","\xb0","\xcd","\x97","\xff"));
					HX_STACK_LINE(237)
					Dynamic tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(237)
					b->add(tmp1);
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_obj,itemToString,(void))

Array< ::Dynamic > CallStack_obj::makeStack( Array< ::String > s){
	Array< ::String > stack = s;
	Array< ::Dynamic > m = Array_obj< ::Dynamic >::__new();
	{
		int _g = (int)0;
		while((true)){
			bool tmp = (_g < stack->length);
			bool tmp1 = !(tmp);
			if ((tmp1)){
				break;
			}
			::String tmp2 = stack->__get(_g);
			::String func = tmp2;
			++(_g);
			Array< ::String > words = func.split(HX_HCSTRING("::","\xc0","\x32","\x00","\x00"));
			bool tmp3 = (words->length == (int)0);
			if ((tmp3)){
				m->push(::haxe::StackItem_obj::CFunction);
			}
			else{
				bool tmp4 = (words->length == (int)2);
				if ((tmp4)){
					::String tmp5 = words->__get((int)0);
					::String tmp6 = words->__get((int)1);
					::haxe::StackItem tmp7 = ::haxe::StackItem_obj::Method(tmp5,tmp6);
					m->push(tmp7);
				}
				else{
					bool tmp5 = (words->length == (int)4);
					if ((tmp5)){
						::String tmp6 = words->__get((int)0);
						::String tmp7 = words->__get((int)1);
						::haxe::StackItem tmp8 = ::haxe::StackItem_obj::Method(tmp6,tmp7);
						::String tmp9 = words->__get((int)2);
						::String tmp10 = words->__get((int)3);
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);
						::haxe::StackItem tmp12 = ::haxe::StackItem_obj::FilePos(tmp8,tmp9,tmp11);
						m->push(tmp12);
					}
				}
			}
		}
	}
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,makeStack,return )


CallStack_obj::CallStack_obj()
{
}

bool CallStack_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeStack") ) { outValue = makeStack_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemToString") ) { outValue = itemToString_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStack_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStack_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("exceptionStack","\x79","\x48","\x56","\x0b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("itemToString","\xdf","\x1c","\x98","\x1c"),
	HX_HCSTRING("makeStack","\x7a","\xde","\xa3","\x57"),
	::String(null()) };

void CallStack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.CallStack","\x62","\x4b","\x54","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStack_obj >;
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

} // end namespace haxe
