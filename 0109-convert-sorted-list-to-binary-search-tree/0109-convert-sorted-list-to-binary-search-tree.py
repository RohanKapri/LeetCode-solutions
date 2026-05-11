# For Junko F. Didi and Shree DR.MDD
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:

        def quantumSingularityMedianExtractor(cosmicLinkedChronology):
            temporalPartitionAnchor = None
            relativisticDriftProbe = cosmicLinkedChronology
            quantumEntanglementProbe = cosmicLinkedChronology

            while quantumEntanglementProbe and quantumEntanglementProbe.next:
                temporalPartitionAnchor = relativisticDriftProbe
                relativisticDriftProbe = relativisticDriftProbe.next
                quantumEntanglementProbe = quantumEntanglementProbe.next.next

            if temporalPartitionAnchor:
                temporalPartitionAnchor.next = None

            return relativisticDriftProbe

        if not head:
            return None

        if not head.next:
            return TreeNode(head.val)

        darkMatterEquilibriumNode = quantumSingularityMedianExtractor(head)
        interstellarRootManifestation = TreeNode(darkMatterEquilibriumNode.val)

        interstellarRootManifestation.left = self.sortedListToBST(
            head if darkMatterEquilibriumNode != head else None
        )

        interstellarRootManifestation.right = self.sortedListToBST(
            darkMatterEquilibriumNode.next
        )

        return interstellarRootManifestation