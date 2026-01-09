#pragma once
#include "Character.h"
class Warrior : public Character
{
	public:
	Warrior(std::string name, int Health_points, Point point);
	Warrior(std::string name, int Health_points);
	void performance() override;
};

