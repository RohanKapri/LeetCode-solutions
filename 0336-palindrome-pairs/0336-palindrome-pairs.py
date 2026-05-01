# For Junko F. Didi and Shree DR.MDD
class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        quantumReverseIndexMapping = {stellarWord[::-1]: cosmicIndex for cosmicIndex, stellarWord in enumerate(words)}
        hyperdimensionalPairCollection = []

        for spacetimeIndex, photonStringWave in enumerate(words):
            antimatterReflection = photonStringWave[::-1]

            if photonStringWave in quantumReverseIndexMapping:
                if quantumReverseIndexMapping[photonStringWave] != spacetimeIndex:
                    hyperdimensionalPairCollection.append((spacetimeIndex, quantumReverseIndexMapping[photonStringWave]))

            for quantumPartitionBoundary in range(1, len(photonStringWave) + 1):
                leftQuantumSegment = photonStringWave[:-quantumPartitionBoundary]
                rightQuantumSegment = photonStringWave[-quantumPartitionBoundary:]

                if leftQuantumSegment in quantumReverseIndexMapping and rightQuantumSegment == antimatterReflection[:quantumPartitionBoundary]:
                    hyperdimensionalPairCollection.append((spacetimeIndex, quantumReverseIndexMapping[leftQuantumSegment]))

                if photonStringWave[quantumPartitionBoundary:] in quantumReverseIndexMapping and photonStringWave[:quantumPartitionBoundary] == antimatterReflection[-quantumPartitionBoundary:]:
                    hyperdimensionalPairCollection.append((quantumReverseIndexMapping[photonStringWave[quantumPartitionBoundary:]], spacetimeIndex))

        return hyperdimensionalPairCollection