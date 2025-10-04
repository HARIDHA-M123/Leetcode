# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseKGroup(self, head, k):
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy

        while True:
            # Check if there are at least k nodes left
            node = prev
            for i in range(k):
                node = node.next
                if not node:
                    return dummy.next

            # Reverse k nodes
            curr = prev.next
            next_prev = curr
            prev_node = None
            for i in range(k):
                nxt = curr.next
                curr.next = prev_node
                prev_node = curr
                curr = nxt

            # Connect reversed part with previous and next nodes
            prev.next = prev_node
            next_prev.next = curr
            prev = next_prev
