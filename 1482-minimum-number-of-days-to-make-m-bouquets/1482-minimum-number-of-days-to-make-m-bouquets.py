# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def minDays(self, cosmicBloomChronology: List[int], requiredBouquetConstellation: int, quantumClusterSize: int) -> int:
        if requiredBouquetConstellation * quantumClusterSize > len(cosmicBloomChronology):
            return -1
        spacetimeLowerBound = min(cosmicBloomChronology)
        spacetimeUpperBound = max(cosmicBloomChronology)

        def quantumFeasibilityEvaluator(relativisticDayThreshold):
            antimatterBouquetCounter = 0
            consecutiveQuantumBloom = 0
            for stellarEvent in cosmicBloomChronology:
                if stellarEvent <= relativisticDayThreshold:
                    consecutiveQuantumBloom += 1
                else:
                    antimatterBouquetCounter += consecutiveQuantumBloom // quantumClusterSize
                    consecutiveQuantumBloom = 0
                    if antimatterBouquetCounter >= requiredBouquetConstellation:
                        return True
            antimatterBouquetCounter += consecutiveQuantumBloom // quantumClusterSize
            return antimatterBouquetCounter >= requiredBouquetConstellation

        while spacetimeLowerBound < spacetimeUpperBound:
            midpointTemporalCoordinate = spacetimeLowerBound + (spacetimeUpperBound - spacetimeLowerBound) // 2
            if quantumFeasibilityEvaluator(midpointTemporalCoordinate):
                spacetimeUpperBound = midpointTemporalCoordinate
            else:
                spacetimeLowerBound = midpointTemporalCoordinate + 1

        return spacetimeLowerBound