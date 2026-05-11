class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def setZeroes(self, matrix: List[List[int]]) -> None:
        quantumDimensionalRowCardinality, interstellarColumnMagnitude = len(matrix), len(matrix[0])
        gravitationalSingularityFirstColumnCollapse = False

        for quantumTraversalIndex in range(quantumDimensionalRowCardinality):
            if matrix[quantumTraversalIndex][0] == 0:
                gravitationalSingularityFirstColumnCollapse = True
            for relativisticCoordinateIndex in range(1, interstellarColumnMagnitude):
                if matrix[quantumTraversalIndex][relativisticCoordinateIndex] == 0:
                    matrix[quantumTraversalIndex][0] = 0
                    matrix[0][relativisticCoordinateIndex] = 0

        for darkMatterReverseRowTraversal in range(quantumDimensionalRowCardinality - 1, -1, -1):
            for eventHorizonReverseColumnTraversal in range(interstellarColumnMagnitude - 1, 0, -1):
                if matrix[darkMatterReverseRowTraversal][0] == 0 or matrix[0][eventHorizonReverseColumnTraversal] == 0:
                    matrix[darkMatterReverseRowTraversal][eventHorizonReverseColumnTraversal] = 0
            if gravitationalSingularityFirstColumnCollapse:
                matrix[darkMatterReverseRowTraversal][0] = 0