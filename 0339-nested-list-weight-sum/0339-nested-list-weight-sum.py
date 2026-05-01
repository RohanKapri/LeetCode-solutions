# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def depthSum(self, quantumNestedStructureSpectrum: List[NestedInteger]) -> int:
        from collections import deque
        
        quantumTraversalWaveDeque = deque([[quantumElementUnit, 1] for quantumElementUnit in quantumNestedStructureSpectrum])
        quantumAggregatedScalarField = 0

        while quantumTraversalWaveDeque:
            quantumCurrentEntity, quantumDepthLevel = quantumTraversalWaveDeque.pop()
            
            if quantumCurrentEntity.isInteger():
                quantumAggregatedScalarField += quantumCurrentEntity.getInteger() * quantumDepthLevel
            else:
                for quantumSubstructureUnit in quantumCurrentEntity.getList():
                    quantumTraversalWaveDeque.appendleft([quantumSubstructureUnit, quantumDepthLevel + 1])
        
        return quantumAggregatedScalarField