#include "MobilePhone.h"

MobilePhone::MobilePhone()
{
	components.push_back(new Camera("Camera"));
	components.push_back(new Screen("Screen"));
}

void MobilePhone::displayStatus(Component* n)
{
	cout << n->Getname() << " is ";
	if (n->GetStatus())
	{
		cout << "On" << endl;
	}
	else
	{
		cout << "Off" << endl;
	}
}

void MobilePhone::TurnOn()
{
	for (Component* n : components)
	{
		n->TurnOn();
		displayStatus(n);
	}
}

void MobilePhone::TurnOff()
{
	for (Component* n : components)
	{
		n->TurnOff();
		displayStatus(n);
	}
}

void MobilePhone::MakePhoto()
{
	cout << components[0]->UseComponent() << endl;
}

void MobilePhone::ShowImage()
{
	cout << components[1]->UseComponent() << endl;
}