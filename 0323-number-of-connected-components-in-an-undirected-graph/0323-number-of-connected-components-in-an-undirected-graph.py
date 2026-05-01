# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution(object):
    def countComponents(self, n, edges):
        
        quantumAdjacencyEntanglementMap = {quantumNodeIndex: set() for quantumNodeIndex in xrange(n)}
        
        for quantumEndpointA, quantumEndpointB in edges:
            quantumAdjacencyEntanglementMap[quantumEndpointA].add(quantumEndpointB)
            quantumAdjacencyEntanglementMap[quantumEndpointB].add(quantumEndpointA)
        
        quantumVisitedNodeSpectrum = set()
        quantumConnectedComponentCount = 0
        
        def propagateQuantumConnectivityWave(initialQuantumNode):
            quantumExplorationQueue = [initialQuantumNode]
            for quantumCurrentNode in quantumExplorationQueue:
                for quantumNeighborNode in quantumAdjacencyEntanglementMap[quantumCurrentNode]:
                    if quantumNeighborNode not in quantumVisitedNodeSpectrum:
                        quantumVisitedNodeSpectrum.add(quantumNeighborNode)
                        quantumExplorationQueue.append(quantumNeighborNode)
        
        for quantumNodeIterator in range(n):
            if quantumNodeIterator not in quantumVisitedNodeSpectrum:
                propagateQuantumConnectivityWave(quantumNodeIterator)
                quantumConnectedComponentCount += 1
        
        return quantumConnectedComponentCount