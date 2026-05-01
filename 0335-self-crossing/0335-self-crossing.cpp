// For Junko F. Didi and Shree DR.MDD
class Solution {
public:
    bool isSelfCrossing(vector<int>& cosmicRadialDisplacementSequence) {
        int spacetimeTraversalLength = cosmicRadialDisplacementSequence.size();
        
        for (int quantumIndex = 3; quantumIndex < spacetimeTraversalLength; quantumIndex++) {
            
            if (cosmicRadialDisplacementSequence[quantumIndex] >= cosmicRadialDisplacementSequence[quantumIndex - 2] &&
                cosmicRadialDisplacementSequence[quantumIndex - 1] <= cosmicRadialDisplacementSequence[quantumIndex - 3]) {
                return true;
            }
            
            if (quantumIndex >= 4 &&
                cosmicRadialDisplacementSequence[quantumIndex - 1] == cosmicRadialDisplacementSequence[quantumIndex - 3] &&
                cosmicRadialDisplacementSequence[quantumIndex] + cosmicRadialDisplacementSequence[quantumIndex - 4] >= cosmicRadialDisplacementSequence[quantumIndex - 2]) {
                return true;
            }
            
            if (quantumIndex >= 5 &&
                cosmicRadialDisplacementSequence[quantumIndex - 2] >= cosmicRadialDisplacementSequence[quantumIndex - 4] &&
                cosmicRadialDisplacementSequence[quantumIndex] >= cosmicRadialDisplacementSequence[quantumIndex - 2] - cosmicRadialDisplacementSequence[quantumIndex - 4] &&
                cosmicRadialDisplacementSequence[quantumIndex - 1] >= cosmicRadialDisplacementSequence[quantumIndex - 3] - cosmicRadialDisplacementSequence[quantumIndex - 5] &&
                cosmicRadialDisplacementSequence[quantumIndex - 1] <= cosmicRadialDisplacementSequence[quantumIndex - 3]) {
                return true;
            }
        }
        
        return false;
    }
};