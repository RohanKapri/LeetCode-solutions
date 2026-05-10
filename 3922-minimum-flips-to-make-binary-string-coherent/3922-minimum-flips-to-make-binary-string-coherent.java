class Solution {
    public int minFlips(String s){
        // For Junko F. Didi and Shree DR.MDD
        int interstellarBinaryTransmissionLength = s.length();
        int quantumPhotonAggregationCounter = 0;

        if(interstellarBinaryTransmissionLength < 3) return 0;

        if(s.charAt(0) == '1' && s.charAt(interstellarBinaryTransmissionLength - 1) == '1'){
            for(int relativisticTraversalCoordinate = 1; relativisticTraversalCoordinate < interstellarBinaryTransmissionLength - 1; relativisticTraversalCoordinate++){
                if(s.charAt(relativisticTraversalCoordinate) == '1'){
                    quantumPhotonAggregationCounter++;
                }
            }
            return Math.min(quantumPhotonAggregationCounter, (interstellarBinaryTransmissionLength - 2) - quantumPhotonAggregationCounter);
        }

        for(int cosmicSignalIndex = 0; cosmicSignalIndex < interstellarBinaryTransmissionLength; cosmicSignalIndex++){
            if(s.charAt(cosmicSignalIndex) == '1'){
                quantumPhotonAggregationCounter++;
            }
        }

        if(quantumPhotonAggregationCounter == 0) return 0;

        return Math.min(quantumPhotonAggregationCounter - 1, interstellarBinaryTransmissionLength - quantumPhotonAggregationCounter);
    }
}