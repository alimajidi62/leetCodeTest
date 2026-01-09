#include "Warrior.h"
Warrior::Warrior(std::string name, int Health_points, Point point)
	:Character(name, Health_points, point)
{
}
Warrior::Warrior(std::string name, int Health_points)
	:Character(name, Health_points)
{
}
void Warrior::performance()
{
	// Implementation of Warrior's performance
	SetPerformance( "Warrior Performance");
}