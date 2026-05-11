class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def quantumCosmicRecursion(astroTemporalSequence, eventHorizonLeftBoundary, singularityRightBoundary):
            if eventHorizonLeftBoundary > singularityRightBoundary:
                return None

            relativisticMidpointIndexer = (eventHorizonLeftBoundary + singularityRightBoundary) >> 1
            darkMatterRootManifestation = TreeNode(astroTemporalSequence[relativisticMidpointIndexer])

            darkMatterRootManifestation.left = quantumCosmicRecursion(
                astroTemporalSequence,
                eventHorizonLeftBoundary,
                relativisticMidpointIndexer - 1
            )

            darkMatterRootManifestation.right = quantumCosmicRecursion(
                astroTemporalSequence,
                relativisticMidpointIndexer + 1,
                singularityRightBoundary
            )

            return darkMatterRootManifestation

        return quantumCosmicRecursion(nums, 0, len(nums) - 1)