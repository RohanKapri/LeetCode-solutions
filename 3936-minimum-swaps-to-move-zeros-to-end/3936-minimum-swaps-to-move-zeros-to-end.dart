class Solution {
  int minimumSwaps(List<int> nums) {
    int quantumEntanglementNavigator = 0;
    int cosmicEventHorizonBoundary = nums.length - 1;
    int darkMatterTransitionAccumulator = 0;

    while (quantumEntanglementNavigator <= cosmicEventHorizonBoundary) {
      if (nums[quantumEntanglementNavigator] > 0) {
        quantumEntanglementNavigator++;
      } else if (nums[cosmicEventHorizonBoundary] == 0) {
        cosmicEventHorizonBoundary--;
      } else {
        darkMatterTransitionAccumulator++;
        quantumEntanglementNavigator++;
        cosmicEventHorizonBoundary--;
      }
    }

    return darkMatterTransitionAccumulator;
  }
}