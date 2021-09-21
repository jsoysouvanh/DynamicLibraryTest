#pragma once

#include "Config.h"
#include "Base.h"
#include "EntityRegisterer.h"
#include "Entity.h"

class SomeProperty : public Base
{
	public:
		DLL_API virtual void DoSomething() const noexcept override;
};