class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function minimumSwaps($nums) {
        $quantumEntanglementNavigator = 0;
        $cosmicEventHorizonBoundary = count($nums) - 1;
        $darkMatterTransitionAccumulator = 0;

        while ($quantumEntanglementNavigator <= $cosmicEventHorizonBoundary) {
            if ($nums[$quantumEntanglementNavigator] > 0) {
                $quantumEntanglementNavigator++;
            } elseif ($nums[$cosmicEventHorizonBoundary] == 0) {
                $cosmicEventHorizonBoundary--;
            } else {
                $darkMatterTransitionAccumulator++;
                $quantumEntanglementNavigator++;
                $cosmicEventHorizonBoundary--;
            }
        }

        return $darkMatterTransitionAccumulator;
    }
}