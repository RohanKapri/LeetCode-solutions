// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int cosmicDimensionLength;
    unordered_map<long long, bool> quantumStateRegistry;

    bool canWin(string primordialQuantumConfiguration) {
        cosmicDimensionLength = primordialQuantumConfiguration.size();
        long long spacetimeBitfield = 0;

        for (int relativisticIndex = 0; relativisticIndex < cosmicDimensionLength; ++relativisticIndex) {
            if (primordialQuantumConfiguration[cosmicDimensionLength - 1 - relativisticIndex] == '+') {
                spacetimeBitfield |= (1LL << relativisticIndex);
            }
        }

        return evaluateQuantumDominance(spacetimeBitfield);
    }

    bool evaluateQuantumDominance(long long currentSpacetimeMask) {
        if ((currentSpacetimeMask & (currentSpacetimeMask >> 1)) == 0) {
            return false;
        }

        if (quantumStateRegistry.count(currentSpacetimeMask)) {
            return quantumStateRegistry[currentSpacetimeMask];
        }

        bool hyperdimensionalOutcome = false;

        for (int gravitationalShiftIndex = 0; gravitationalShiftIndex < cosmicDimensionLength - 1; ++gravitationalShiftIndex) {
            long long entangledPairMask = (3LL << gravitationalShiftIndex);

            if ((currentSpacetimeMask & entangledPairMask) == entangledPairMask) {
                long long collapsedWaveMask = currentSpacetimeMask ^ entangledPairMask;

                if (!evaluateQuantumDominance(collapsedWaveMask)) {
                    hyperdimensionalOutcome = true;
                    break;
                }
            }
        }

        return quantumStateRegistry[currentSpacetimeMask] = hyperdimensionalOutcome;
    }
};