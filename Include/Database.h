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

		DLL_API static Database&	getInternal()							noexcept;
		DLL_API void				registerEntity(Entity const& entity)	noexcept;
		DLL_API void				unregisterEntity(Entity const& entity)	noexcept;

	public:
		DLL_API void			printDatabase()						const noexcept;
		DLL_API Entity const*	getEntity(std::string const& name)	const noexcept;
};

inline Database const& getDatabase() noexcept
{
	return Database::getInternal();
}