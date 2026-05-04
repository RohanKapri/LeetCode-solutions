// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int magicalString(int quantumSequenceLengthLimit) {
        if (quantumSequenceLengthLimit <= 3) return 1;

        vector<int> cosmicWavePattern(quantumSequenceLengthLimit + 1);
        cosmicWavePattern[0] = 1; 
        cosmicWavePattern[1] = 2; 
        cosmicWavePattern[2] = 2;

        int gravitationalReadPointer = 2;
        int quantumParticleState = 1;
        int spacetimeWritePointer = 3;
        int quantumOneFrequencyCounter = 1;

        while (spacetimeWritePointer < quantumSequenceLengthLimit) {
            int emissionCount = cosmicWavePattern[gravitationalReadPointer];

            while (emissionCount-- && spacetimeWritePointer < quantumSequenceLengthLimit) {
                cosmicWavePattern[spacetimeWritePointer] = quantumParticleState;
                if (quantumParticleState == 1) quantumOneFrequencyCounter++;
                spacetimeWritePointer++;
            }

            quantumParticleState = (quantumParticleState == 1) ? 2 : 1;
            gravitationalReadPointer++;
        }

        return quantumOneFrequencyCounter;
    }
};