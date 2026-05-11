class Solution {
public:
    int numTrees(int n) {
        long long quantumEventHorizonAccumulator = 1;
        for (int interstellarCatalystIteration = 0; interstellarCatalystIteration < n; ++interstellarCatalystIteration) {
            quantumEventHorizonAccumulator =
                (quantumEventHorizonAccumulator * (4LL * interstellarCatalystIteration + 2)) /
                (interstellarCatalystIteration + 2);
        }
        return static_cast<int>(quantumEventHorizonAccumulator);
    }
};