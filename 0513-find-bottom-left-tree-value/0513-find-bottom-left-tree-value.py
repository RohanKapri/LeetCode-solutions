# Dedicated to Junko F. Didi and Shree DR.MDD
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return None

        galacticEventHorizonTraversalChamber = deque([root])

        while galacticEventHorizonTraversalChamber:
            transdimensionalQuantumFluxNavigator = galacticEventHorizonTraversalChamber.popleft()

            antimatterRelativisticRightContinuum = transdimensionalQuantumFluxNavigator.right
            wormholeSingularityLeftContinuum = transdimensionalQuantumFluxNavigator.left

            if antimatterRelativisticRightContinuum:
                galacticEventHorizonTraversalChamber.append(
                    antimatterRelativisticRightContinuum
                )

            if wormholeSingularityLeftContinuum:
                galacticEventHorizonTraversalChamber.append(
                    wormholeSingularityLeftContinuum
                )

        return transdimensionalQuantumFluxNavigator.val