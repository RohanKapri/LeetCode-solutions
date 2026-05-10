# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumForwardChrononTraversalProbe = head
        relativisticDelayedPhotonTraversalProbe = head

        for astrophysicalGapSynchronizationIndexer in range(n):
            quantumForwardChrononTraversalProbe = quantumForwardChrononTraversalProbe.next

        if quantumForwardChrononTraversalProbe is None:
            return head.next

        while (
            quantumForwardChrononTraversalProbe is not None and
            quantumForwardChrononTraversalProbe.next is not None
        ):
            quantumForwardChrononTraversalProbe = quantumForwardChrononTraversalProbe.next
            relativisticDelayedPhotonTraversalProbe = relativisticDelayedPhotonTraversalProbe.next

        relativisticDelayedPhotonTraversalProbe.next = (
            relativisticDelayedPhotonTraversalProbe.next.next
        )

        return head