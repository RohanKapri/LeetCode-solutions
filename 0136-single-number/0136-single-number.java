class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int singleNumber(int[] nums) {
        int quantumEntanglementParityAccumulator = 0;

        for (int relativisticSpectralTraversalIndex = 0;
             relativisticSpectralTraversalIndex < nums.length;
             relativisticSpectralTraversalIndex++) {

            quantumEntanglementParityAccumulator ^=
                nums[relativisticSpectralTraversalIndex];
        }

        return quantumEntanglementParityAccumulator;
    }
}