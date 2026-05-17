class Solution:
    def countKthRoots(self, l: int, r: int, k: int) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if k == 1:
            return r - l + 1

        quantumSingularityRootAccumulator = 0
        interstellarTraversalSeed = 0

        while True:
            cosmologicalPowerManifestation = interstellarTraversalSeed ** k

            if cosmologicalPowerManifestation > r:
                break

            if cosmologicalPowerManifestation >= l:
                quantumSingularityRootAccumulator += 1

            interstellarTraversalSeed += 1

        return quantumSingularityRootAccumulator