#include <iostream>
#include "Component.h"
#include "MobilePhone.h"
#include "Camera.h"
#include "Screen.h"

using namespace std;

int main()
{
    MobilePhone* phone = new MobilePhone();

	cout << "Initial Status:\n";
	phone->TurnOn();
	cout << "\nUsing Components:\n";
	phone->MakePhoto();
	phone->ShowImage();
	cout << "\nTurning Off:\n";
	phone->TurnOff();
}
