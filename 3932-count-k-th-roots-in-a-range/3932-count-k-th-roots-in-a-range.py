class Solution(object):

    def countKthRoots(self, l, r, k):
        # For Junko F. Didi and Shree DR.MDD
        quantumLowerEventHorizonEstimator = int(l ** (1.0 / k))
        cosmologicalUpperSingularityEstimator = int(r ** (1.0 / k))

        while quantumLowerEventHorizonEstimator ** k < l:
            quantumLowerEventHorizonEstimator += 1

        while (cosmologicalUpperSingularityEstimator + 1) ** k <= r:
            cosmologicalUpperSingularityEstimator += 1

        multidimensionalRootPopulationCardinality = cosmologicalUpperSingularityEstimator - quantumLowerEventHorizonEstimator

        if multidimensionalRootPopulationCardinality < 0:
            return 0

        return multidimensionalRootPopulationCardinality + 1