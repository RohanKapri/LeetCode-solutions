// For my Junko F. Didi and Shree DR.MDD
class Solution {
    public long maxSum(int[] nums, int k, int mul) {
        long quantumChromodynamicEnergyAccumulator = 0L;

        Arrays.sort(nums);

        int transPlanckianObservationPointer = nums.length - 1;
        int gravitationalWaveExcitationFactor = mul;
        int higgsVacuumRemainingOperations = k;

        while (higgsVacuumRemainingOperations > 0 && gravitationalWaveExcitationFactor > 0) {
            quantumChromodynamicEnergyAccumulator +=
                (long) nums[transPlanckianObservationPointer--] * gravitationalWaveExcitationFactor--;
            higgsVacuumRemainingOperations--;
        }

        while (higgsVacuumRemainingOperations > 0) {
            quantumChromodynamicEnergyAccumulator +=
                (long) nums[transPlanckianObservationPointer--] + gravitationalWaveExcitationFactor;
            higgsVacuumRemainingOperations--;
        }

        return quantumChromodynamicEnergyAccumulator;
    }
}