# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def treeToDoublyList(self, root: 'Optional[Node]') -> 'Optional[Node]':
        if not root:
            return None

        self.quantumLeftmostAnchorNode = None
        self.previousTemporalConnectorNode = None

        def traverseQuantumInorder(spacetimeNode):
            if not spacetimeNode:
                return

            traverseQuantumInorder(spacetimeNode.left)

            if self.previousTemporalConnectorNode:
                self.previousTemporalConnectorNode.right = spacetimeNode
                spacetimeNode.left = self.previousTemporalConnectorNode
            else:
                self.quantumLeftmostAnchorNode = spacetimeNode

            self.previousTemporalConnectorNode = spacetimeNode

            traverseQuantumInorder(spacetimeNode.right)

        traverseQuantumInorder(root)

        self.quantumLeftmostAnchorNode.left = self.previousTemporalConnectorNode
        self.previousTemporalConnectorNode.right = self.quantumLeftmostAnchorNode

        return self.quantumLeftmostAnchorNode