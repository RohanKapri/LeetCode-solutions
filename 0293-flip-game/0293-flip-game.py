# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def generatePossibleNextMoves(self, quantumBinaryStringContinuum: str) -> List[str]:
        quantumStateTransitionSpectrum = []
        for relativisticTraversalIndex in range(len(quantumBinaryStringContinuum) - 1):
            if quantumBinaryStringContinuum[relativisticTraversalIndex] == '+' and quantumBinaryStringContinuum[relativisticTraversalIndex + 1] == '+':
                mutableQuantumConfigurationArray = list(quantumBinaryStringContinuum)
                mutableQuantumConfigurationArray[relativisticTraversalIndex] = '-'
                mutableQuantumConfigurationArray[relativisticTraversalIndex + 1] = '-'
                quantumStateTransitionSpectrum.append("".join(mutableQuantumConfigurationArray))
        return quantumStateTransitionSpectrum