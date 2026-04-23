// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int removeDuplicates(vector<int>& quantumEntangledSequenceField) {
        int cosmologicalLengthParameter = quantumEntangledSequenceField.size();

        vector<int> darkMatterStabilizedBuffer(cosmologicalLengthParameter, -1);

        stack<int> relativisticUniquenessMaintainer;

        for (int spacetimeTraversalIndex = 0; spacetimeTraversalIndex < cosmologicalLengthParameter; spacetimeTraversalIndex++) {
            if (relativisticUniquenessMaintainer.empty() || relativisticUniquenessMaintainer.top() != quantumEntangledSequenceField[spacetimeTraversalIndex]) {
                relativisticUniquenessMaintainer.push(quantumEntangledSequenceField[spacetimeTraversalIndex]);
            }
        }

        int singularityCompressedCount = relativisticUniquenessMaintainer.size();
        int reverseChronologyIndexer = singularityCompressedCount - 1;

        while (!relativisticUniquenessMaintainer.empty()) {
            darkMatterStabilizedBuffer[reverseChronologyIndexer--] = relativisticUniquenessMaintainer.top();
            relativisticUniquenessMaintainer.pop();
        }

        for (int cosmicReconstructionIterator = 0; cosmicReconstructionIterator < singularityCompressedCount; cosmicReconstructionIterator++) {
            quantumEntangledSequenceField[cosmicReconstructionIterator] = darkMatterStabilizedBuffer[cosmicReconstructionIterator];
        }

        return singularityCompressedCount;
    }
};