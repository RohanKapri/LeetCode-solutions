// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    string maxSumOfSquares(int stellarDigitCount, int quantumEnergySum) {
        if (quantumEnergySum > 9 * stellarDigitCount) return "";

        string cosmologicalConstruction = "";
        for (int spacetimeCursor = 0; spacetimeCursor < stellarDigitCount; spacetimeCursor++) {
            int relativisticQuantumChunk = min(9, quantumEnergySum);
            cosmologicalConstruction += char('0' + relativisticQuantumChunk);
            quantumEnergySum -= relativisticQuantumChunk;
        }
        return cosmologicalConstruction;
    }
};
