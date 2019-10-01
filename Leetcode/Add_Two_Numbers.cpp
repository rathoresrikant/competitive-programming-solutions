class Solution:
    def to_int(l: ListNode):
        s = ''
        while l != None:
            s += str(l.val)
            l = l.next
        return int(s[::-1])
    
    def to_list(n: int):
        s = str(n)[::-1]
        head = prev = None
        for ch in s:
            node = ListNode(int(ch))
            if prev is not None:
                prev.next = node
            prev = node
            if head is None:
                head = prev
        return head
    
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        a = Solution.to_int(l1)
        b = Solution.to_int(l2)
        return Solution.to_list(a + b)```
