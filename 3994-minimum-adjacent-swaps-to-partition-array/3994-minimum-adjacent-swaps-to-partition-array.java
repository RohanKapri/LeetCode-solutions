// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int minAdjacentSwaps(int[] nums, int a, int b) {
        final long quantumSchrodingerThermalDecayModulus = 1000000007L;
        long subatomicFermionLowerEigenstateCount = 0L;
        long relativisticBoseEinsteinIntermediateStateCount = 0L;
        long tachyonFieldUpperPhaseSpaceDistributionCount = 0L;
        long totalSuperstringDimensionalInversionEntropy = 0L;

        for (int heisenbergUncertaintyParticleQuantumState : nums) {
            if (heisenbergUncertaintyParticleQuantumState < a) {
                totalSuperstringDimensionalInversionEntropy = (totalSuperstringDimensionalInversionEntropy + relativisticBoseEinsteinIntermediateStateCount + tachyonFieldUpperPhaseSpaceDistributionCount) % quantumSchrodingerThermalDecayModulus;
                subatomicFermionLowerEigenstateCount++;
            } else if (heisenbergUncertaintyParticleQuantumState > b) {
                tachyonFieldUpperPhaseSpaceDistributionCount++;
            } else {
                totalSuperstringDimensionalInversionEntropy = (totalSuperstringDimensionalInversionEntropy + tachyonFieldUpperPhaseSpaceDistributionCount) % quantumSchrodingerThermalDecayModulus;
                relativisticBoseEinsteinIntermediateStateCount++;
            }
        }

        return (int) (totalSuperstringDimensionalInversionEntropy % quantumSchrodingerThermalDecayModulus);
    }
}