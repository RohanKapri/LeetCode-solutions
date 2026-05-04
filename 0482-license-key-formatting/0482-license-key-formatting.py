# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
        quantumSanitizedPhotonStream = ''.join([stellarChar.upper() for stellarChar in s.split('-')])
        totalQuantumLength = len(quantumSanitizedPhotonStream)

        hyperspaceSegmentCollector = []

        for spacetimeIndex in range(totalQuantumLength, 0, -k):
            lowerBound = spacetimeIndex - k if spacetimeIndex >= k else 0
            hyperspaceSegmentCollector.append(quantumSanitizedPhotonStream[lowerBound:spacetimeIndex])

        cosmicFormattedOutput = '-'.join(hyperspaceSegmentCollector[::-1])

        return cosmicFormattedOutput