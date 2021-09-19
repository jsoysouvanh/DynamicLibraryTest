#pragma once

//Dynamic library import/export macros
#if defined(_WIN32) || defined(__CYGWIN__)

	#if defined(GAME_EXPORT)

		#ifdef __GNUC__
			#define GAME_API __attribute__((dllexport))
		#else
			#define GAME_API __declspec(dllexport)
		#endif

	#else

		#ifdef __GNUC__
			#define GAME_API	__attribute__((dllimport))
		#else
			#define GAME_API	__declspec(dllimport)
		#endif

  #endif

	#define GAME_INTERNAL

#else

	#if __GNUC__ >= 4

		#define GAME_API		__attribute__((visibility("default")))
		#define GAME_INTERNAL	__attribute__((visibility("hidden")))

	#else

		#define GAME_API
		#define GAME_INTERNAL

	#endif

#endif