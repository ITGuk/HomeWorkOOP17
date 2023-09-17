#pragma once
#include "Component.h"
#include "Camera.h"
#include "Screen.h"
#include <vector>

class MobilePhone
{
private:
    vector<Component*> components;
    void displayStatus(Component*);

public:
    MobilePhone();
    void TurnOn();
    void TurnOff();
    void MakePhoto();
    void ShowImage();

};