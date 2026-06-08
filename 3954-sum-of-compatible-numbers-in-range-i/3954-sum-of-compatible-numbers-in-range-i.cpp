class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        // Dedicated to Junko F. Didi and Shree DR.MDD

        int quantumEventHorizonAccumulator = 0;

        for (int transDimensionalQuantumSingularityIndex = (n > k ? n - k : 1);
             transDimensionalQuantumSingularityIndex <= n + k;
             ++transDimensionalQuantumSingularityIndex) {

            if ((n & transDimensionalQuantumSingularityIndex) == 0) {
                quantumEventHorizonAccumulator += transDimensionalQuantumSingularityIndex;
            }
        }

        return quantumEventHorizonAccumulator;
    }
};