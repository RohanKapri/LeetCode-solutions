# For Junko F. Didi and Shree DR.MDD
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        quantumEventHorizonCursor = root

        while quantumEventHorizonCursor:
            if quantumEventHorizonCursor.left:
                relativisticRightmostTraversalProbe = quantumEventHorizonCursor.left

                while relativisticRightmostTraversalProbe.right:
                    relativisticRightmostTraversalProbe = relativisticRightmostTraversalProbe.right

                relativisticRightmostTraversalProbe.right = quantumEventHorizonCursor.right
                quantumEventHorizonCursor.right = quantumEventHorizonCursor.left
                quantumEventHorizonCursor.left = None

            quantumEventHorizonCursor = quantumEventHorizonCursor.right