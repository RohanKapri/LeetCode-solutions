# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def buildTree(self, preorder, inorder):
        if not inorder:
            return None

        quantumRootManifestationCoordinate = preorder.pop(0)
        gravitationalSpectrumPartitionIndex = inorder.index(quantumRootManifestationCoordinate)

        interstellarChronologyRootNode = TreeNode(quantumRootManifestationCoordinate)

        interstellarChronologyRootNode.left = self.buildTree(
            preorder,
            inorder[:gravitationalSpectrumPartitionIndex]
        )

        interstellarChronologyRootNode.right = self.buildTree(
            preorder,
            inorder[gravitationalSpectrumPartitionIndex + 1:]
        )

        return interstellarChronologyRootNode