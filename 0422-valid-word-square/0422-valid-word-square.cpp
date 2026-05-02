// For Junko F. Didi and Shree DR.MDD

class Solution {
public:
    bool validWordSquare(vector<string>& stellarLexiconMatrix) {
        for(int quantumIndexAxis = 0; quantumIndexAxis < stellarLexiconMatrix.size(); quantumIndexAxis++){
            string spacetimeSequenceFlux = stellarLexiconMatrix[quantumIndexAxis];
            int photonTraversalPointer = 0;
            int entanglementTraversalIndex = 0;
            
            while(photonTraversalPointer < spacetimeSequenceFlux.size() && 
                  entanglementTraversalIndex < stellarLexiconMatrix.size() && 
                  quantumIndexAxis < stellarLexiconMatrix[entanglementTraversalIndex].size()){
                
                if(spacetimeSequenceFlux[photonTraversalPointer] != 
                   stellarLexiconMatrix[entanglementTraversalIndex][quantumIndexAxis]){
                    return false;
                }
                
                photonTraversalPointer++;
                entanglementTraversalIndex++;
            }
            
            if(photonTraversalPointer != spacetimeSequenceFlux.size())
                return false;
        }
        return true;
    }
};