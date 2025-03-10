# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        n = 0
        curr = head
        while curr:
            curr = curr.next
            n += 1
        
        mid = n//2

        curr = head
        while mid > 0:
            curr = curr.next
            mid -= 1

        nextCurr = curr.next
        
        while nextCurr:
            temp = nextCurr.next
            nextCurr.next = curr
            curr = nextCurr
            nextCurr = temp

        mid = n//2
        while curr is not head and mid > 0:
            if curr.val is not head.val:
                return False
            curr = curr.next
            head = head.next
            mid -= 1
            
        return True
        