#pragma once
#include <vector>
#include <unordered_map>
using namespace std;
class MaxSumofaPairWithEqualSumofDigits
{
    int sumdigit(int num)
    {
        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num = num / 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map <int,int> sumDisgit;
        int sumAll = -1;
        for (auto s : nums)
        {
            int L = sumdigit(s);
            if (sumDisgit.contains(L))
            {
                sumAll = max(sumAll, sumDisgit[L] + s);
            }
            sumDisgit[sumdigit(s)] = max(sumDisgit[L],s);
        }
        return sumAll;
    }
};

