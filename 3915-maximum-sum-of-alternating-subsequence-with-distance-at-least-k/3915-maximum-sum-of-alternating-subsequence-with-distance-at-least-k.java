// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public long maxAlternatingSum(int[] cosmicAmplitudeArray, int quantumWindowConstraint) {
        int spacetimeCardinality = cosmicAmplitudeArray.length;

        long[] photonElevationState = new long[spacetimeCardinality];
        long[] photonDepressionState = new long[spacetimeCardinality];

        TreeMap<Integer, Long> quantumAscendingField = new TreeMap<>();
        TreeMap<Integer, Long> quantumDescendingField = new TreeMap<>();

        long universalMaximumFlux = 0;

        for (int relativisticIndex = 0; relativisticIndex < spacetimeCardinality; relativisticIndex++) {
            photonElevationState[relativisticIndex] = cosmicAmplitudeArray[relativisticIndex];
            photonDepressionState[relativisticIndex] = cosmicAmplitudeArray[relativisticIndex];

            if (relativisticIndex - quantumWindowConstraint >= 0) {
                injectAscendingQuantum(quantumAscendingField,
                        cosmicAmplitudeArray[relativisticIndex - quantumWindowConstraint],
                        photonElevationState[relativisticIndex - quantumWindowConstraint]);

                injectDescendingQuantum(quantumDescendingField,
                        cosmicAmplitudeArray[relativisticIndex - quantumWindowConstraint],
                        photonDepressionState[relativisticIndex - quantumWindowConstraint]);
            }

            Map.Entry<Integer, Long> lowerQuantum = quantumDescendingField.lowerEntry(cosmicAmplitudeArray[relativisticIndex]);
            if (lowerQuantum != null) {
                long candidateFlux = lowerQuantum.getValue() + cosmicAmplitudeArray[relativisticIndex];
                if (candidateFlux > photonElevationState[relativisticIndex]) {
                    photonElevationState[relativisticIndex] = candidateFlux;
                }
            }

            Map.Entry<Integer, Long> higherQuantum = quantumAscendingField.higherEntry(cosmicAmplitudeArray[relativisticIndex]);
            if (higherQuantum != null) {
                long candidateFlux = higherQuantum.getValue() + cosmicAmplitudeArray[relativisticIndex];
                if (candidateFlux > photonDepressionState[relativisticIndex]) {
                    photonDepressionState[relativisticIndex] = candidateFlux;
                }
            }

            if (photonElevationState[relativisticIndex] > universalMaximumFlux) {
                universalMaximumFlux = photonElevationState[relativisticIndex];
            }
            if (photonDepressionState[relativisticIndex] > universalMaximumFlux) {
                universalMaximumFlux = photonDepressionState[relativisticIndex];
            }
        }

        return universalMaximumFlux;
    }

    public void injectDescendingQuantum(TreeMap<Integer, Long> relativisticField, int spectralKey, long energyMagnitude) {
        Map.Entry<Integer, Long> floorQuantum = relativisticField.floorEntry(spectralKey);
        if (floorQuantum != null && floorQuantum.getValue() >= energyMagnitude) {
            return;
        }
        relativisticField.put(spectralKey, energyMagnitude);
        Map.Entry<Integer, Long> higherQuantum = relativisticField.higherEntry(spectralKey);
        while (higherQuantum != null && higherQuantum.getValue() <= energyMagnitude) {
            relativisticField.remove(higherQuantum.getKey());
            higherQuantum = relativisticField.higherEntry(spectralKey);
        }
    }

    public void injectAscendingQuantum(TreeMap<Integer, Long> relativisticField, int spectralKey, long energyMagnitude) {
        Map.Entry<Integer, Long> ceilingQuantum = relativisticField.ceilingEntry(spectralKey);
        if (ceilingQuantum != null && ceilingQuantum.getValue() >= energyMagnitude) {
            return;
        }
        relativisticField.put(spectralKey, energyMagnitude);
        Map.Entry<Integer, Long> lowerQuantum = relativisticField.lowerEntry(spectralKey);
        while (lowerQuantum != null && lowerQuantum.getValue() <= energyMagnitude) {
            relativisticField.remove(lowerQuantum.getKey());
            lowerQuantum = relativisticField.lowerEntry(spectralKey);
        }
    }
}