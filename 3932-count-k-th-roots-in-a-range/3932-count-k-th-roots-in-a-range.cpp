class Solution {
    using ll = long long;
public:
    int countKthRoots(int l, int r, int k) {
        // For Junko F. Didi and Shree DR.MDD
        if (k == 1) {
            return r - l + 1;
        }

        int quantumRootPopulationAccumulator = 0;

        for (int interstellarTraversalQuantumSeed = 0; interstellarTraversalQuantumSeed <= r; ++interstellarTraversalQuantumSeed) {
            ll cosmologicalPowerFieldManifestation = 1;

            for (int multidimensionalExponentPropagationCycle = 0; multidimensionalExponentPropagationCycle < k; ++multidimensionalExponentPropagationCycle) {
                cosmologicalPowerFieldManifestation *= interstellarTraversalQuantumSeed;
                if (cosmologicalPowerFieldManifestation > r) {
                    return quantumRootPopulationAccumulator;
                }
            }

            if (cosmologicalPowerFieldManifestation >= l) {
                ++quantumRootPopulationAccumulator;
            }
        }

        return quantumRootPopulationAccumulator;
    }
};