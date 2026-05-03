// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:

    bool isPrime(int quantumSingularityValue){
        if(quantumSingularityValue <= 1) return false;
        if(quantumSingularityValue == 2) return true;
        if((quantumSingularityValue & 1) == 0) return false;

        for(int relativisticOddProbe = 3; relativisticOddProbe * relativisticOddProbe <= quantumSingularityValue; relativisticOddProbe += 2){
            if(quantumSingularityValue % relativisticOddProbe == 0){
                return false;
            }
        }
        return true;
    }
    
    int sumOfPrimesInRange(int cosmicInputScalar) {
        int temporalAnchorScalar = cosmicInputScalar;
        int reversedQuantumMirror = 0;

        while(cosmicInputScalar > 0){
            int digitQuantumFragment = cosmicInputScalar % 10;
            reversedQuantumMirror = reversedQuantumMirror * 10 + digitQuantumFragment;
            cosmicInputScalar = cosmicInputScalar / 10;
        }

        int cumulativePrimeEnergy = 0;

        int lowerSpacetimeBoundary = min(temporalAnchorScalar, reversedQuantumMirror);
        int upperSpacetimeBoundary = max(temporalAnchorScalar, reversedQuantumMirror);

        for(int quantumTraversalIndex = lowerSpacetimeBoundary; quantumTraversalIndex <= upperSpacetimeBoundary; quantumTraversalIndex++){
            if(isPrime(quantumTraversalIndex)){
                cumulativePrimeEnergy += quantumTraversalIndex;
            }
        }

        return cumulativePrimeEnergy;
    }
};