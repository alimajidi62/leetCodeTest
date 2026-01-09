#include "WarriorWithhourse.h"
WarriorWithhourse::WarriorWithhourse(std::string name, int Health_points, Point point)
	:Warrior(name, Health_points, point), horseSpeed(50) // Default horse speed
{
}
WarriorWithhourse::WarriorWithhourse(std::string name, int Health_points)
	:Warrior(name, Health_points), horseSpeed(50) // Default horse speed
{
}
WarriorWithhourse::WarriorWithhourse(std::string name, int Health_points, Point point, int horseSpeed)
	:Warrior(name, Health_points, point), horseSpeed(horseSpeed)
{
}
void WarriorWithhourse::performance()
{
	// Implementation of WarriorWithhourse's performance
	SetPerformance("Warrior With Horse Performance at speed " + std::to_string(horseSpeed));
}

