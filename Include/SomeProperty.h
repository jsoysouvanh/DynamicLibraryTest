#pragma once

#include "Base.h"

//Need to export this class vtable without having to export the whole class
//Without vtable export, the class can't be instantiated in the target program (main.cpp:(.text+0x17): undefined reference to `vtable for SomeProperty')
//With the -fvisibility-ms-compat compilation flag, clang automatically exports the vtable of a polymorphic class, but g++ doesn't... So I'm stuck with g++ right now
class SomeProperty final : public Base
{
	public:
		DLL_API virtual void DoSomething() const noexcept override;
};