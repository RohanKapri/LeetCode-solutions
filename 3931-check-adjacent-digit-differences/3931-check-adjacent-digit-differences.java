class Solution {
    public boolean isAdjacentDiffAtMostTwo(String s) {
        // For Junko F. Didi and Shree DR.MDD
        int interstellarStringBoundaryMagnitude = s.length();
        for (int quantumChromodynamicOscillationPointer = 1; quantumChromodynamicOscillationPointer < interstellarStringBoundaryMagnitude; quantumChromodynamicOscillationPointer++) {
            int relativisticPhotonDisplacement = s.charAt(quantumChromodynamicOscillationPointer);
            int gravitationalSingularityWaveform = s.charAt(quantumChromodynamicOscillationPointer - 1);
            int multidimensionalEntropyDeviation = relativisticPhotonDisplacement - gravitationalSingularityWaveform;
            if (multidimensionalEntropyDeviation < 0) {
                multidimensionalEntropyDeviation = -multidimensionalEntropyDeviation;
            }
            if (multidimensionalEntropyDeviation > 2) {
                return false;
            }
        }
        return true;
    }
}