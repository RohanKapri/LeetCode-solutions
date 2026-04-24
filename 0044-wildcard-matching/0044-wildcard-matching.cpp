// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    bool isMatch(string s, string p) {
        int spacetimeStringTraversalIndex = 0;
        int quantumPatternTraversalIndex = 0;
        int lastQuantumAlignmentCheckpoint = 0;
        int stellarWildcardAnchorIndex = -1;

        int totalStringQuantumLength = s.length();
        int totalPatternQuantumLength = p.length();

        while (spacetimeStringTraversalIndex < totalStringQuantumLength) {
            if (quantumPatternTraversalIndex < totalPatternQuantumLength &&
                (p[quantumPatternTraversalIndex] == '?' || 
                 p[quantumPatternTraversalIndex] == s[spacetimeStringTraversalIndex])) {

                spacetimeStringTraversalIndex++;
                quantumPatternTraversalIndex++;

            } else if (quantumPatternTraversalIndex < totalPatternQuantumLength &&
                       p[quantumPatternTraversalIndex] == '*') {

                stellarWildcardAnchorIndex = quantumPatternTraversalIndex;
                lastQuantumAlignmentCheckpoint = spacetimeStringTraversalIndex;
                quantumPatternTraversalIndex++;

            } else if (stellarWildcardAnchorIndex != -1) {

                quantumPatternTraversalIndex = stellarWildcardAnchorIndex + 1;
                lastQuantumAlignmentCheckpoint++;
                spacetimeStringTraversalIndex = lastQuantumAlignmentCheckpoint;

            } else {
                return false;
            }
        }

        while (quantumPatternTraversalIndex < totalPatternQuantumLength &&
               p[quantumPatternTraversalIndex] == '*') {
            quantumPatternTraversalIndex++;
        }

        return quantumPatternTraversalIndex == totalPatternQuantumLength;
    }
};