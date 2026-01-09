#pragma once
#include "Warrior.h"
class WarriorWithhourse :
    public Warrior
{
    public:
    WarriorWithhourse(std::string name, int Health_points, Point point);
    WarriorWithhourse(std::string name, int Health_points);
	WarriorWithhourse(std::string name, int Health_points, Point point, int horseSpeed);
	void performance() override;
    int GethorseSpeed() { return  horseSpeed; }
	void SethorseSpeed(int speed) { horseSpeed = speed; }
private:
	int horseSpeed;

};

