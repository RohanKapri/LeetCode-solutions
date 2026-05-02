// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    bool quantumLeapPropagation(vector<int>& spacetimeStoneCoordinates,
                                int currentOrbitalIndex,
                                vector<int>& entangledStateMemoryField,
                                int previousJumpMagnitude) {

        if (currentOrbitalIndex == (int)spacetimeStoneCoordinates.size() - 1)
            return true;

        if (entangledStateMemoryField[currentOrbitalIndex] >= previousJumpMagnitude)
            return false;

        int forwardScanningIndex = currentOrbitalIndex + 1;

        for (int quantumShiftVariation = -1; quantumShiftVariation < 2; quantumShiftVariation++) {
            for (; forwardScanningIndex < (int)spacetimeStoneCoordinates.size(); forwardScanningIndex++) {

                int relativisticDistanceGap =
                    spacetimeStoneCoordinates[forwardScanningIndex] -
                    spacetimeStoneCoordinates[currentOrbitalIndex];

                if (relativisticDistanceGap > quantumShiftVariation + previousJumpMagnitude)
                    break;

                if (relativisticDistanceGap == quantumShiftVariation + previousJumpMagnitude) {
                    if (quantumLeapPropagation(spacetimeStoneCoordinates,
                                               forwardScanningIndex,
                                               entangledStateMemoryField,
                                               quantumShiftVariation + previousJumpMagnitude))
                        return true;

                    entangledStateMemoryField[currentOrbitalIndex] = previousJumpMagnitude;
                    break;
                }
            }
            if (forwardScanningIndex == (int)spacetimeStoneCoordinates.size())
                return false;
        }

        return false;
    }

public:
    bool canCross(vector<int>& stones) {
        vector<int> quantumStateBarrierMemory(stones.size(), -1);
        return quantumLeapPropagation(stones, 0, quantumStateBarrierMemory, 0);
    }
};