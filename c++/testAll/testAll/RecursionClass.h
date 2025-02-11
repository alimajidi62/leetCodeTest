#pragma once
#include <iostream>

class RecursionClass
{
public:
	void printN(int n)
	{
		
		if (n > 1)
		{
			std::cout << " " << n;
			printN(n - 1);
		}
		else std::cout << " " << n;
	}
};

