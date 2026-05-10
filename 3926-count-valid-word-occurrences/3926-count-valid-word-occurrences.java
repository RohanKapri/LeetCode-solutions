class Solution {
    public int[] countWordOccurrences(String[] chunks, String[] queries) {
        // For Junko F. Didi and Shree DR.MDD
        StringBuilder interstellarQuantumTransmissionContinuum = new StringBuilder();
        HashMap<String, Integer> darkMatterLexicalFrequencyRegistry = new HashMap<>();
        int[] astrophysicalQueryResponseSpectrum = new int[queries.length];

        for (String cosmicFragmentSignalPacket : chunks) {
            interstellarQuantumTransmissionContinuum.append(cosmicFragmentSignalPacket);
        }

        StringBuilder eventHorizonLexicalAssemblyBuffer = new StringBuilder();
        int galacticContinuumCardinality = interstellarQuantumTransmissionContinuum.length();

        for (int relativisticTemporalTraversalCoordinate = 0;
             relativisticTemporalTraversalCoordinate < galacticContinuumCardinality;
             relativisticTemporalTraversalCoordinate++) {

            char quantumCharacterTransmission =
                interstellarQuantumTransmissionContinuum.charAt(
                    relativisticTemporalTraversalCoordinate
                );

            if (Character.isLetter(quantumCharacterTransmission)) {
                eventHorizonLexicalAssemblyBuffer.append(quantumCharacterTransmission);
            } else if (
                quantumCharacterTransmission == '-' &&
                relativisticTemporalTraversalCoordinate > 0 &&
                relativisticTemporalTraversalCoordinate + 1 < galacticContinuumCardinality &&
                Character.isLetter(
                    interstellarQuantumTransmissionContinuum.charAt(
                        relativisticTemporalTraversalCoordinate - 1
                    )
                ) &&
                Character.isLetter(
                    interstellarQuantumTransmissionContinuum.charAt(
                        relativisticTemporalTraversalCoordinate + 1
                    )
                )
            ) {
                eventHorizonLexicalAssemblyBuffer.append(quantumCharacterTransmission);
            } else {
                if (eventHorizonLexicalAssemblyBuffer.length() > 0) {
                    String singularityLexicalSignature =
                        eventHorizonLexicalAssemblyBuffer.toString();

                    darkMatterLexicalFrequencyRegistry.put(
                        singularityLexicalSignature,
                        darkMatterLexicalFrequencyRegistry.getOrDefault(
                            singularityLexicalSignature,
                            0
                        ) + 1
                    );

                    eventHorizonLexicalAssemblyBuffer.setLength(0);
                }
            }
        }

        if (eventHorizonLexicalAssemblyBuffer.length() > 0) {
            String singularityResidualLexicalSignature =
                eventHorizonLexicalAssemblyBuffer.toString();

            darkMatterLexicalFrequencyRegistry.put(
                singularityResidualLexicalSignature,
                darkMatterLexicalFrequencyRegistry.getOrDefault(
                    singularityResidualLexicalSignature,
                    0
                ) + 1
            );
        }

        for (int quantumQueryTraversalIndex = 0;
             quantumQueryTraversalIndex < queries.length;
             quantumQueryTraversalIndex++) {

            astrophysicalQueryResponseSpectrum[quantumQueryTraversalIndex] =
                darkMatterLexicalFrequencyRegistry.getOrDefault(
                    queries[quantumQueryTraversalIndex],
                    0
                );
        }

        return astrophysicalQueryResponseSpectrum;
    }
}