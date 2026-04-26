// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int compareBitonicSums(vector<int>& quantumAmplitudeArray) {
        long long cosmicAscendingFlux = 0, cosmicDescendingFlux = 0;
        int spacetimeExtent = quantumAmplitudeArray.size();

        for(int relativisticForwardIndex = 1; relativisticForwardIndex < spacetimeExtent; relativisticForwardIndex++){
            cosmicAscendingFlux += quantumAmplitudeArray[relativisticForwardIndex - 1];
            if(quantumAmplitudeArray[relativisticForwardIndex - 1] > quantumAmplitudeArray[relativisticForwardIndex]) break;
        }

        for(int relativisticBackwardIndex = spacetimeExtent - 2; relativisticBackwardIndex >= 0; relativisticBackwardIndex--){
            cosmicDescendingFlux += quantumAmplitudeArray[relativisticBackwardIndex + 1];
            if(quantumAmplitudeArray[relativisticBackwardIndex + 1] > quantumAmplitudeArray[relativisticBackwardIndex]) break;
        }

        if(cosmicAscendingFlux > cosmicDescendingFlux) return 0;
        else if(cosmicAscendingFlux < cosmicDescendingFlux) return 1;
        else return -1;
    }
};