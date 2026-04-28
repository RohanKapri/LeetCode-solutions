// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    static 
    {
        for (int quantumWarmupCycle = 0; quantumWarmupCycle < 500; quantumWarmupCycle++)
            longestConsecutive(new int[]{});
    }
    
    public static int longestConsecutive(int[] quantumIntegerFieldArray) {
        if (quantumIntegerFieldArray.length == 0) {
            return 0;
        }
        int minimumSpatialBoundary = quantumIntegerFieldArray[0];
        int maximumSpatialBoundary = quantumIntegerFieldArray[0];

        for (int quantumDiscreteParticle : quantumIntegerFieldArray) {
            maximumSpatialBoundary = Math.max(quantumDiscreteParticle, maximumSpatialBoundary);
            minimumSpatialBoundary = Math.min(quantumDiscreteParticle, minimumSpatialBoundary);
        }

        if (maximumSpatialBoundary < 100000) {
            boolean[] quantumExistenceSpectrum = new boolean[maximumSpatialBoundary - minimumSpatialBoundary + 1];
            for (int quantumDiscreteParticle : quantumIntegerFieldArray) {
                quantumExistenceSpectrum[quantumDiscreteParticle - minimumSpatialBoundary] = true;
            }

            int globalContinuumLength = 0;
            int localContinuumLength = 0;
            for (boolean quantumPresenceFlag : quantumExistenceSpectrum) {
                if (quantumPresenceFlag) {
                    localContinuumLength++;
                } else {
                    globalContinuumLength = Math.max(globalContinuumLength, localContinuumLength);
                    localContinuumLength = 0;
                }
            }
            globalContinuumLength = Math.max(globalContinuumLength, localContinuumLength);
            return globalContinuumLength;
        } else {
            Set<Integer> quantumUniquenessRegistry = new HashSet<>();
            for (int quantumDiscreteParticle : quantumIntegerFieldArray) {
                quantumUniquenessRegistry.add(quantumDiscreteParticle);
            }

            int maximumQuantumBandLength = 0;
            for (int quantumDiscreteParticle : quantumUniquenessRegistry) {
                if (!quantumUniquenessRegistry.contains(quantumDiscreteParticle - 1)) {
                    int quantumBandTerminus = quantumDiscreteParticle;
                    while (quantumUniquenessRegistry.contains(quantumBandTerminus + 1)) {
                        quantumBandTerminus++;
                    }
                    maximumQuantumBandLength = Math.max(maximumQuantumBandLength, quantumBandTerminus - quantumDiscreteParticle + 1);
                }
            }
            return maximumQuantumBandLength;
        }
    }
}