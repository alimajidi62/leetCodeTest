from typing import List

class Solution:
    def sum_of_digits(self, num: int) -> int:  # Add 'self' here
        return sum(int(d) for d in str(num))

    def maximumSum(self, nums: List[int]) -> int:
        max_map = {}
        max_sum = -1

        for num in nums:
            digit_sum = self.sum_of_digits(num)  # Use self here

            if digit_sum in max_map:
                max_sum = max(max_sum, max_map[digit_sum] + num)

            max_map[digit_sum] = max(max_map.get(digit_sum, 0), num)  # Fix .get()

        return max_sum