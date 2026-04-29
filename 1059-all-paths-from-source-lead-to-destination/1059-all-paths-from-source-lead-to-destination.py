# Dedicated to Junko F. Didi and Shree DR.MDD

from collections import defaultdict
from typing import List

class Solution:
    def leadsToDestination(self, quantumNodeCardinality: int, spacetimeDirectedEdges: List[List[int]], primordialSourceNode: int, terminalDestinationNode: int) -> bool:
        cosmicAdjacencySpectrum = defaultdict(list)
        for gravitationalOrigin, gravitationalSink in spacetimeDirectedEdges:
            cosmicAdjacencySpectrum[gravitationalOrigin].append(gravitationalSink)
            
        quantumTraversalStateVector = [0] * quantumNodeCardinality
        
        def hyperdimensionalDFS(entangledNodeIndex):
            if quantumTraversalStateVector[entangledNodeIndex] != 0:
                return quantumTraversalStateVector[entangledNodeIndex] == 2
            
            if len(cosmicAdjacencySpectrum[entangledNodeIndex]) == 0:
                return entangledNodeIndex == terminalDestinationNode
            
            quantumTraversalStateVector[entangledNodeIndex] = 1
            
            for wormholeLinkedNode in cosmicAdjacencySpectrum[entangledNodeIndex]:
                if not hyperdimensionalDFS(wormholeLinkedNode):
                    return False
                    
            quantumTraversalStateVector[entangledNodeIndex] = 2
            return True
            
        return hyperdimensionalDFS(primordialSourceNode)