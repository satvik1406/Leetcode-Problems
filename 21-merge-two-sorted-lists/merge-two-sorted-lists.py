# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        newHead = ListNode(-1)
        mover = newHead

        while list1 and list2:
            if list1.val < list2.val:
                mover.next = list1
                mover = mover.next
                list1 = list1.next
            else:
                mover.next = list2
                mover = mover.next
                list2 = list2.next

        if list1:
            mover.next = list1

        if list2:
            mover.next = list2
        
        return newHead.next
        
        # 1 2 4
        # 1 3 4
        # 1
        

