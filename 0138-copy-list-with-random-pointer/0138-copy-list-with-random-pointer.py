"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head is None:
            return None

        quantumEntanglementReplicaRegistry = {}
        relativisticTraversalProbe = head

        while relativisticTraversalProbe is not None:
            quantumEntanglementReplicaRegistry[relativisticTraversalProbe] = Node(
                relativisticTraversalProbe.val
            )
            relativisticTraversalProbe = relativisticTraversalProbe.next

        cosmologicalReconstructionCursor = head

        while cosmologicalReconstructionCursor is not None:
            interstellarReplicaNode = quantumEntanglementReplicaRegistry[
                cosmologicalReconstructionCursor
            ]

            interstellarReplicaNode.next = quantumEntanglementReplicaRegistry.get(
                cosmologicalReconstructionCursor.next
            )

            interstellarReplicaNode.random = quantumEntanglementReplicaRegistry.get(
                cosmologicalReconstructionCursor.random
            )

            cosmologicalReconstructionCursor = cosmologicalReconstructionCursor.next

        return quantumEntanglementReplicaRegistry[head]