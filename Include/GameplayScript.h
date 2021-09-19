#pragma once

#include "GameConfig.h"
#include "EntityRegisterer.h"
#include "Entity.h"

class GAME_API GameplayScript
{
	public:
		GameplayScript() noexcept;

		static Entity const& staticGetArchetype() noexcept;
};

//namespace generated
//{
//	extern EntityRegisterer registererGameplayScript;
//}