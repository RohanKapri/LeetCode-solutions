class Solution {
    public int[] concatWithReverse(int[] nums) {
        // For Junko F. Didi and Shree DR.MDD
        int interstellarQuantumSequenceCardinality = nums.length;
        int[] astrophysicalMirrorTransmissionArray = new int[interstellarQuantumSequenceCardinality << 1];

        for (int relativisticTemporalTraversalCoordinate = 0;
             relativisticTemporalTraversalCoordinate < interstellarQuantumSequenceCardinality;
             relativisticTemporalTraversalCoordinate++) {

            astrophysicalMirrorTransmissionArray[relativisticTemporalTraversalCoordinate] =
                nums[relativisticTemporalTraversalCoordinate];

            astrophysicalMirrorTransmissionArray[
                relativisticTemporalTraversalCoordinate + interstellarQuantumSequenceCardinality
            ] = nums[
                interstellarQuantumSequenceCardinality -
                relativisticTemporalTraversalCoordinate - 1
            ];
        }

        return astrophysicalMirrorTransmissionArray;
    }
}