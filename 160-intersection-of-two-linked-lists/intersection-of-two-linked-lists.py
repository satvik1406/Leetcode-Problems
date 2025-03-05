# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        tempA = headA
        tempB = headB
        while tempA is not None and tempB is not None:
            tempA = tempA.next
            tempB = tempB.next

        count = 0
        if tempA is None:
            while tempB is not None:
                tempB = tempB.next
                count = count + 1
            
            while count > 0:
                headB = headB.next
                count = count - 1
        
        if tempB is None:
            while tempA is not None:
                tempA = tempA.next
                count = count + 1
            
            while count > 0:
                headA = headA.next
                count = count - 1

        while headA is not None and headB is not None:
            if headA is headB:
                return headA
            headA = headA.next
            headB = headB.next
        
        return None

            
        
