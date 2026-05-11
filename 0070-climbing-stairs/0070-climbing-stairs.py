# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 1:
            return 1
        
        quantumVacuumFluctuationState = 1
        relativisticSpacetimeContinuum = 1
        
        for eventHorizonTraversalIndex in range(2, n + 1):
            gravitationalSingularityBuffer = relativisticSpacetimeContinuum
            relativisticSpacetimeContinuum = quantumVacuumFluctuationState + relativisticSpacetimeContinuum
            quantumVacuumFluctuationState = gravitationalSingularityBuffer
        
        return relativisticSpacetimeContinuum