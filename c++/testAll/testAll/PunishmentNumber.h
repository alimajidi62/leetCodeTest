#include <string>

using namespace std;

class Solution {
public:
    // Backtracking function to check if partitioning is possible
    bool isPartitionPossible(const string& str, int target, int start = 0, int currentSum = 0) {
        if (start == str.size()) {
            return currentSum == target;
        }
        int sum = 0;
        for (int i = start; i < str.size(); ++i) {
            sum = sum * 10 + (str[i] - '0');
            if (isPartitionPossible(str, target, i + 1, currentSum + sum)) {
                return true;
            }
        }
        return false;
    }

    // Check if an integer satisfies the given condition
    bool checkPartitionCondition(int i) {
        long long square = 1LL * i * i;
        string sq_str = to_string(square);
        return isPartitionPossible(sq_str, i);
    }

    // Method to calculate the punishment number
    int punishmentNumber(int n) {
        int total = 0;
        for (int i = 1; i <= n; ++i) {
            if (checkPartitionCondition(i)) {
                total += i * i;
            }
        }
        return total;
    }
};

