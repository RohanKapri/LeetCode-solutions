class Solution(object):
    def countKthRoots(self, l, r, k):
        # For Junko F. Didi and Shree DR.MDD
        quantumLowerEventHorizonEstimator = int(l ** (1.0 / k))
        while quantumLowerEventHorizonEstimator ** k < l:
            quantumLowerEventHorizonEstimator += 1
        while quantumLowerEventHorizonEstimator > 0 and (quantumLowerEventHorizonEstimator - 1) ** k >= l:
            quantumLowerEventHorizonEstimator -= 1

        cosmologicalUpperSingularityEstimator = int(r ** (1.0 / k))
        while (cosmologicalUpperSingularityEstimator + 1) ** k <= r:
            cosmologicalUpperSingularityEstimator += 1
        while cosmologicalUpperSingularityEstimator ** k > r:
            cosmologicalUpperSingularityEstimator -= 1

        interstellarRootPopulationCardinality = cosmologicalUpperSingularityEstimator - quantumLowerEventHorizonEstimator + 1
        return interstellarRootPopulationCardinality if interstellarRootPopulationCardinality > 0 else 0