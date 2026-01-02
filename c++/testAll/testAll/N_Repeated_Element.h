#pragma once
//class N_Repeated_Element
//{
//};
#include <vector>
#include <unordered_map>
using namespace std;
class N_Repeated_Element {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> count;
        
        // Count frequency of each element
        for (int num : nums) {
            count[num]++;
            // If we find an element appearing more than once, it must be the answer
            // since only one element repeats n times
            if (count[num] > 1) {
                return num;
            }
        }
        
        return -1; // Should never reach here given the problem constraints
    }
};