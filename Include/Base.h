#pragma once

#include "Config.h"

//Must export the whole base so that the class can be inherited in other classes outside of this shared library
class DLL_API Base
{
	public:
		//Definition is in .cpp to avoid inline in shared lib
		Base()			noexcept;
		Base(Base const&)	= delete;
		Base(Base&&)		= delete;
		virtual ~Base() noexcept;

		virtual void DoSomething() const noexcept = 0;
};