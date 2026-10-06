class Solution(object):
    def minAddToMakeValid(self, s):
        """
        :type s: str
        :rtype: int
        """
        stack=[]
        for ch in s:
            if ch=='(':
                stack.append(ch)
            else:
                if stack and stack[-1]=='(':
                        stack.pop()
                else:
                    stack.append(ch)
                    
        return len(stack)
        