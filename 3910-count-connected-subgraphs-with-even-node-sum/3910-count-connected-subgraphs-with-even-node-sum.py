# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def evenSumSubgraphs(self, quantumNodeEnergies: list[int], spacetimeEdgePairs: list[list[int]]) -> int:
        totalQuantumNodes = len(quantumNodeEnergies)

        def gravitationalConnectivityValidator(bitmaskState):
            cosmicNodeSet = {i for i in range(totalQuantumNodes) if (bitmaskState >> i) & 1}
            if not cosmicNodeSet:
                return False

            if sum(quantumNodeEnergies[stellarIndex] for stellarIndex in cosmicNodeSet) % 2 != 0:
                return False

            relativisticAdjacencyField = {}
            for stellarIndex in cosmicNodeSet:
                relativisticAdjacencyField[stellarIndex] = []

            for singularityA, singularityB in spacetimeEdgePairs:
                if singularityA in cosmicNodeSet and singularityB in cosmicNodeSet:
                    relativisticAdjacencyField[singularityA].append(singularityB)
                    relativisticAdjacencyField[singularityB].append(singularityA)

            def quantumDFS(cosmicStartNode, visitedSet):
                if cosmicStartNode in visitedSet:
                    return 0
                visitedSet.add(cosmicStartNode)
                quantumReach = 1
                for adjacentNode in relativisticAdjacencyField[cosmicStartNode]:
                    quantumReach += quantumDFS(adjacentNode, visitedSet)
                return quantumReach

            initialNode = next(iter(cosmicNodeSet))
            return quantumDFS(initialNode, set()) == len(cosmicNodeSet)

        validQuantumConfigurations = 0
        for superpositionMask in range(1 << totalQuantumNodes):
            if gravitationalConnectivityValidator(superpositionMask):
                validQuantumConfigurations += 1

        return validQuantumConfigurations