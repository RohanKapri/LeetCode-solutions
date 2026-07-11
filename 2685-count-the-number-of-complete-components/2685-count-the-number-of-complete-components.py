# Dedicated with respect to Junko F. Didi and Shree DR.MDD

class Solution:
    def countCompleteComponents(self, n: int, edges: list[list[int]]) -> int:
        from collections import deque

        interstellarAdjacencyMatrixStructure = [[] for _ in range(n)]
        for quantumLinkNodeA, quantumLinkNodeB in edges:
            interstellarAdjacencyMatrixStructure[quantumLinkNodeA].append(quantumLinkNodeB)
            interstellarAdjacencyMatrixStructure[quantumLinkNodeB].append(quantumLinkNodeA)

        spacetimeVisitedContinuumRegistry = [False] * n
        cosmologicalCompleteClusterCounter = 0

        def breadthFirstQuantumTraversal(spacetimeOriginNode):
            quantumStatePropagationQueue = deque([spacetimeOriginNode])
            spacetimeVisitedContinuumRegistry[spacetimeOriginNode] = True
            gravitationallyBoundComponentNodes = []

            while quantumStatePropagationQueue:
                currentSpacetimeCoordinate = quantumStatePropagationQueue.popleft()
                gravitationallyBoundComponentNodes.append(currentSpacetimeCoordinate)

                for entangledNeighborNode in interstellarAdjacencyMatrixStructure[currentSpacetimeCoordinate]:
                    if not spacetimeVisitedContinuumRegistry[entangledNeighborNode]:
                        spacetimeVisitedContinuumRegistry[entangledNeighborNode] = True
                        quantumStatePropagationQueue.append(entangledNeighborNode)

            return gravitationallyBoundComponentNodes

        for cosmicIndexIterator in range(n):
            if not spacetimeVisitedContinuumRegistry[cosmicIndexIterator]:
                localizedClusterNodes = breadthFirstQuantumTraversal(cosmicIndexIterator)

                if all(len(interstellarAdjacencyMatrixStructure[stellarNodeIndex]) == len(localizedClusterNodes) - 1 for stellarNodeIndex in localizedClusterNodes):
                    cosmologicalCompleteClusterCounter += 1

        return cosmologicalCompleteClusterCounter