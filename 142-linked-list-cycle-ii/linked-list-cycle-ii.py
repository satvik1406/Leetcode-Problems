# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:

        slow = fast = head
        isCycle = False
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow is fast:
                isCycle = True
                break
        
        if isCycle is False: return None
        slow = head

        while slow.next and fast.next:
            if slow is fast: return slow
            slow = slow.next
            fast = fast.next

        