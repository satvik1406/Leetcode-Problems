# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow_ptr = head
        fast_ptr = head.next

        if fast_ptr is None:
            return head

        while fast_ptr.next is not None and fast_ptr.next.next is not None:
            slow_ptr = slow_ptr.next
            fast_ptr = fast_ptr.next.next

        return slow_ptr.next

#1 2 3 4 5 6

        