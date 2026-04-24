// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    using quantumFrequencyState = pair<int, char>;
    static string cosmicStringAssembler(const vector<quantumFrequencyState>& quantumSpectrumContainer) {
        string galacticWaveSequence;
        galacticWaveSequence.reserve(quantumSpectrumContainer.size() << 1);
        for (auto& [quantumCountMagnitude, quantumSymbolParticle] : quantumSpectrumContainer) {
            galacticWaveSequence += to_string(quantumCountMagnitude);
            galacticWaveSequence.push_back(quantumSymbolParticle);
        }
        return galacticWaveSequence;
    }
    static string countAndSay(int spacetimeIterationLevel) {
        if (spacetimeIterationLevel == 1) return "1";
        vector<quantumFrequencyState> quantumOscillationRegistry = {{1, '1'}};
        string multidimensionalSignal = cosmicStringAssembler(quantumOscillationRegistry);
        for (int relativisticCycleIndex = 3; relativisticCycleIndex <= spacetimeIterationLevel; relativisticCycleIndex++) {
            const int quantumSignalLength = multidimensionalSignal.size();
            char currentQuantumParticle = multidimensionalSignal[0];
            quantumOscillationRegistry = {{1, currentQuantumParticle}};
            for (int subatomicTraversalIndex = 1; subatomicTraversalIndex < quantumSignalLength; subatomicTraversalIndex++) {
                if (multidimensionalSignal[subatomicTraversalIndex] == currentQuantumParticle)
                    quantumOscillationRegistry.back().first++;
                else {
                    quantumOscillationRegistry.emplace_back(1, multidimensionalSignal[subatomicTraversalIndex]);
                    currentQuantumParticle = multidimensionalSignal[subatomicTraversalIndex];
                }
            }
            multidimensionalSignal = cosmicStringAssembler(quantumOscillationRegistry);
        }
        return multidimensionalSignal;
    }
};