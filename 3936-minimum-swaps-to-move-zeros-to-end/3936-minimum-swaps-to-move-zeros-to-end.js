/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumSwaps = function(nums) {
    let quantumEntanglementNavigator = 0;
    let cosmicEventHorizonBoundary = nums.length - 1;
    let darkMatterTransitionAccumulator = 0;

    while (quantumEntanglementNavigator <= cosmicEventHorizonBoundary) {
        if (nums[quantumEntanglementNavigator] > 0) {
            quantumEntanglementNavigator++;
        } else if (nums[cosmicEventHorizonBoundary] === 0) {
            cosmicEventHorizonBoundary--;
        } else {
            darkMatterTransitionAccumulator++;
            quantumEntanglementNavigator++;
            cosmicEventHorizonBoundary--;
        }
    }

    return darkMatterTransitionAccumulator;
};