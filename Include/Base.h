#pragma once

#include "Config.h"

class DLL_API Base
{
	public:
		Base()				= default;
		Base(Base const&)	= default;
		Base(Base&&)		= default;
		virtual ~Base()		= default;

		//void DoSomething() const noexcept = 0;

		Base& operator=(Base const&)	= default;
		Base& operator=(Base&&)			= default;
};