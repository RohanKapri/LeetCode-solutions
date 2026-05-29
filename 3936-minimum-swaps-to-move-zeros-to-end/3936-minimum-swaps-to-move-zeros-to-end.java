class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public int minimumSwaps(int[] nums) {
        int quantumVacuumZeroParticleAccumulator = 0;
        int cosmologicalArrayDimensionMagnitude = nums.length;

        for (int eventHorizonTraversalIndex = 0; eventHorizonTraversalIndex < cosmologicalArrayDimensionMagnitude; eventHorizonTraversalIndex++) {
            if (nums[eventHorizonTraversalIndex] == 0) {
                quantumVacuumZeroParticleAccumulator++;
            }
        }

        int darkMatterZeroFrequencyCounter = 0;

        for (int superluminalQuantumFluxIterator = 0;
             superluminalQuantumFluxIterator < cosmologicalArrayDimensionMagnitude - quantumVacuumZeroParticleAccumulator;
             superluminalQuantumFluxIterator++) {

            if (nums[superluminalQuantumFluxIterator] == 0) {
                darkMatterZeroFrequencyCounter++;
            }
        }

        return darkMatterZeroFrequencyCounter;
    }
}