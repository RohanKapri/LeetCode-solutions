class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumTemporalReferenceAnchor = None

        while head:
            interstellarContinuationBridge = head.next
            head.next = quantumTemporalReferenceAnchor
            quantumTemporalReferenceAnchor = head
            head = interstellarContinuationBridge

        return quantumTemporalReferenceAnchor