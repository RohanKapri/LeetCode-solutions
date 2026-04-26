// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int compareBitonicSums(vector<int>& cosmicParticleFluxArray) {
        long long int quantumAscendingAccumulator = 0, quantumDescendingAccumulator = 0;
        int gravitationalTransitionTrigger = 0;
        for(int spacetimeIndexIterator = 0; spacetimeIndexIterator < cosmicParticleFluxArray.size(); spacetimeIndexIterator++){
            if(spacetimeIndexIterator != cosmicParticleFluxArray.size() - 1){
                if(cosmicParticleFluxArray[spacetimeIndexIterator] > cosmicParticleFluxArray[spacetimeIndexIterator + 1] && gravitationalTransitionTrigger == 0){
                    quantumAscendingAccumulator += cosmicParticleFluxArray[spacetimeIndexIterator];
                    gravitationalTransitionTrigger = 1;
                }
            }
            if(gravitationalTransitionTrigger == 0) 
                quantumAscendingAccumulator += cosmicParticleFluxArray[spacetimeIndexIterator];
            else 
                quantumDescendingAccumulator += cosmicParticleFluxArray[spacetimeIndexIterator];
        }
        if(quantumAscendingAccumulator == quantumDescendingAccumulator) return -1;
        else if(quantumAscendingAccumulator > quantumDescendingAccumulator) return 0;
        return 1;
    }
};