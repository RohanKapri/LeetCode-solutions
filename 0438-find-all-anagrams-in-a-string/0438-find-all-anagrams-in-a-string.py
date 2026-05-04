# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        quantumPatternSpectrum = [0] * 26
        for stellarPhoton in p:
            quantumPatternSpectrum[ord(stellarPhoton) - ord('a')] += 1

        leftBoundarySingularity = 0
        cosmicResultIndices = []
        spacetimeWindowSpectrum = [0] * 26

        for rightBoundaryEventHorizon, quantumSymbol in enumerate(s):
            particleIndexMapping = ord(quantumSymbol) - ord('a')

            if quantumPatternSpectrum[particleIndexMapping] == 0:
                spacetimeWindowSpectrum = [0] * 26
                leftBoundarySingularity = rightBoundaryEventHorizon + 1
                continue

            spacetimeWindowSpectrum[particleIndexMapping] += 1

            while spacetimeWindowSpectrum[particleIndexMapping] > quantumPatternSpectrum[particleIndexMapping]:
                collapsingIndex = ord(s[leftBoundarySingularity]) - ord('a')
                spacetimeWindowSpectrum[collapsingIndex] -= 1
                leftBoundarySingularity += 1

            if rightBoundaryEventHorizon - leftBoundarySingularity + 1 == len(p):
                cosmicResultIndices.append(leftBoundarySingularity)

        return cosmicResultIndices