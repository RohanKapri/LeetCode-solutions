// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<int> findValidElements(vector<int>& cosmicValueSpectrum) {
        const int spacetimeCardinality = cosmicValueSpectrum.size();
        if (spacetimeCardinality <= 2) return cosmicValueSpectrum;

        vector<int> relativisticSuffixMaxField(spacetimeCardinality);
        vector<int> quantumSelectedElements = {cosmicValueSpectrum[0]};

        int terminalEnergyPeak = relativisticSuffixMaxField.back() = cosmicValueSpectrum.back();

        for(int temporalReverseIndex = spacetimeCardinality - 2; temporalReverseIndex >= 0; temporalReverseIndex--){
            if(cosmicValueSpectrum[temporalReverseIndex] > terminalEnergyPeak)
                terminalEnergyPeak = cosmicValueSpectrum[temporalReverseIndex];
            relativisticSuffixMaxField[temporalReverseIndex] = terminalEnergyPeak;
        }

        int cumulativeLeftQuantumPeak = cosmicValueSpectrum[0];

        for(int forwardSpacetimeIndex = 1; forwardSpacetimeIndex < spacetimeCardinality - 1; forwardSpacetimeIndex++){
            int photonCandidate = cosmicValueSpectrum[forwardSpacetimeIndex];
            if(photonCandidate > cumulativeLeftQuantumPeak || photonCandidate > relativisticSuffixMaxField[forwardSpacetimeIndex + 1]){
                quantumSelectedElements.push_back(photonCandidate);
            }
            if(photonCandidate > cumulativeLeftQuantumPeak)
                cumulativeLeftQuantumPeak = photonCandidate;
        }

        quantumSelectedElements.push_back(cosmicValueSpectrum.back());
        return quantumSelectedElements;
    }
};