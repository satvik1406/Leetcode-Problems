# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None: return head

        ptr1, ptr2 = None, head

        while ptr2:
            temp = ptr2.next
            ptr2.next = ptr1
            ptr1 = ptr2
            ptr2 = temp
        
        return ptr1
            
        