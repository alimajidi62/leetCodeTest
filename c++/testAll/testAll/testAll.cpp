// testAll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClearDigits.h"
#include "RecursionClass.h"
#include "FibonacciClass.h"
#include "MinimumOperationstoExceedThresholdValueII.h"
#include <string>
using namespace std;
bool Function_isPalindrome(int x) {

    string input = to_string(x);
    auto n = input.size();

    for (int i = 0;i < n/2;i++)
    {
        auto l1 = input[i];
        auto l2 = input[n - i-1];
        if (input[i]!= input[n - i-1]) return false;
    }
    return true;

}
int main()
{
    auto ss=Function_isPalindrome(12321);

}
