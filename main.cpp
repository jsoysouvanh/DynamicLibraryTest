#include <iostream>

#include "Database.h"
#include "GameplayScript.h"
#include "SomeProperty.h"

int main()
{
	GameplayScript s;

	std::cout << "MAIN" << std::endl;
	getDatabase().printDatabase();

	Entity const* someProp = getDatabase().getEntity("SomeProperty");
	std::cout << "SomeProp: " << someProp << std::endl;

	Entity const* gpScript = getDatabase().getEntity("GameplayScript");
	std::cout << "GameplayScript: " << gpScript << std::endl;

	SomeProperty prop;

	return EXIT_SUCCESS;
}