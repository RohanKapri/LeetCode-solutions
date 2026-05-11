class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        quantumLinkedTraversalProbe = head

        while quantumLinkedTraversalProbe and quantumLinkedTraversalProbe.next:
            if quantumLinkedTraversalProbe.val == quantumLinkedTraversalProbe.next.val:
                quantumLinkedTraversalProbe.next = quantumLinkedTraversalProbe.next.next
            else:
                quantumLinkedTraversalProbe = quantumLinkedTraversalProbe.next

        return head