#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)
HX_DECLARE_CLASS2(haxe,io,Output)


class HXCPP_CLASS_ATTRIBUTES  Sys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static void __boot();
		static ::haxe::io::Output _stderr( );
		static Dynamic _stderr_dyn();

		static ::String systemName( );
		static Dynamic systemName_dyn();

		static Dynamic sys_string;
		static Dynamic &sys_string_dyn() { return sys_string;}
		static Dynamic file_stderr;
		static Dynamic &file_stderr_dyn() { return file_stderr;}
};


#endif /* INCLUDED_Sys */ 
