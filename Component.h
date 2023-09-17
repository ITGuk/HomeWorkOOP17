#pragma once
#include <iostream>

using namespace std;

class Component
{
private:
	string name;
	bool status;
public:
	Component(string);

	virtual void TurnOn();
	virtual void TurnOff();
	virtual bool GetStatus();
	virtual string Getname();
	virtual string UseComponent() = 0;

};

