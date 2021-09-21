#pragma once

#include <string>

#include "Config.h"

class Entity
{
	private:
		std::string _name;
	
	public:
		DLL_API Entity(std::string const& name) noexcept;

		DLL_API inline std::string const& getName() const noexcept { return _name; }
};