class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        number_of_children = len(g)
        number_of_cookies = len(s)
        child_content = 0
        child_ptr = 0
        cookie_ptr = 0
        while child_ptr < number_of_children and cookie_ptr < number_of_cookies:
            if g[child_ptr] <= s[cookie_ptr]:
                child_content += 1
                child_ptr += 1

            cookie_ptr += 1
        
        return child_content

            