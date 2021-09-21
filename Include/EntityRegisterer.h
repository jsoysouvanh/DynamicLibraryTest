#pragma once

#include "Config.h"
#include "Entity.h"

class EntityRegisterer
{
	private:
		Entity const& _registeredEntity;

	public:
		DLL_API EntityRegisterer(Entity const& entity)	noexcept;
		DLL_API ~EntityRegisterer()						noexcept;
};