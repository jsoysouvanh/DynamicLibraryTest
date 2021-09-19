#pragma once

//Dynamic library import/export macros
#if defined(_WIN32) || defined(__CYGWIN__)

	#if defined(IGNORE_ALL)

		#define REFUREKU_API
	
	#elif defined(REFUREKU_EXPORT)

		#ifdef __GNUC__
			#define REFUREKU_API __attribute__((dllexport))
		#else
			#define REFUREKU_API __declspec(dllexport)
		#endif

	#else

		#ifdef __GNUC__
			#define REFUREKU_API	__attribute__((dllimport))
		#else
			#define REFUREKU_API	__declspec(dllimport)
		#endif

  #endif

	#define REFUREKU_INTERNAL

#else

	#if __GNUC__ >= 4

		#define REFUREKU_API		__attribute__((visibility("default")))
		#define REFUREKU_INTERNAL	__attribute__((visibility("hidden")))

	#else

		#define REFUREKU_API
		#define REFUREKU_INTERNAL

	#endif

#endif