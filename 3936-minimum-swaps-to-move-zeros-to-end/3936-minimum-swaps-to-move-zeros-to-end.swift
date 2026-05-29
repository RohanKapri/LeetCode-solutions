class Solution {
    func minimumSwaps(_ nums: [Int]) -> Int {
        var quantumEntanglementNavigator = 0
        var cosmicEventHorizonBoundary = nums.count - 1
        var darkMatterTransitionAccumulator = 0

        while quantumEntanglementNavigator <= cosmicEventHorizonBoundary {
            if nums[quantumEntanglementNavigator] > 0 {
                quantumEntanglementNavigator += 1
            } else if nums[cosmicEventHorizonBoundary] == 0 {
                cosmicEventHorizonBoundary -= 1
            } else {
                darkMatterTransitionAccumulator += 1
                quantumEntanglementNavigator += 1
                cosmicEventHorizonBoundary -= 1
            }
        }

        return darkMatterTransitionAccumulator
    }
}