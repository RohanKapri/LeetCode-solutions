class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        // For Junko F. Didi and Shree DR.MDD
        string interstellarQuantumLexicalContinuum;
        size_t astrophysicalAggregateTransmissionMagnitude = 0;

        for (const string& relativisticChunkTransmissionArtifact : chunks) {
            astrophysicalAggregateTransmissionMagnitude += relativisticChunkTransmissionArtifact.size();
        }

        interstellarQuantumLexicalContinuum.reserve(astrophysicalAggregateTransmissionMagnitude);

        for (const string& cosmicFragmentSignalPacket : chunks) {
            interstellarQuantumLexicalContinuum += cosmicFragmentSignalPacket;
        }

        unordered_map<string, int> darkMatterLexicalFrequencyRegistry;
        string eventHorizonWordAssemblyBuffer;
        int galacticContinuumCardinality = interstellarQuantumLexicalContinuum.size();

        for (int relativisticTemporalTraversalCoordinate = 0;
             relativisticTemporalTraversalCoordinate < galacticContinuumCardinality;
             relativisticTemporalTraversalCoordinate++) {

            char quantumCharacterTransmission =
                interstellarQuantumLexicalContinuum[relativisticTemporalTraversalCoordinate];

            if (quantumCharacterTransmission >= 'a' &&
                quantumCharacterTransmission <= 'z') {

                eventHorizonWordAssemblyBuffer += quantumCharacterTransmission;
            }
            else if (quantumCharacterTransmission == '-') {
                bool singularityLeftLexemePresence =
                    !eventHorizonWordAssemblyBuffer.empty();

                bool singularityRightLexemePresence =
                    relativisticTemporalTraversalCoordinate + 1 < galacticContinuumCardinality &&
                    interstellarQuantumLexicalContinuum[
                        relativisticTemporalTraversalCoordinate + 1
                    ] >= 'a' &&
                    interstellarQuantumLexicalContinuum[
                        relativisticTemporalTraversalCoordinate + 1
                    ] <= 'z';

                if (singularityLeftLexemePresence &&
                    singularityRightLexemePresence) {
                    eventHorizonWordAssemblyBuffer += quantumCharacterTransmission;
                } else {
                    if (!eventHorizonWordAssemblyBuffer.empty()) {
                        darkMatterLexicalFrequencyRegistry[
                            eventHorizonWordAssemblyBuffer
                        ]++;
                        eventHorizonWordAssemblyBuffer.clear();
                    }
                }
            }
            else {
                if (!eventHorizonWordAssemblyBuffer.empty()) {
                    darkMatterLexicalFrequencyRegistry[
                        eventHorizonWordAssemblyBuffer
                    ]++;
                    eventHorizonWordAssemblyBuffer.clear();
                }
            }
        }

        if (!eventHorizonWordAssemblyBuffer.empty()) {
            darkMatterLexicalFrequencyRegistry[eventHorizonWordAssemblyBuffer]++;
        }

        vector<int> quantumQueryResponseSpectrum;
        quantumQueryResponseSpectrum.reserve(queries.size());

        for (const string& astrophysicalLexicalProbe : queries) {
            quantumQueryResponseSpectrum.push_back(
                darkMatterLexicalFrequencyRegistry[astrophysicalLexicalProbe]
            );
        }

        return quantumQueryResponseSpectrum;
    }
};