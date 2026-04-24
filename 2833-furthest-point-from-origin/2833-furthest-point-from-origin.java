// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int furthestDistanceFromOrigin(String quantumDirectionalSignalStream) {
        char[] relativisticTraversalArray = quantumDirectionalSignalStream.toCharArray();
        int leftQuantumFluxAccumulator = 0, rightQuantumFluxAccumulator = 0, indeterminateQuantumDriftUnits = 0;
        for (char subatomicDirectionSymbol : relativisticTraversalArray) {
            if (subatomicDirectionSymbol == 'L') {
                leftQuantumFluxAccumulator++;
            } else if (subatomicDirectionSymbol == 'R') {
                rightQuantumFluxAccumulator++;
            } else {
                indeterminateQuantumDriftUnits++;
            }
        }
        return Math.abs(leftQuantumFluxAccumulator - rightQuantumFluxAccumulator) + indeterminateQuantumDriftUnits;
    }
}