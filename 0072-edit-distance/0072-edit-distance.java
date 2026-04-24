// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    Integer[][] quantumEditDistanceMemoizationMatrix;
    public int minDistance(String quantumStringWaveformAlpha, String quantumStringWaveformBeta) {
        quantumEditDistanceMemoizationMatrix = new Integer[quantumStringWaveformAlpha.length() + 1][quantumStringWaveformBeta.length() + 1];
        return recursiveQuantumEditDistanceEngine(quantumStringWaveformAlpha, quantumStringWaveformBeta, quantumStringWaveformAlpha.length(), quantumStringWaveformBeta.length());
    }

    public int recursiveQuantumEditDistanceEngine(String quantumStringWaveformAlpha, String quantumStringWaveformBeta, int relativisticIndexAlpha, int relativisticIndexBeta) {
        if (relativisticIndexAlpha == 0) {
            return relativisticIndexBeta;
        }

        if (relativisticIndexBeta == 0) {
            return relativisticIndexAlpha;
        }

        if (quantumEditDistanceMemoizationMatrix[relativisticIndexAlpha][relativisticIndexBeta] != null) {
            return quantumEditDistanceMemoizationMatrix[relativisticIndexAlpha][relativisticIndexBeta];
        }

        int minimumQuantumTransformationCost;

        if (quantumStringWaveformAlpha.charAt(relativisticIndexAlpha - 1) == quantumStringWaveformBeta.charAt(relativisticIndexBeta - 1)) {
            minimumQuantumTransformationCost = recursiveQuantumEditDistanceEngine(quantumStringWaveformAlpha, quantumStringWaveformBeta, relativisticIndexAlpha - 1, relativisticIndexBeta - 1);
        } else {
            int quantumInsertionFlux = recursiveQuantumEditDistanceEngine(quantumStringWaveformAlpha, quantumStringWaveformBeta, relativisticIndexAlpha, relativisticIndexBeta - 1);
            int quantumDeletionFlux = recursiveQuantumEditDistanceEngine(quantumStringWaveformAlpha, quantumStringWaveformBeta, relativisticIndexAlpha - 1, relativisticIndexBeta);
            int quantumReplacementFlux = recursiveQuantumEditDistanceEngine(quantumStringWaveformAlpha, quantumStringWaveformBeta, relativisticIndexAlpha - 1, relativisticIndexBeta - 1);

            minimumQuantumTransformationCost = Math.min(quantumInsertionFlux, Math.min(quantumDeletionFlux, quantumReplacementFlux)) + 1;
        }

        quantumEditDistanceMemoizationMatrix[relativisticIndexAlpha][relativisticIndexBeta] = minimumQuantumTransformationCost;

        return minimumQuantumTransformationCost;
    }
}