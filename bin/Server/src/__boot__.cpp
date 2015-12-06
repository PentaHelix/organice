#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_cpp_net_Poll
#include <cpp/net/Poll.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Server
#include <Server.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_net_ThreadServer
#include <cpp/net/ThreadServer.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::io::Error_obj::__register();
::haxe::StackItem_obj::__register();
::ValueType_obj::__register();
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::File_obj::__register();
::cpp::net::Poll_obj::__register();
::Sys_obj::__register();
::Server_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::format::JsonPrinter_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::Utf8_obj::__register();
::haxe::IMap_obj::__register();
::haxe::CallStack_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Lock_obj::__register();
::Type_obj::__register();
::cpp::Lib_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::cpp::net::ThreadServer_obj::__register();
::Reflect_obj::__register();
::Date_obj::__register();
::haxe::io::Error_obj::__boot();
::haxe::StackItem_obj::__boot();
::ValueType_obj::__boot();
::sys::net::Host_obj::__init__();
::cpp::net::Poll_obj::__boot();
::Server_obj::__boot();
::Sys_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::_Socket::SocketOutput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

