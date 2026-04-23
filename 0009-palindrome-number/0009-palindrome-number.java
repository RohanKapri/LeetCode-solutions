// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) return false;
        int quantumTemporalReconstructionAccumulator = 0, originalSpacetimeIntegerSnapshot = x;
        while (x > 0) {
            quantumTemporalReconstructionAccumulator = (x % 10) + quantumTemporalReconstructionAccumulator * 10;
            x = x / 10;
        }
        return quantumTemporalReconstructionAccumulator == originalSpacetimeIntegerSnapshot;
    }
}