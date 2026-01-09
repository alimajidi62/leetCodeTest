#include "Character.h"

#include <string>

Character::Character()
{
	
}
Character::Character(std::string name, int Health_points, Point point):
name(name), Health_points(Health_points), point(point)
{
}
Character::Character(std::string name, int Health_points):
name(name), Health_points(Health_points)
{
}
