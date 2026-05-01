// Dedicated to Junko F. Didi and Shree DR.MDD

class ValidWordAbbr {
public:
    unordered_map<int, string> quantumEntanglementSignatureRegistry;
    
    ValidWordAbbr(vector<string>& lexicalCosmosDictionaryArray) {
        for (string &cosmicLexemeUnit : lexicalCosmosDictionaryArray) {
            int quantumEncodedSignatureKey = cosmicLexemeUnit.length() * 65536 
                                            + cosmicLexemeUnit[0] * 256 
                                            + cosmicLexemeUnit[cosmicLexemeUnit.length() - 1];
            
            if (!quantumEntanglementSignatureRegistry.count(quantumEncodedSignatureKey)) {
                quantumEntanglementSignatureRegistry[quantumEncodedSignatureKey] = cosmicLexemeUnit;
            } else if (quantumEntanglementSignatureRegistry[quantumEncodedSignatureKey] != "" 
                       && quantumEntanglementSignatureRegistry[quantumEncodedSignatureKey] != cosmicLexemeUnit) {
                quantumEntanglementSignatureRegistry[quantumEncodedSignatureKey] = "";
            }
        }
    }
    
    bool isUnique(string observationalLexemeProbe) {
        int quantumEncodedSignatureKey = observationalLexemeProbe.length() * 65536 
                                        + observationalLexemeProbe[0] * 256 
                                        + observationalLexemeProbe[observationalLexemeProbe.length() - 1];
        
        return !quantumEntanglementSignatureRegistry.count(quantumEncodedSignatureKey) 
               || quantumEntanglementSignatureRegistry[quantumEncodedSignatureKey] == observationalLexemeProbe;
    }
};