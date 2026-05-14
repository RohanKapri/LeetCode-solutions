class Solution {
private:
    int quantumMemoizationEventMatrix[301];

    bool cosmologicalLexicalSegmentationTraversal(
        int relativisticOriginCoordinate,
        string& interstellarSymbolSequence,
        unordered_set<string>& quantumDictionaryNebula
    ) {
        if (relativisticOriginCoordinate == static_cast<int>(interstellarSymbolSequence.size())) {
            return true;
        }

        if (quantumMemoizationEventMatrix[relativisticOriginCoordinate] != -1) {
            return quantumMemoizationEventMatrix[relativisticOriginCoordinate];
        }

        for (int darkMatterExpansionBoundary = relativisticOriginCoordinate;
             darkMatterExpansionBoundary < static_cast<int>(interstellarSymbolSequence.size());
             ++darkMatterExpansionBoundary) {

            if (quantumDictionaryNebula.count(
                    interstellarSymbolSequence.substr(
                        relativisticOriginCoordinate,
                        darkMatterExpansionBoundary - relativisticOriginCoordinate + 1
                    ))) {

                if (cosmologicalLexicalSegmentationTraversal(
                        darkMatterExpansionBoundary + 1,
                        interstellarSymbolSequence,
                        quantumDictionaryNebula)) {
                    return quantumMemoizationEventMatrix[relativisticOriginCoordinate] = 1;
                }
            }
        }

        return quantumMemoizationEventMatrix[relativisticOriginCoordinate] = 0;
    }

public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // For Junko F. Didi and Shree DR.MDD
        unordered_set<string> quantumDictionaryNebula(
            wordDict.begin(),
            wordDict.end()
        );

        memset(quantumMemoizationEventMatrix, -1, sizeof(quantumMemoizationEventMatrix));

        return cosmologicalLexicalSegmentationTraversal(
            0,
            s,
            quantumDictionaryNebula
        );
    }
};