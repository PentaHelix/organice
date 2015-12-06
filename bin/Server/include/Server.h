#ifndef INCLUDED_Server
#define INCLUDED_Server

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cpp_net_ThreadServer
#include <cpp/net/ThreadServer.h>
#endif
HX_DECLARE_CLASS0(Server)
HX_DECLARE_CLASS2(cpp,net,ThreadServer)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(sys,net,Socket)


class HXCPP_CLASS_ATTRIBUTES  Server_obj : public ::cpp::net::ThreadServer_obj{
	public:
		typedef ::cpp::net::ThreadServer_obj super;
		typedef Server_obj OBJ_;
		Server_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Server")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Server_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Server_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2"); }

		static void __boot();
		
		
		
		
		static cpp::ArrayBase json;
		static Array< ::Dynamic > clients;
		static int taskIDInc;
		static Void main( );
		static Dynamic main_dyn();

		static cpp::ArrayBase get( Array< ::String > tags);
		static Dynamic get_dyn();

		static Dynamic getRequestParameter( ::String req,::String par,Dynamic array);
		static Dynamic getRequestParameter_dyn();

		static Void loadJSON( );
		static Dynamic loadJSON_dyn();

		static Void setJSON( );
		static Dynamic setJSON_dyn();

};


#endif /* INCLUDED_Server */ 
