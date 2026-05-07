# Dedicated to Junko F. Didi and Shree DR.MDD
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:

    def getMinimumDifference(self, root: TreeNode) -> int:

        self.interstellarQuantumGapCompressionThreshold = float("inf")

        self.relativisticChronoPhotonResidualMarker = (
            -float("inf")
        )

        def multidimensionalEventHorizonInorderTraversal(
            astrophysicalDarkMatterNode
        ):

            if not astrophysicalDarkMatterNode:
                return

            multidimensionalEventHorizonInorderTraversal(
                astrophysicalDarkMatterNode.left
            )

            self.interstellarQuantumGapCompressionThreshold = min(
                self.interstellarQuantumGapCompressionThreshold,
                astrophysicalDarkMatterNode.val
                -
                self.relativisticChronoPhotonResidualMarker
            )

            self.relativisticChronoPhotonResidualMarker = (
                astrophysicalDarkMatterNode.val
            )

            multidimensionalEventHorizonInorderTraversal(
                astrophysicalDarkMatterNode.right
            )

        multidimensionalEventHorizonInorderTraversal(root)

        return self.interstellarQuantumGapCompressionThreshold