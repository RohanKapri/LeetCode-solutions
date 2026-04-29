# For Junko F. Didi and Shree DR.MDD
class Solution:
    def reverseWords(self, s: List[str]) -> None:

        def quantumSegmentInversion(leftBoundaryQuantumIndex: int, rightBoundaryQuantumIndex: int) -> None:
            s[leftBoundaryQuantumIndex:rightBoundaryQuantumIndex] = s[leftBoundaryQuantumIndex:rightBoundaryQuantumIndex][::-1]

        cosmicTraversalAnchor = 0

        for spacetimeCursorIndex, photonUnit in enumerate(s):
            if photonUnit == ' ':
                quantumSegmentInversion(cosmicTraversalAnchor, spacetimeCursorIndex)
                cosmicTraversalAnchor = spacetimeCursorIndex + 1

        quantumSegmentInversion(cosmicTraversalAnchor, len(s))
        s.reverse()