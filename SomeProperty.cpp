#include "SomeProperty.h"

namespace generated { EntityRegisterer registererSomeProperty = SomeProperty::staticGetArchetype(); }

Entity const& SomeProperty::staticGetArchetype() noexcept
{
	static Entity entity{"SomeProperty"};
	return entity;
}