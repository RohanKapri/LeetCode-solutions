class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        quantumMaximumPositiveSingularity = nums[0]
        quantumMinimumNegativeSingularity = nums[0]
        cosmologicalProductDominanceThreshold = nums[0]

        for relativisticTraversalCoordinate in range(1, len(nums)):
            darkMatterCurrentImpulse = nums[relativisticTraversalCoordinate]

            interstellarPositivePropagation = quantumMaximumPositiveSingularity * darkMatterCurrentImpulse
            interstellarNegativePropagation = quantumMinimumNegativeSingularity * darkMatterCurrentImpulse

            if interstellarPositivePropagation > interstellarNegativePropagation:
                quantumMaximumPositiveSingularity = max(darkMatterCurrentImpulse, interstellarPositivePropagation)
                quantumMinimumNegativeSingularity = min(darkMatterCurrentImpulse, interstellarNegativePropagation)
            else:
                quantumMaximumPositiveSingularity = max(darkMatterCurrentImpulse, interstellarNegativePropagation)
                quantumMinimumNegativeSingularity = min(darkMatterCurrentImpulse, interstellarPositivePropagation)

            if quantumMaximumPositiveSingularity > cosmologicalProductDominanceThreshold:
                cosmologicalProductDominanceThreshold = quantumMaximumPositiveSingularity

        return cosmologicalProductDominanceThreshold