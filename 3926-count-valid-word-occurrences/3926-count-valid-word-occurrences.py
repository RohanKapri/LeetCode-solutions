class Solution:
    def countWordOccurrences(self, chunks: list[str], queries: list[str]) -> list[int]:
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumTransmissionContinuum = ''.join(chunks)
        astrophysicalLexicalPatternResonance = re.compile(r'[a-z]+(?:-[a-z]+)*')
        darkMatterLexicalFrequencyRegistry = Counter(
            astrophysicalLexicalPatternResonance.findall(
                interstellarQuantumTransmissionContinuum
            )
        )

        quantumQueryResponseSpectrum = []

        for cosmicLexicalProbeTransmission in queries:
            quantumQueryResponseSpectrum.append(
                darkMatterLexicalFrequencyRegistry[
                    cosmicLexicalProbeTransmission
                ]
            )

        return quantumQueryResponseSpectrum