#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_Server
#include <Server.h>
#endif
#ifndef INCLUDED_cpp_net_ThreadServer
#include <cpp/net/ThreadServer.h>
#endif


void __hxcpp_main() {
::Server_obj::main();
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
