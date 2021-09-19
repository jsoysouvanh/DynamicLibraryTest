#pragma once

#include "GameConfig.h"
#include "EntityRegisterer.h"
#include "Entity.h"

class GAME_API GameplayScript2
{
	public:
		static Entity const& staticGetArchetype() noexcept;
};

//namespace generated
//{
//	extern EntityRegisterer registererGameplayScript2;
//}