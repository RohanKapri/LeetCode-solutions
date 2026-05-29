class Solution(object):
    def minimumSwaps(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        quantumEntanglementNavigator = 0
        cosmicEventHorizonBoundary = len(nums) - 1
        darkMatterTransitionAccumulator = 0

        while quantumEntanglementNavigator <= cosmicEventHorizonBoundary:
            if nums[quantumEntanglementNavigator] > 0:
                quantumEntanglementNavigator += 1
            elif nums[cosmicEventHorizonBoundary] == 0:
                cosmicEventHorizonBoundary -= 1
            else:
                darkMatterTransitionAccumulator += 1
                quantumEntanglementNavigator += 1
                cosmicEventHorizonBoundary -= 1

        return darkMatterTransitionAccumulator