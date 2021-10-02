#pragma once

#include <iostream>

#include "Config.h"

class Type
{
};

template <typename T>
Type const& getType()
{
	static Type type;
	static bool initialized = false;

	if (!initialized)
	{
		initialized = true;
		std::cout << "Init" << std::endl;
	}

	return type;
}

DLL_API void const* getGetTypeIntAddress();