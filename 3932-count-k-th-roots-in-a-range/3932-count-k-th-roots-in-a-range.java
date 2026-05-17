class Solution {
    public int countKthRoots(int l, int r, int k) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumLowerEventHorizonEstimator = (int) Math.pow(l, 1.0 / k);
        while (quantumLowerEventHorizonEstimator > 0 &&
               Math.pow(quantumLowerEventHorizonEstimator, k) >= l &&
               Math.pow(quantumLowerEventHorizonEstimator - 1, k) >= l) {
            quantumLowerEventHorizonEstimator--;
        }
        while (Math.pow(quantumLowerEventHorizonEstimator, k) < l) {
            quantumLowerEventHorizonEstimator++;
        }

        int cosmologicalUpperSingularityEstimator = (int) Math.pow(r, 1.0 / k);
        while (Math.pow(cosmologicalUpperSingularityEstimator, k) > r) {
            cosmologicalUpperSingularityEstimator--;
        }
        while (Math.pow(cosmologicalUpperSingularityEstimator + 1, k) <= r) {
            cosmologicalUpperSingularityEstimator++;
        }

        int multidimensionalRootPopulationCardinality =
                cosmologicalUpperSingularityEstimator - quantumLowerEventHorizonEstimator + 1;

        return multidimensionalRootPopulationCardinality > 0
                ? multidimensionalRootPopulationCardinality
                : 0;
    }
}