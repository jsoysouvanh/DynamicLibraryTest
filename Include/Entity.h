#pragma once

#include <string>

#include "Config.h"

class Entity
{
	private:
		std::string _name;
	
	public:
		REFUREKU_API Entity(std::string const& name) noexcept;

		REFUREKU_API inline std::string const& getName() const noexcept { return _name; }
};