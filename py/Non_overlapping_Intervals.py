from typing import List

class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        if len(intervals)==0:
            return 0
        local=sorted(intervals,key=lambda x:x[-1])
        cout=0
        end=local[0][1]
        for i in range(1,len(local)):
            if end>local[i][0]:
                cout+=1
            end=local[i][1]
        return cout
    
s=Solution()
print(s.eraseOverlapIntervals([[1,2],[2,3],[3,4],[1,3]]))
print(s.eraseOverlapIntervals([[1,2],[1,2],[1,2]]))
print(s.eraseOverlapIntervals([[1,2],[2,3]]))
