## https://leetcode.com/problems/evaluate-reverse-polish-notation/?envType=problem-list-v2&envId=math
import operator
from typing import List
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            if t in "+-*/":
                b = stack.pop()
                a = stack.pop()
                if t == "+":
                    stack.append(a+b)
                elif t == "-":
                    stack.append(a-b)
                elif t == "*":
                    stack.append(a*b)
                else:
                    stack.append(int(a/b))
            else:
                stack.append(int(t))
        return stack[0]
    
s=Solution()
print(s.evalRPN(["2","1","+","3","*"])) #9
print(s.evalRPN(["4","13","5","/","+"])) #6 