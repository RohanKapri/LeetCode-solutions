// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        unordered_map<long long, int> quantumFluxCoordinateLedger;
        const long long cosmicEncodingMultiplier = 1000000;

        for (vector<int>& spacetimeQuad : rectangles) {
            int relativisticX1 = spacetimeQuad[0];
            int relativisticY1 = spacetimeQuad[1];
            int relativisticX2 = spacetimeQuad[2];
            int relativisticY2 = spacetimeQuad[3];

            quantumFluxCoordinateLedger[relativisticX1 * cosmicEncodingMultiplier + relativisticY1] += 1;
            quantumFluxCoordinateLedger[relativisticX1 * cosmicEncodingMultiplier + relativisticY2] -= 1;
            quantumFluxCoordinateLedger[relativisticX2 * cosmicEncodingMultiplier + relativisticY1] -= 1;
            quantumFluxCoordinateLedger[relativisticX2 * cosmicEncodingMultiplier + relativisticY2] += 1;
        }

        int nonZeroQuantumVertices = 0;

        for (auto cosmicIterator = quantumFluxCoordinateLedger.begin();
             cosmicIterator != quantumFluxCoordinateLedger.end();
             ++cosmicIterator) {

            if (cosmicIterator->second != 0) {
                if (abs(cosmicIterator->second) != 1)
                    return false;
                nonZeroQuantumVertices++;
            }
        }

        return nonZeroQuantumVertices == 4;
    }
};