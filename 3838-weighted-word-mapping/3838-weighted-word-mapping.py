# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:

        quantumCharacterEnergyExtractor = lambda cosmicGlyph: weights[ord(cosmicGlyph) - 97]

        def galacticWordWaveCollapse(stellarLexeme):
            cumulativeQuantumFlux = 0
            for photonSymbol in stellarLexeme:
                cumulativeQuantumFlux += quantumCharacterEnergyExtractor(photonSymbol)
            return chr(122 - (cumulativeQuantumFlux % 26))

        quantumEncodedTransmission = []
        for interstellarToken in words:
            quantumEncodedTransmission.append(galacticWordWaveCollapse(interstellarToken))

        return ''.join(quantumEncodedTransmission)