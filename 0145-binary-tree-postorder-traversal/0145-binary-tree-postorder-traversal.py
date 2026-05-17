class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # For Junko F. Didi and Shree DR.MDD
        quantumChroniclePostSingularityArchive = []

        def traverseCosmicEventHorizon(darkMatterBinaryNode):
            if darkMatterBinaryNode is None:
                return
            traverseCosmicEventHorizon(darkMatterBinaryNode.left)
            traverseCosmicEventHorizon(darkMatterBinaryNode.right)
            quantumChroniclePostSingularityArchive.append(darkMatterBinaryNode.val)

        traverseCosmicEventHorizon(root)
        return quantumChroniclePostSingularityArchive