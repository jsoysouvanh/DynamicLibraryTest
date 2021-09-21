#pragma once

#include "Config.h"
#include "EntityRegisterer.h"
#include "Entity.h"

class DLL_API SomeProperty
{
	public:
		static Entity const& staticGetArchetype() noexcept;
};

//namespace generated
//{
//	extern EntityRegisterer registererSomeProperty;
//}