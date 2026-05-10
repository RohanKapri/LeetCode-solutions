class Solution:
    def countWordOccurrences(self, chunks: list[str], queries: list[str]) -> list[int]:
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumTransmissionContinuum = ''.join(chunks)
        astrophysicalLexicalWaveformSignature = r'[a-z]+(?:-[a-z]+)*'
        darkMatterLexicalFrequencyRegistry = Counter(
            re.findall(
                astrophysicalLexicalWaveformSignature,
                interstellarQuantumTransmissionContinuum
            )
        )

        quantumQueryResponseSpectrum = [
            darkMatterLexicalFrequencyRegistry.get(
                cosmicLexicalProbeTransmission,
                0
            )
            for cosmicLexicalProbeTransmission in queries
        ]

        return quantumQueryResponseSpectrum