#include "Database.h"

#include <iostream>

Database& Database::getInternal() noexcept
{
	static Database database;
	return database;
}

void Database::registerEntity(Entity const& entity) noexcept
{
	std::cout << "Register entity " << entity.getName() << " " << &entity << " to database " << this << std::endl;

	_entities[entity.getName()] = &entity;
}

void Database::unregisterEntity(Entity const& entity) noexcept
{
	std::cout << "Unregister entity " << entity.getName() << " from database " << this << std::endl;

	_entities.erase(entity.getName());
}

void Database::printDatabase() const noexcept
{
	std::cout << "Database: " << this << std::endl;
}

Entity const* Database::getEntity(std::string const& name) const noexcept
{
	auto it = _entities.find(name);

	return (it != _entities.cend()) ? it->second : nullptr;
}