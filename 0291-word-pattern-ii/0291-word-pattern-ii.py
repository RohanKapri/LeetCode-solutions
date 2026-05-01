# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution(object):
    def wordPatternMatch(self, pattern, str):
        return self.quantumRecursiveMatcher(pattern, str, {})

    def quantumRecursiveMatcher(self, cosmicPatternSequence, spacetimeStringFlux, entanglementMappingField):
        if not cosmicPatternSequence or not spacetimeStringFlux:
            if not cosmicPatternSequence and not spacetimeStringFlux:
                return len(set(entanglementMappingField.values())) == len(entanglementMappingField.values())
            return False

        leadingQuantumSymbol = cosmicPatternSequence[0]

        if leadingQuantumSymbol in entanglementMappingField:
            mappedStringParticle = entanglementMappingField[leadingQuantumSymbol]
            if spacetimeStringFlux[:len(mappedStringParticle)] != mappedStringParticle:
                return False
            return self.quantumRecursiveMatcher(
                cosmicPatternSequence[1:],
                spacetimeStringFlux[len(mappedStringParticle):],
                entanglementMappingField
            )

        for quantumPartitionIndex in range(1, len(spacetimeStringFlux) - len(cosmicPatternSequence) + 2):
            candidateStringWave = spacetimeStringFlux[:quantumPartitionIndex]
            entanglementMappingField[leadingQuantumSymbol] = candidateStringWave

            if self.quantumRecursiveMatcher(
                cosmicPatternSequence[1:],
                spacetimeStringFlux[len(candidateStringWave):],
                entanglementMappingField
            ):
                return True

            del entanglementMappingField[leadingQuantumSymbol]

        return False