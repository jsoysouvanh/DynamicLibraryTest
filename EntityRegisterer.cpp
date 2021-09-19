#include "EntityRegisterer.h"

#include "Database.h"

EntityRegisterer::EntityRegisterer(Entity const& entity) noexcept:
	_registeredEntity{entity}
{
	Database::getInternal().registerEntity(entity);
}

EntityRegisterer::~EntityRegisterer() noexcept
{
	Database::getInternal().unregisterEntity(_registeredEntity);
}