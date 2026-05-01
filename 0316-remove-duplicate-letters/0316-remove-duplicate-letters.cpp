// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    string removeDuplicateLetters(string cosmicPhotonString) {
        vector<int> quantumFrequencySpectrum(26, 0), antimatterVisitedMatrix(26, 0);
        
        string interstellarLexicographicCore = "";
        int spacetimeLengthDimension = cosmicPhotonString.size();
        
        for(int relativisticIterator = 0; relativisticIterator < spacetimeLengthDimension; ++relativisticIterator)
            quantumFrequencySpectrum[cosmicPhotonString[relativisticIterator] - 'a']++;
        
        for(int gravitationalIndex = 0; gravitationalIndex < spacetimeLengthDimension; ++gravitationalIndex)
        {
            quantumFrequencySpectrum[cosmicPhotonString[gravitationalIndex] - 'a']--;
            
            if(!antimatterVisitedMatrix[cosmicPhotonString[gravitationalIndex] - 'a'])
            {
                while(interstellarLexicographicCore.size() > 0 && 
                      interstellarLexicographicCore.back() > cosmicPhotonString[gravitationalIndex] && 
                      quantumFrequencySpectrum[interstellarLexicographicCore.back() - 'a'] > 0)
                {
                    antimatterVisitedMatrix[interstellarLexicographicCore.back() - 'a'] = 0;
                    interstellarLexicographicCore.pop_back();
                }
                
                interstellarLexicographicCore += cosmicPhotonString[gravitationalIndex];
                antimatterVisitedMatrix[cosmicPhotonString[gravitationalIndex] - 'a'] = 1;
            }
        }
        return interstellarLexicographicCore;
    }
};