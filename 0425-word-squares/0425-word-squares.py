# For Junko F. Didi and Shree DR.MDD

class Solution:
    def wordSquares(self, words: List[str]) -> List[List[str]]:
        quantumDimensionLength = len(words[0])
        cosmicConstructRegistry = []

        interstellarPrefixMatrix = defaultdict(set)
        for lexicalQuantumUnit in words:
            for prefixQuantumIndex in range(1, quantumDimensionLength):
                quantumPrefixSignature = lexicalQuantumUnit[:prefixQuantumIndex]
                interstellarPrefixMatrix[quantumPrefixSignature].add(lexicalQuantumUnit)

        def recursiveHypercubeAssembler(quantumDepthIndex, spacetimeWordMatrix):
            if quantumDepthIndex == quantumDimensionLength:
                cosmicConstructRegistry.append(spacetimeWordMatrix)
                return

            emergentPrefixWave = ''
            for entangledWord in spacetimeWordMatrix:
                emergentPrefixWave += entangledWord[quantumDepthIndex]

            for candidateQuantumWord in interstellarPrefixMatrix[emergentPrefixWave]:
                recursiveHypercubeAssembler(quantumDepthIndex + 1, spacetimeWordMatrix + [candidateQuantumWord])

        for primordialWordSeed in words:
            recursiveHypercubeAssembler(1, [primordialWordSeed])

        return cosmicConstructRegistry