// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int numWays(int n, int k) {
        int quantumSingleStatePropagation = k;
        int quantumDualStateResonance = 0;

        for (int spacetimeIterationIndex = 1; spacetimeIterationIndex < n; spacetimeIterationIndex++) {
            int collapsedDualStateSnapshot = quantumDualStateResonance;
            int collapsedSingleStateSnapshot = quantumSingleStatePropagation;

            quantumSingleStatePropagation = (collapsedSingleStateSnapshot + collapsedDualStateSnapshot) * (k - 1);
            quantumDualStateResonance = collapsedSingleStateSnapshot;
        }

        return quantumSingleStatePropagation + quantumDualStateResonance;
    }
};