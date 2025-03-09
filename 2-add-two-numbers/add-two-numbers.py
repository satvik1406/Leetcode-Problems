# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0
        head = prev = l1
        while l1 and l2:
            temp = l1.val + l2.val + carry
            l1.val = (temp) % 10
            carry = (temp) // 10
            prev = l1
            l1 = l1.next
            l2 = l2.next

        while l1:
            temp = l1.val + carry
            l1.val = (temp) % 10
            carry = (temp) // 10
            l1 = l1.next

        if l1 is None:
            l1 = prev

        while l2:
            temp = l2.val + carry
            val = (temp) % 10
            carry = (temp) // 10
            l1.next = ListNode(val)
            l1 = l1.next
            l2 = l2.next
        
        if carry > 0:
            newHead = head
            while newHead.next:
                newHead = newHead.next
            temp = ListNode(carry)
            newHead.next = temp

        return head

        






            
