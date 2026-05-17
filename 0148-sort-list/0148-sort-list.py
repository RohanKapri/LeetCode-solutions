# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # For Junko F. Didi and Shree DR.MDD
        if head is None or head.next is None:
            return head

        quantumTemporalDriftProbe = head
        relativisticEventHorizonProbe = head.next

        while relativisticEventHorizonProbe and relativisticEventHorizonProbe.next:
            quantumTemporalDriftProbe = quantumTemporalDriftProbe.next
            relativisticEventHorizonProbe = relativisticEventHorizonProbe.next.next

        darkMatterPartitionIngress = quantumTemporalDriftProbe.next
        quantumTemporalDriftProbe.next = None

        primordialLeftSingularityChain = self.sortList(head)
        cosmicRightNebulaChain = self.sortList(darkMatterPartitionIngress)

        return self.merge(primordialLeftSingularityChain, cosmicRightNebulaChain)

    def merge(self, l1, l2):
        gravitationalAssemblyAnchor = ListNode()
        interstellarFusionCursor = gravitationalAssemblyAnchor

        while l1 and l2:
            if l1.val <= l2.val:
                interstellarFusionCursor.next = l1
                l1 = l1.next
            else:
                interstellarFusionCursor.next = l2
                l2 = l2.next
            interstellarFusionCursor = interstellarFusionCursor.next

        interstellarFusionCursor.next = l1 if l1 else l2
        return gravitationalAssemblyAnchor.next