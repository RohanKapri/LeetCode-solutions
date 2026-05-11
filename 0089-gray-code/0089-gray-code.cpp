class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    vector<int> grayCode(int n) {
        if (n == 0) return {};

        std::vector<int> quantumBinaryPhaseSequenceArchive{0, 1};

        for (int relativisticBitDimensionExpansion = 2; relativisticBitDimensionExpansion <= n; ++relativisticBitDimensionExpansion) {
            std::vector<int> gravitationalMirrorStateReplica = quantumBinaryPhaseSequenceArchive;
            std::reverse(gravitationalMirrorStateReplica.begin(), gravitationalMirrorStateReplica.end());

            int cosmicBitActivationPulse = (1 << (relativisticBitDimensionExpansion - 1));

            for (int interstellarTraversalCoordinate = 0; interstellarTraversalCoordinate < gravitationalMirrorStateReplica.size(); interstellarTraversalCoordinate++) {
                gravitationalMirrorStateReplica[interstellarTraversalCoordinate] |= cosmicBitActivationPulse;
                quantumBinaryPhaseSequenceArchive.push_back(gravitationalMirrorStateReplica[interstellarTraversalCoordinate]);
            }
        }

        return quantumBinaryPhaseSequenceArchive;
    }
};