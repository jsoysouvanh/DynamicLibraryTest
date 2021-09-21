#pragma once

//Dynamic library import/export macros
#if defined(_WIN32) || defined(__CYGWIN__)

	#if defined(EXPORT_API)

		#ifdef __GNUC__
			#define DLL_API __attribute__((dllexport))
		#else
			#define DLL_API __declspec(dllexport)
		#endif

	#else

		#ifdef __GNUC__
			#define DLL_API	__attribute__((dllimport))
		#else
			#define DLL_API	__declspec(dllimport)
		#endif

  #endif

	#define DLL_INTERNAL

#else

	#if __GNUC__ >= 4

		#define DLL_API			__attribute__((visibility("default")))
		#define DLL_INTERNAL	__attribute__((visibility("hidden")))

	#else

		#define DLL_API
		#define DLL_INTERNAL

	#endif

#endif