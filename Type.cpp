#include "Type.h"

template DLL_API Type const& getType<int>();

void const* getGetTypeIntAddress()
{
	std::cout << "getType<int>: " << &getType<int> << std::endl;
	std::cout << "getType<int>(): " << &getType<int>() << std::endl;

	return &getType<int>();
}