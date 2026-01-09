// Hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Warrior.h"
#include "Mage.h"
#include "WarriorWithhourse.h"
int main()
{
	Warrior solder1("John", 100, { 0,0 });
	solder1.performance();
	std::cout << solder1.GetName()<<" performe= "<<solder1.getPerformance() << std::endl;
	Mage mage1("Gandalf", 80, { 1,1 });
	mage1.performance();
	std::cout << mage1.GetName() << " performe= " <<mage1.getPerformance() << std::endl;
	WarriorWithhourse knight1("Arthur", 120, { 2,2 }, 75);
	knight1.performance();
	std::cout << knight1.GetName() << " performe= " << knight1.getPerformance() << std::endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
