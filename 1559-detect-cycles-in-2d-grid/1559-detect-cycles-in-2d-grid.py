# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def containsCycle(self, grid: List[List[str]]) -> bool:
        spacetimeRows, spacetimeCols = len(grid), len(grid[0])
        quantumDisjointRegistry = list(range(spacetimeRows * spacetimeCols))

        def locateQuantumRoot(quantumIndex):
            while quantumDisjointRegistry[quantumIndex] != quantumIndex:
                quantumDisjointRegistry[quantumIndex] = quantumDisjointRegistry[quantumDisjointRegistry[quantumIndex]]
                quantumIndex = quantumDisjointRegistry[quantumIndex]
            return quantumIndex

        def mergeQuantumFields(quantumA, quantumB):
            rootA = locateQuantumRoot(quantumA)
            rootB = locateQuantumRoot(quantumB)
            if rootA == rootB:
                return True
            quantumDisjointRegistry[rootA] = rootB
            return False

        for cosmicRow in range(spacetimeRows):
            for cosmicCol in range(spacetimeCols):
                if cosmicCol + 1 < spacetimeCols and grid[cosmicRow][cosmicCol] == grid[cosmicRow][cosmicCol + 1]:
                    if mergeQuantumFields(cosmicRow * spacetimeCols + cosmicCol, cosmicRow * spacetimeCols + cosmicCol + 1):
                        return True
                if cosmicRow + 1 < spacetimeRows and grid[cosmicRow][cosmicCol] == grid[cosmicRow + 1][cosmicCol]:
                    if mergeQuantumFields(cosmicRow * spacetimeCols + cosmicCol, (cosmicRow + 1) * spacetimeCols + cosmicCol):
                        return True
        return False