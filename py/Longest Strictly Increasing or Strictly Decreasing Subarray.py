from typing import List
class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        MD,MI,D,I=0,0,0,0
        current=nums[0]
        if len(nums)==1:
            return 1
        if len(nums)==0:
            return 0
        for i in range(1,len(nums)):
            if current>nums[i]:
                I+=1
                D=0
            elif current< nums[i]:
                D+=1
                I=0
            else:
                I=D=0
            MD=max(D,MD)
            MI=max(I,MI)
            current=nums[i]
        MD+=1
        MI+=1
        return max(MD,MI,1)
    
s=Solution()
print(s.longestMonotonicSubarray([1,4,3,3,2]))
print(s.longestMonotonicSubarray([3,3,3,3]))
print(s.longestMonotonicSubarray([3,2,1]))