#include "GameplayScript.h"

#include <iostream>

namespace generated { EntityRegisterer registererGameplayScript = GameplayScript::staticGetArchetype(); }

GameplayScript::GameplayScript() noexcept
{
}

Entity const& GameplayScript::staticGetArchetype() noexcept
{
	static Entity entity{"GameplayScript"};
	return entity;
}
//
//void someRandomMethod() noexcept
//{
//	std::cout << "Blabla" << std::endl;
//}