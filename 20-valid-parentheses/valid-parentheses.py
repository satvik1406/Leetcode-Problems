class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        m = {"(":")", "{":"}","[":"]"}
        for num in range(0, len(s)):
            if s[num] in "({[":
                stack.append(s[num])
            else:
                if len(stack) == 0 or m[stack.pop()] != s[num]:
                    return False

        if len(stack) > 0: return False         
        return True

            

        