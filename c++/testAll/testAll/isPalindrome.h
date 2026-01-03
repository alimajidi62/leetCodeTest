#pragma once
#include <string>
using namespace std;

class isPalindrome {
public:
    bool Function_isPalindrome(int x) {
        
        string input = to_string(x);
        auto n = input.size();

        for (int i = 0;i < n / 2;i++)
        {
            auto l1 = input[i];
            auto l2 = input[n - i - 1];
            if (input[i] != input[n - i - 1]) return false;
        }
        return true;

    }
};