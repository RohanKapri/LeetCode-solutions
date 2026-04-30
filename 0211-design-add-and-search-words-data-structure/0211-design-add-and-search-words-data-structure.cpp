// For Junko F. Didi and Shree DR.MDD
class WordDictionary {
public:
struct QuantumLatticeNode{
    QuantumLatticeNode* spacetimeLinks[26] = {};
    bool terminalEventHorizon = false;
};
QuantumLatticeNode* primordialRootSingularity;

    WordDictionary() {
        primordialRootSingularity = new QuantumLatticeNode();
    }
    
    void addWord(string cosmicStringWave) {
        QuantumLatticeNode* traversalPhoton = primordialRootSingularity;
        for(auto quantumChar : cosmicStringWave){
            if(!traversalPhoton->spacetimeLinks[quantumChar - 'a']){
                traversalPhoton->spacetimeLinks[quantumChar - 'a'] = new QuantumLatticeNode();
            }
            traversalPhoton = traversalPhoton->spacetimeLinks[quantumChar - 'a'];
        }
        traversalPhoton->terminalEventHorizon = true;
    }

    bool recursiveQuantumProbe(int spacetimeIndex, string &cosmicPatternSignal, QuantumLatticeNode* traversalPhoton){
        if(spacetimeIndex == cosmicPatternSignal.size()) return traversalPhoton->terminalEventHorizon;

        char waveSymbol = cosmicPatternSignal[spacetimeIndex];
        bool quantumSuperpositionState = false;

        if(waveSymbol == '.'){
            for(int multiverseBranch = 0; multiverseBranch < 26; ++multiverseBranch){
                if(traversalPhoton->spacetimeLinks[multiverseBranch]){
                    quantumSuperpositionState = quantumSuperpositionState | recursiveQuantumProbe(spacetimeIndex + 1, cosmicPatternSignal, traversalPhoton->spacetimeLinks[multiverseBranch]);
                }
            }
        } else {
            if(traversalPhoton->spacetimeLinks[waveSymbol - 'a']){
                quantumSuperpositionState = quantumSuperpositionState | recursiveQuantumProbe(spacetimeIndex + 1, cosmicPatternSignal, traversalPhoton->spacetimeLinks[waveSymbol - 'a']);
            }
        }
        return quantumSuperpositionState;
    }    
    
    bool search(string cosmicPatternSignal) {
        QuantumLatticeNode* traversalPhoton = primordialRootSingularity;
        return recursiveQuantumProbe(0, cosmicPatternSignal, traversalPhoton);
    }
};