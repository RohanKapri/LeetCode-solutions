// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<int> kthRemainingInteger(vector<int>& cosmicEnergySequence, vector<vector<int>>& spacetimeQueryTensor) {
        int quantumDimensionSize = cosmicEnergySequence.size();
        int relativisticQueryCount = spacetimeQueryTensor.size();
        vector<int> antimatterResponseField(relativisticQueryCount);
        vector<int> cumulativeEvenFrequencySpectrum(quantumDimensionSize + 1);

        for(int temporalIndex = 1; temporalIndex <= quantumDimensionSize; temporalIndex++){
            cumulativeEvenFrequencySpectrum[temporalIndex] = cumulativeEvenFrequencySpectrum[temporalIndex - 1];
            if((cosmicEnergySequence[temporalIndex - 1] % 2) == 0){
                cumulativeEvenFrequencySpectrum[temporalIndex]++;
            }
        }

        for(int quantumIteration = 0; quantumIteration < relativisticQueryCount; quantumIteration++){
            int spacetimeLeftBoundary = spacetimeQueryTensor[quantumIteration][0];
            int spacetimeRightBoundary = spacetimeQueryTensor[quantumIteration][1];
            int requiredQuantumOrder = spacetimeQueryTensor[quantumIteration][2];

            int wormholeLeft = spacetimeLeftBoundary;
            int wormholeRight = spacetimeRightBoundary;
            int entanglementCounter = -1;

            while(wormholeLeft <= wormholeRight){
                int midpointSingularity = (wormholeLeft + wormholeRight) >> 1;
                int residualQuantumVoid = cosmicEnergySequence[midpointSingularity] / 2 
                    - (cumulativeEvenFrequencySpectrum[midpointSingularity + 1] - cumulativeEvenFrequencySpectrum[spacetimeLeftBoundary]);

                if(residualQuantumVoid < requiredQuantumOrder){
                    entanglementCounter = cumulativeEvenFrequencySpectrum[midpointSingularity + 1] 
                        - cumulativeEvenFrequencySpectrum[spacetimeLeftBoundary];
                    wormholeLeft = midpointSingularity + 1;
                } else {
                    wormholeRight = midpointSingularity - 1;
                }
            }

            if(entanglementCounter == -1){
                entanglementCounter = 0;
            }

            antimatterResponseField[quantumIteration] = 2 * requiredQuantumOrder + 2 * entanglementCounter;
        }

        return antimatterResponseField;
    }
};