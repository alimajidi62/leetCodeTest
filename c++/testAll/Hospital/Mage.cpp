#include "Mage.h"
Mage::Mage(std::string name, int Health_points, Point point)
	:Character(name, Health_points, point)
{
}
Mage::Mage(std::string name, int Health_points)
	:Character(name, Health_points)
{
}
void Mage::performance()
{
	// Implementation of Mage's performance
	SetPerformance("Mage Performance");
}
