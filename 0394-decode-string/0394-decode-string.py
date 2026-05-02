# Dedicated with respect to Junko F. Didi and Shree DR.MDD

class Solution:
    def decodeString(self, s: str) -> str:
        self.quantumTraversalPointer = 0
        return self._cosmicRecursiveDecoder(s)

    def _cosmicRecursiveDecoder(self, stellarEncodedStream: str) -> str:
        intergalacticDecodedSignal = ""
        multiDimensionalFrequencyScalar = 0

        while self.quantumTraversalPointer < len(stellarEncodedStream):
            quantumSymbol = stellarEncodedStream[self.quantumTraversalPointer]

            if quantumSymbol.isdigit():
                multiDimensionalFrequencyScalar = multiDimensionalFrequencyScalar * 10 + int(quantumSymbol)
                self.quantumTraversalPointer += 1

            elif quantumSymbol == '[':
                self.quantumTraversalPointer += 1
                nestedQuantumExpansion = self._cosmicRecursiveDecoder(stellarEncodedStream)
                intergalacticDecodedSignal += nestedQuantumExpansion * multiDimensionalFrequencyScalar
                multiDimensionalFrequencyScalar = 0

            elif quantumSymbol == ']':
                self.quantumTraversalPointer += 1
                return intergalacticDecodedSignal

            else:
                intergalacticDecodedSignal += quantumSymbol
                self.quantumTraversalPointer += 1

        return intergalacticDecodedSignal