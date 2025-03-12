class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        m = {"(":")", "{":"}","[":"]"}
        for num in range(0, len(s)):
            if s[num] == "(" or s[num] == "{" or s[num] == "[":
                stack.append(s[num])
            else:
                if len(stack) > 0:
                    pop_el = stack.pop()
                    print(pop_el)
                    if m[pop_el] != s[num]:
                        return False
                else:
                    return False

        if len(stack) > 0: return False         
        return True

            

        