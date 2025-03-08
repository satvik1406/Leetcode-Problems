# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head.next is None and n >= 1: return None
        newHead = ListNode(-1)
        newHead.next = head
        slow = fast = newHead

        while n > 0:
            fast = fast.next
            n = n - 1

        while fast.next:
            slow = slow.next
            fast = fast.next
        
        if slow and slow.next:
            slow.next = slow.next.next

        return newHead.next


 