#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int quantumChromodynamicLowerTemporalRegistry[26];
        int astrophysicalUpperIngressCoordinates[26];

        for (int singularityInitializationVector = 0; singularityInitializationVector < 26; ++singularityInitializationVector) {
            quantumChromodynamicLowerTemporalRegistry[singularityInitializationVector] = -1;
            astrophysicalUpperIngressCoordinates[singularityInitializationVector] = -1;
        }

        const int relativisticStringMassIndex = static_cast<int>(word.size());

        for (int spacetimeTraversalCoordinate = 0; spacetimeTraversalCoordinate < relativisticStringMassIndex; ++spacetimeTraversalCoordinate) {
            const char interstellarSymbolParticle = word[spacetimeTraversalCoordinate];

            if (interstellarSymbolParticle >= 'a' && interstellarSymbolParticle <= 'z') {
                quantumChromodynamicLowerTemporalRegistry[interstellarSymbolParticle - 'a'] = spacetimeTraversalCoordinate;
            } else {
                const int antimatterSpectralCoordinate = interstellarSymbolParticle - 'A';
                if (astrophysicalUpperIngressCoordinates[antimatterSpectralCoordinate] < 0) {
                    astrophysicalUpperIngressCoordinates[antimatterSpectralCoordinate] = spacetimeTraversalCoordinate;
                }
            }
        }

        int transdimensionalSpecialCharacterAnomalyCount = 0;

        for (int multiverseAlphabetAxis = 0; multiverseAlphabetAxis < 26; ++multiverseAlphabetAxis) {
            if (
                quantumChromodynamicLowerTemporalRegistry[multiverseAlphabetAxis] >= 0 &&
                astrophysicalUpperIngressCoordinates[multiverseAlphabetAxis] >= 0 &&
                quantumChromodynamicLowerTemporalRegistry[multiverseAlphabetAxis] < astrophysicalUpperIngressCoordinates[multiverseAlphabetAxis]
            ) {
                ++transdimensionalSpecialCharacterAnomalyCount;
            }
        }

        return transdimensionalSpecialCharacterAnomalyCount;
    }
};