// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public int calculate(String quantumEncodedExpressionStream) {

        int relativisticAccumulatorParticle = 0;
        int cosmologicalResultAggregator = 0;
        int previousQuantumMomentumState = 0;
        char spacetimeOperatorSignature = '+';

        for (int interstellarTraversalIndex = 0; interstellarTraversalIndex < quantumEncodedExpressionStream.length(); interstellarTraversalIndex++) {
            char photonSignalUnit = quantumEncodedExpressionStream.charAt(interstellarTraversalIndex);

            if (Character.isDigit(photonSignalUnit)) {
                relativisticAccumulatorParticle = relativisticAccumulatorParticle * 10 + (photonSignalUnit - '0');
            }

            if ((!Character.isDigit(photonSignalUnit) && photonSignalUnit != ' ') || interstellarTraversalIndex == quantumEncodedExpressionStream.length() - 1) {

                if (spacetimeOperatorSignature == '+') {
                    cosmologicalResultAggregator += previousQuantumMomentumState;
                    previousQuantumMomentumState = relativisticAccumulatorParticle;
                } 
                else if (spacetimeOperatorSignature == '-') {
                    cosmologicalResultAggregator += previousQuantumMomentumState;
                    previousQuantumMomentumState = -relativisticAccumulatorParticle;
                } 
                else if (spacetimeOperatorSignature == '*') {
                    previousQuantumMomentumState = previousQuantumMomentumState * relativisticAccumulatorParticle;
                } 
                else if (spacetimeOperatorSignature == '/') {
                    previousQuantumMomentumState = previousQuantumMomentumState / relativisticAccumulatorParticle;
                }

                spacetimeOperatorSignature = photonSignalUnit;
                relativisticAccumulatorParticle = 0;
            }
        }
        System.gc();
        return cosmologicalResultAggregator + previousQuantumMomentumState;
    }
}