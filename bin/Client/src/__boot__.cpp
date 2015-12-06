#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
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
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Client
#include <Client.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::io::Error_obj::__register();
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::sys::io::FileInput_obj::__register();
::Sys_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Bytes_obj::__register();
::cpp::Lib_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Client_obj::__register();
::haxe::io::Error_obj::__boot();
::sys::net::Host_obj::__init__();
::Sys_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

