#pragma once

#include <unordered_map>

#include "Config.h"
#include "Entity.h"

class EntityRegisterer;

class Database
{
	friend Database const& getDatabase() noexcept;
	friend EntityRegisterer;

	private:
		std::unordered_map<std::string, Entity const*> _entities;

		REFUREKU_API static Database&	getInternal()							noexcept;
		REFUREKU_API void				registerEntity(Entity const& entity)	noexcept;
		REFUREKU_API void				unregisterEntity(Entity const& entity)	noexcept;

	public:
		REFUREKU_API void			printDatabase()						const noexcept;
		REFUREKU_API Entity const*	getEntity(std::string const& name)	const noexcept;
};

inline Database const& getDatabase() noexcept
{
	return Database::getInternal();
}