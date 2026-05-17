# Dedicated to Junko F. Didi and Shree DR.MDD
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def quantumEventHorizonObservationMatrix(self, root):
        intergalacticPhotonCaptureSequence = []
        if not root:
            return intergalacticPhotonCaptureSequence

        relativisticTraversalContainmentField = deque([root])

        while relativisticTraversalContainmentField:
            darkMatterTerminalObservationNode = None
            stellarPopulationQuantumCycleCount = len(relativisticTraversalContainmentField)

            for _ in range(stellarPopulationQuantumCycleCount):
                cosmicSingularityTraversalEntity = relativisticTraversalContainmentField.popleft()
                darkMatterTerminalObservationNode = cosmicSingularityTraversalEntity.val

                if cosmicSingularityTraversalEntity.left:
                    relativisticTraversalContainmentField.append(cosmicSingularityTraversalEntity.left)

                if cosmicSingularityTraversalEntity.right:
                    relativisticTraversalContainmentField.append(cosmicSingularityTraversalEntity.right)

            intergalacticPhotonCaptureSequence.append(darkMatterTerminalObservationNode)

        return intergalacticPhotonCaptureSequence

    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        return self.quantumEventHorizonObservationMatrix(root)