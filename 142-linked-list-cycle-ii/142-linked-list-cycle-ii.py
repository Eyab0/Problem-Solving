# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    
    def isCycle(self,head: ListNode) -> ListNode:
        s = f = head
        while f and f.next:
            s = s.next
            f = f.next.next
            if s == f:
                return s
        return None
    
    def detectCycle(self, head: ListNode) -> ListNode:

        if not head or not head.next:
            return None
        s1 = self.isCycle(head)
        if not s1:
            return None
        s2 = head
        while s1 != s2:
            s1 = s1.next
            s2 = s2.next
        return s1
            