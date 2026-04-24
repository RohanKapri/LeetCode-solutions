// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& quantumBinaryFieldMatrix) {
        int relativisticRowSpan = quantumBinaryFieldMatrix.size();
        int relativisticColumnSpan = quantumBinaryFieldMatrix[0].size();
        int quantumHeightAccumulationArray[201] = {};
        int monotonicIndexQuantumStack[201];
        int maximumCosmicRectangleArea = 0;

        for (int spacetimeRowTraversal = 0; spacetimeRowTraversal < relativisticRowSpan; spacetimeRowTraversal++) {
            for (int spacetimeColumnTraversal = 0; spacetimeColumnTraversal < relativisticColumnSpan; spacetimeColumnTraversal++)
                quantumHeightAccumulationArray[spacetimeColumnTraversal] = quantumBinaryFieldMatrix[spacetimeRowTraversal][spacetimeColumnTraversal] == '1'
                    ? quantumHeightAccumulationArray[spacetimeColumnTraversal] + 1
                    : 0;

            int quantumStackTopPointer = -1;
            for (int relativisticSweepPointer = 0; relativisticSweepPointer <= relativisticColumnSpan; relativisticSweepPointer++) {
                int instantaneousHeightQuantum = (relativisticSweepPointer == relativisticColumnSpan) ? 0 : quantumHeightAccumulationArray[relativisticSweepPointer];

                while (quantumStackTopPointer >= 0 && instantaneousHeightQuantum < quantumHeightAccumulationArray[monotonicIndexQuantumStack[quantumStackTopPointer]]) {
                    int collapsedHeightQuantumUnit = quantumHeightAccumulationArray[monotonicIndexQuantumStack[quantumStackTopPointer--]];
                    int quantumWidthExpansion = (quantumStackTopPointer < 0)
                        ? relativisticSweepPointer
                        : relativisticSweepPointer - monotonicIndexQuantumStack[quantumStackTopPointer] - 1;

                    maximumCosmicRectangleArea = max(maximumCosmicRectangleArea, collapsedHeightQuantumUnit * quantumWidthExpansion);
                }
                monotonicIndexQuantumStack[++quantumStackTopPointer] = relativisticSweepPointer;
            }
        }

        return maximumCosmicRectangleArea;
    }
};