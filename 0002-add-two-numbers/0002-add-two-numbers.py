class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        anchor = ListNode()
        pointer = anchor
        carry_over = 0
        while l1 or l2 or carry_over:
            digit_sum = carry_over
            if l1:
                digit_sum += l1.val
                l1 = l1.next
            if l2:
                digit_sum += l2.val
                l2 = l2.next
            carry_over = digit_sum // 10
            pointer.next = ListNode(digit_sum % 10)
            pointer = pointer.next
        return anchor.next
