// testAll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClearDigits.h"
#include "RecursionClass.h"
#include "FibonacciClass.h"
#include "MinimumOperationstoExceedThresholdValueII.h"
#include <string>
#include <algorithm>
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
int sumFourDivisors1(vector<int>& nums) {
    int allsum = 0;
    for (auto num : nums)
    {
        int count = 0;
        int sum = 0;
        
        // Check divisors up to sqrt(num)
        for (int i = 1; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                if (i * i == num) {
                    // Perfect square - i is a divisor only once
                    count++;
                    sum += i;
                } else {
                    // Both i and num/i are divisors
                    count += 2;
                    sum += i + num / i;
                }
                
                // Early exit if we have more than 4 divisors
                if (count > 4) break;
            }
        }
        
        if (count == 4) allsum += sum;
    }
    return allsum;

}
int sumFourDivisors(vector<int>& nums) {
        int allsum = 0;
for (auto num : nums)
{
    int count = 0;
    int sum = 1 + num;
    for (int i = 2;i <= num / 2;i++)
    {
        if (num % i == 0)
        {
            count++;
            sum = sum + i;
        }
         if (count > 2) break;
    }
    if (count == 2) allsum= allsum+ sum;
}
return allsum;
    }
int main()
{
    //auto ss=Function_isPalindrome(12321);
    vector<int> m_input = { 21,2,7};
    auto s=sumFourDivisors(m_input);

}
