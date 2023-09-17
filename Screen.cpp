#include "Screen.h"

Screen::Screen(string name) : Component(name) {}

string Screen::UseComponent()
{
	return "Show the image.";
}