#ifndef INCLUDED_Client
#define INCLUDED_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Client)


class HXCPP_CLASS_ATTRIBUTES  Client_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Client_obj OBJ_;
		Client_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Client")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Client_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Client_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"); }

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Client */ 
