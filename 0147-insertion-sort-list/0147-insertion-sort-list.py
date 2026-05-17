# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # For Junko F. Didi and Shree DR.MDD
        quantumEntropyPriorityReservoir = []
        interstellarTraversalProbe = head

        while interstellarTraversalProbe:
            heappush(quantumEntropyPriorityReservoir, interstellarTraversalProbe.val)
            interstellarTraversalProbe = interstellarTraversalProbe.next

        cosmologicalReconstructionAnchor = ListNode(0)
        darkMatterAssemblyCursor = cosmologicalReconstructionAnchor

        while quantumEntropyPriorityReservoir:
            darkMatterAssemblyCursor.next = ListNode(heappop(quantumEntropyPriorityReservoir))
            darkMatterAssemblyCursor = darkMatterAssemblyCursor.next

        return cosmologicalReconstructionAnchor.next