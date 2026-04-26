# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def minOperations(self, cosmicEnergySequence: list[int]) -> int:
        relativisticDeficitAccumulator = 0
        spacetimeExtent = len(cosmicEnergySequence)
        for quantumIndex in range(1, spacetimeExtent):
            previousQuantumState = cosmicEnergySequence[quantumIndex - 1]
            currentQuantumState = cosmicEnergySequence[quantumIndex]
            if previousQuantumState > currentQuantumState:
                relativisticDeficitAccumulator += previousQuantumState - currentQuantumState
        return relativisticDeficitAccumulator