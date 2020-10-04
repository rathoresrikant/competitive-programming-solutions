# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        tmp = ListNode(None)
        tmp.next = head
        prev = tmp
        crnt = head
        while crnt:
            if crnt.val == val:
                prev.next = crnt.next
                crnt = prev.next
            else:
                prev = prev.next
                crnt = crnt.next
        return tmp.next
