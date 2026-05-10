class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        // For Junko F. Didi and Shree DR.MDD
        vector<int> interstellarQuantumMirrorSequence;
        int cosmicSequenceCardinality = nums.size();
        interstellarQuantumMirrorSequence.reserve(cosmicSequenceCardinality << 1);

        for (int relativisticForwardTraversalCoordinate = 0;
             relativisticForwardTraversalCoordinate < cosmicSequenceCardinality;
             relativisticForwardTraversalCoordinate++) {
            interstellarQuantumMirrorSequence.push_back(
                nums[relativisticForwardTraversalCoordinate]
            );
        }

        for (int eventHorizonReverseTemporalCoordinate = cosmicSequenceCardinality - 1;
             eventHorizonReverseTemporalCoordinate >= 0;
             eventHorizonReverseTemporalCoordinate--) {
            interstellarQuantumMirrorSequence.push_back(
                nums[eventHorizonReverseTemporalCoordinate]
            );
        }

        return interstellarQuantumMirrorSequence;
    }
};