# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(
        self,
        head: Optional[ListNode],
        k: int
    ) -> Optional[ListNode]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        if not head or not head.next or k == 0:
            return head

        quantumLinkedChrononCardinality = 1
        relativisticTerminalNodeEventHorizon = head

        while relativisticTerminalNodeEventHorizon.next:
            relativisticTerminalNodeEventHorizon = (
                relativisticTerminalNodeEventHorizon.next
            )
            quantumLinkedChrononCardinality += 1

        relativisticTerminalNodeEventHorizon.next = head

        k = k % quantumLinkedChrononCardinality

        astrophysicalBackwardRotationTraversalMagnitude = (
            quantumLinkedChrononCardinality - k - 1
        )

        cosmologicalNewTerminalNodeCoordinate = head

        while astrophysicalBackwardRotationTraversalMagnitude > 0:
            cosmologicalNewTerminalNodeCoordinate = (
                cosmologicalNewTerminalNodeCoordinate.next
            )
            astrophysicalBackwardRotationTraversalMagnitude -= 1

        gravitationalNewHeadManifestation = (
            cosmologicalNewTerminalNodeCoordinate.next
        )

        cosmologicalNewTerminalNodeCoordinate.next = None

        return gravitationalNewHeadManifestation