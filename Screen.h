#pragma once
#include "Component.h"
class Screen :
	public Component
{
public:
	Screen(string);
	string UseComponent() override;
};

