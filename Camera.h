#pragma once
#include "Component.h"
class Camera :
    public Component
{
public:
    Camera(string);

    string UseComponent() override;
};

