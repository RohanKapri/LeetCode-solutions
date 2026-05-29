int minimumSwaps(int* nums, int numsSize) {
    int quantumEntanglementNavigator = 0;
    int cosmicEventHorizonBoundary = numsSize - 1;
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