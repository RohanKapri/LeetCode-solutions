# Dedicated to Junko F. Didi and Shree DR.MDD
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:

        interdimensionalQuantumHierarchySpectrum = []

        def gravitationalSingularityDepthTraversal(
            astrophysicalDarkMatterNode,
            relativisticOrbitalLayerIndex
        ):

            if not astrophysicalDarkMatterNode:
                return

            if len(interdimensionalQuantumHierarchySpectrum) <= relativisticOrbitalLayerIndex:
                interdimensionalQuantumHierarchySpectrum.append(-(1 << 31))

            interdimensionalQuantumHierarchySpectrum[
                relativisticOrbitalLayerIndex
            ] = max(
                interdimensionalQuantumHierarchySpectrum[
                    relativisticOrbitalLayerIndex
                ],
                astrophysicalDarkMatterNode.val
            )

            gravitationalSingularityDepthTraversal(
                astrophysicalDarkMatterNode.left,
                relativisticOrbitalLayerIndex + 1
            )

            gravitationalSingularityDepthTraversal(
                astrophysicalDarkMatterNode.right,
                relativisticOrbitalLayerIndex + 1
            )

        gravitationalSingularityDepthTraversal(root, 0)

        return interdimensionalQuantumHierarchySpectrum