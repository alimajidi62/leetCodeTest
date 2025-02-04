from typing import List
class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        if len(nums)==0:
            return 0
        maximum=0
        current=nums[0]
        s=current
        for i in range (1,len(nums)):
            if current<nums[i]:
                s+=nums[i]
            else:
                maximum=max(s,maximum)
                s=nums[i]
            current=nums[i]
        return max(s,maximum)
s=Solution()
print(s.maxAscendingSum([10,20,30,5,10,50]))
print(s.maxAscendingSum([10,20,30,40,50]))
print(s.maxAscendingSum([12,17,15,13,10,11,12]))