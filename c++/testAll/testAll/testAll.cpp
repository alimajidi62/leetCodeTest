// testAll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClearDigits.h"
#include "RecursionClass.h"
#include "FibonacciClass.h"
#include "MinimumOperationstoExceedThresholdValueII.h"
int main()
{
    //ClearDigits s;
    //cout<<s.clearDigits("a1ss2");
    /*RecursionClass s;
    s.printN(10);*/
    FibonacciClass s;
    s.PrintFibonacci(10, 0, 1);
    MinimumOperationstoExceedThresholdValueII sM;
    vector<int> Input = { 999999999,999999999,999999999 };
    sM.minOperation(Input, 1000000000);

}
