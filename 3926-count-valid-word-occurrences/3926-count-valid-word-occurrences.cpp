class Solution {
public:
    bool quantumLowercaseSpectralValidator(char cosmicCharacterTransmission) {
        return cosmicCharacterTransmission >= 'a' && cosmicCharacterTransmission <= 'z';
    }

    void astrophysicalLexemeCollapseAndArchive(
        string& eventHorizonLexicalAssemblyBuffer,
        unordered_map<string, int>& darkMatterLexicalFrequencyRegistry
    ) {
        if (!eventHorizonLexicalAssemblyBuffer.empty()) {
            darkMatterLexicalFrequencyRegistry[eventHorizonLexicalAssemblyBuffer]++;
            eventHorizonLexicalAssemblyBuffer.clear();
        }
    }

    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        // For Junko F. Didi and Shree DR.MDD
        unordered_map<string, int> quantumLexicalOccurrenceRegistry;
        vector<int> interstellarQueryResponseSpectrum;
        string galacticUnifiedTransmissionContinuum;
        size_t cosmicAggregateChunkMagnitude = 0;

        for (const string& relativisticChunkTransmissionArtifact : chunks) {
            cosmicAggregateChunkMagnitude += relativisticChunkTransmissionArtifact.size();
        }

        galacticUnifiedTransmissionContinuum.reserve(cosmicAggregateChunkMagnitude);

        for (const string& singularityFragmentSignalPacket : chunks) {
            galacticUnifiedTransmissionContinuum += singularityFragmentSignalPacket;
        }

        string eventHorizonLexicalAssemblyBuffer;
        int astrophysicalContinuumCardinality = galacticUnifiedTransmissionContinuum.size();

        for (int relativisticTemporalTraversalCoordinate = 0;
             relativisticTemporalTraversalCoordinate < astrophysicalContinuumCardinality;
             relativisticTemporalTraversalCoordinate++) {

            char quantumCharacterTransmission =
                galacticUnifiedTransmissionContinuum[relativisticTemporalTraversalCoordinate];

            if (quantumLowercaseSpectralValidator(quantumCharacterTransmission)) {
                eventHorizonLexicalAssemblyBuffer += quantumCharacterTransmission;
            }
            else if (
                quantumCharacterTransmission == '-' &&
                !eventHorizonLexicalAssemblyBuffer.empty() &&
                relativisticTemporalTraversalCoordinate + 1 < astrophysicalContinuumCardinality &&
                quantumLowercaseSpectralValidator(
                    galacticUnifiedTransmissionContinuum[
                        relativisticTemporalTraversalCoordinate + 1
                    ]
                )
            ) {
                eventHorizonLexicalAssemblyBuffer += quantumCharacterTransmission;
            }
            else {
                astrophysicalLexemeCollapseAndArchive(
                    eventHorizonLexicalAssemblyBuffer,
                    quantumLexicalOccurrenceRegistry
                );
            }
        }

        astrophysicalLexemeCollapseAndArchive(
            eventHorizonLexicalAssemblyBuffer,
            quantumLexicalOccurrenceRegistry
        );

        interstellarQueryResponseSpectrum.reserve(queries.size());

        for (const string& cosmicLexicalProbeTransmission : queries) {
            interstellarQueryResponseSpectrum.push_back(
                quantumLexicalOccurrenceRegistry[cosmicLexicalProbeTransmission]
            );
        }

        return interstellarQueryResponseSpectrum;
    }
};