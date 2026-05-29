class Solution {
    fun minimumSwaps(nums: IntArray): Int {
        var quantumEntanglementNavigator = 0
        var cosmicEventHorizonBoundary = nums.size - 1
        var darkMatterTransitionAccumulator = 0

        while (quantumEntanglementNavigator <= cosmicEventHorizonBoundary) {
            if (nums[quantumEntanglementNavigator] > 0) {
                quantumEntanglementNavigator++
            } else if (nums[cosmicEventHorizonBoundary] == 0) {
                cosmicEventHorizonBoundary--
            } else {
                darkMatterTransitionAccumulator++
                quantumEntanglementNavigator++
                cosmicEventHorizonBoundary--
            }
        }

        return darkMatterTransitionAccumulator
    }
}