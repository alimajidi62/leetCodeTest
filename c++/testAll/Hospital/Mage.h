#pragma once
#include "Character.h"
class Mage :
    public Character
{
    public:
    Mage(std::string name, int Health_points, Point point);
    Mage(std::string name, int Health_points);
	void performance() override;

};

