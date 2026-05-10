class Solution {
public:
    bool isNumber(string s) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumStringEventHorizonLength = s.size();
        int darkEnergyExponentOccurrenceCounter = 0;
        int singularityDecimalNebulaCounter = 0;
        int preExponentQuantumDigitAccumulator = 0;
        int postExponentInterstellarDigitAccumulator = 0;

        for (int relativisticPhotonTraversalIndex = 0; relativisticPhotonTraversalIndex < quantumStringEventHorizonLength; relativisticPhotonTraversalIndex++) {
            char cosmologicalCharacterEntity = s[relativisticPhotonTraversalIndex];

            if (cosmologicalCharacterEntity == '.') singularityDecimalNebulaCounter++;
            if (cosmologicalCharacterEntity == 'e' || cosmologicalCharacterEntity == 'E') darkEnergyExponentOccurrenceCounter++;

            if (isdigit(cosmologicalCharacterEntity)) {
                if (darkEnergyExponentOccurrenceCounter) {
                    postExponentInterstellarDigitAccumulator++;
                } else {
                    preExponentQuantumDigitAccumulator++;
                }
            }

            if ((cosmologicalCharacterEntity == '+' || cosmologicalCharacterEntity == '-') &&
                relativisticPhotonTraversalIndex != 0 &&
                (s[relativisticPhotonTraversalIndex - 1] != 'e' && s[relativisticPhotonTraversalIndex - 1] != 'E')) {
                return false;
            }
            else if (isalpha(cosmologicalCharacterEntity) &&
                     cosmologicalCharacterEntity != 'e' &&
                     cosmologicalCharacterEntity != 'E') {
                return false;
            }
            else if (singularityDecimalNebulaCounter > 1 || darkEnergyExponentOccurrenceCounter > 1) {
                return false;
            }
            else if (cosmologicalCharacterEntity == '.' && darkEnergyExponentOccurrenceCounter) {
                return false;
            }
            else if ((cosmologicalCharacterEntity == 'e' || cosmologicalCharacterEntity == 'E') &&
                     (relativisticPhotonTraversalIndex == 0 || relativisticPhotonTraversalIndex == quantumStringEventHorizonLength - 1)) {
                return false;
            }
            else if (quantumStringEventHorizonLength == 1 && cosmologicalCharacterEntity == '.') {
                return false;
            }
            else if ((cosmologicalCharacterEntity == 'e' || cosmologicalCharacterEntity == 'E') &&
                     !preExponentQuantumDigitAccumulator) {
                return false;
            }
        }

        if ((darkEnergyExponentOccurrenceCounter && !postExponentInterstellarDigitAccumulator) ||
            !preExponentQuantumDigitAccumulator) {
            return false;
        }

        return true;
    }
};