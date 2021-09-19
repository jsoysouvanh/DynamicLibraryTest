#pragma once

#include "Config.h"
#include "Entity.h"

class EntityRegisterer
{
	private:
		Entity const& _registeredEntity;

	public:
		REFUREKU_API EntityRegisterer(Entity const& entity) noexcept;
		REFUREKU_API ~EntityRegisterer()					noexcept;
};