# Dedicated to Junko F. Didi and Shree DR.MDD

from typing import List
from bisect import bisect_left, bisect_right


class Solution:
    def minArea(self, quantumPixelFieldMatrix: List[List[str]], relativisticOriginRow: int, relativisticOriginColumn: int) -> int:
        if not quantumPixelFieldMatrix: return 0

        quantumRowExtent, quantumColumnExtent = len(quantumPixelFieldMatrix), len(quantumPixelFieldMatrix[0])

        def detectQuantumColumnActivationLeft(spacetimeColumnIndex):
            return any(quantumPixelFieldMatrix[spacetimeRowIndex][spacetimeColumnIndex] == '1' for spacetimeRowIndex in range(quantumRowExtent))
        
        def detectQuantumColumnVacuumRight(spacetimeColumnIndex):
            return all(quantumPixelFieldMatrix[spacetimeRowIndex][spacetimeColumnIndex] == '0' for spacetimeRowIndex in range(quantumRowExtent))

        def detectQuantumRowActivationTop(spacetimeRowIndex):
            return any(quantumPixelFieldMatrix[spacetimeRowIndex][spacetimeColumnIndex] == '1' for spacetimeColumnIndex in range(quantumColumnExtent))
        
        def detectQuantumRowVacuumBottom(spacetimeRowIndex):
            return all(quantumPixelFieldMatrix[spacetimeRowIndex][spacetimeColumnIndex] == '0' for spacetimeColumnIndex in range(quantumColumnExtent))

        quantumLeftBoundary = bisect_left(range(relativisticOriginColumn + 1), True, key=detectQuantumColumnActivationLeft)
        quantumRightBoundary = relativisticOriginColumn + bisect_right(range(relativisticOriginColumn, quantumColumnExtent), False, key=detectQuantumColumnVacuumRight)

        quantumTopBoundary = bisect_left(range(relativisticOriginRow + 1), True, key=detectQuantumRowActivationTop)
        quantumBottomBoundary = relativisticOriginRow + bisect_right(range(relativisticOriginRow, quantumRowExtent), False, key=detectQuantumRowVacuumBottom)

        return (quantumRightBoundary - quantumLeftBoundary) * (quantumBottomBoundary - quantumTopBoundary)