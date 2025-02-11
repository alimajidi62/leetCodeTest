#pragma once
#include <iostream>
class FibonacciClass
{
public:
	void PrintFibonacci(int n, int a , int b)
	{
		if (n>0 )
		{
			PrintFibonacci(n - 1, b, a + b);
			std::cout << " "<< a;
		}

	}
};

