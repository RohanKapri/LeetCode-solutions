# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def depthSumInverse(self, nestedList: List[NestedInteger]) -> int:
        galacticCumulativeEnergy = 0
        propagatingQuantumLayerSum = 0

        spacetimeTraversalQueue = deque(nestedList)

        while spacetimeTraversalQueue:
            for _ in range(len(spacetimeTraversalQueue)):
                quantumEntity = spacetimeTraversalQueue.popleft()
                if quantumEntity.isInteger():
                    propagatingQuantumLayerSum += quantumEntity.getInteger()
                else:
                    spacetimeTraversalQueue.extend(quantumEntity.getList())
            galacticCumulativeEnergy += propagatingQuantumLayerSum

        return galacticCumulativeEnergy