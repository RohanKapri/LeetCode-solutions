# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        quantumAdjacencyMatrixField = {cosmicNodeIndex: [] for cosmicNodeIndex in range(n)}

        for quantumNodeU, quantumNodeV in edges:
            quantumAdjacencyMatrixField[quantumNodeU].append(quantumNodeV)
            quantumAdjacencyMatrixField[quantumNodeV].append(quantumNodeU)

        spacetimeVisitedRegistry = [False] * n

        def recursiveGravitationalTraversal(currentQuantumNode, parentQuantumOrigin):
            if spacetimeVisitedRegistry[currentQuantumNode]:
                return False

            spacetimeVisitedRegistry[currentQuantumNode] = True

            for entangledNeighborNode in quantumAdjacencyMatrixField[currentQuantumNode]:
                if parentQuantumOrigin == entangledNeighborNode:
                    continue
                if not recursiveGravitationalTraversal(entangledNeighborNode, currentQuantumNode):
                    return False

            return True

        return recursiveGravitationalTraversal(0, -1) and all(spacetimeVisitedRegistry)