#include "Component.h"

Component::Component(string name)
{
	this->name = name;
	status = false;
}

void Component::TurnOn()
{
	status = true;
}

void Component::TurnOff()
{
	status = false;
}

bool Component::GetStatus()
{
	return status;
}

string Component::Getname()
{
	return name;
}