#pragma once
#ifndef HELLOLIB_HELLO_INCLUDED
#define HELLOLIB_HELLO_INCLUDED

#if defined(_WIN32)
	#if defined(HELLO_LIB_EXPORT)
		#define HELLO_LIB_API __declspec(dllexport)
	#else
		#define HELLO_LIB_API __declspec(dllimport)
	#endif
#else
	#define HELLO_LIB_API
#endif

HELLO_LIB_API void DoHello();

#endif
