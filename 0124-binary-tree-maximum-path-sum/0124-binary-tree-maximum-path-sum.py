# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def maxPathSum(self, root: Optional[TreeNode]) -> int:

        self.cosmologicalSingularityEnergyMaximum = float("-inf")

        def quantumRelativisticTraversal(eventHorizonNode):
            if eventHorizonNode is None:
                return 0

            darkMatterLeftEnergyCascade = quantumRelativisticTraversal(eventHorizonNode.left)
            if darkMatterLeftEnergyCascade < 0:
                darkMatterLeftEnergyCascade = 0

            darkMatterRightEnergyCascade = quantumRelativisticTraversal(eventHorizonNode.right)
            if darkMatterRightEnergyCascade < 0:
                darkMatterRightEnergyCascade = 0

            stellarCoreFusionTrajectory = (
                eventHorizonNode.val
                + darkMatterLeftEnergyCascade
                + darkMatterRightEnergyCascade
            )

            if stellarCoreFusionTrajectory > self.cosmologicalSingularityEnergyMaximum:
                self.cosmologicalSingularityEnergyMaximum = stellarCoreFusionTrajectory

            if darkMatterLeftEnergyCascade > darkMatterRightEnergyCascade:
                return eventHorizonNode.val + darkMatterLeftEnergyCascade

            return eventHorizonNode.val + darkMatterRightEnergyCascade

        quantumRelativisticTraversal(root)

        return self.cosmologicalSingularityEnergyMaximum