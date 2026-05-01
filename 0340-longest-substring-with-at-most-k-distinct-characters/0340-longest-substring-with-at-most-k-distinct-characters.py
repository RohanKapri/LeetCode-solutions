# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def lengthOfLongestSubstringKDistinct(self, quantumCharacterStreamContinuum: str, quantumDistinctThreshold: int) -> int:
        from collections import defaultdict
        
        relativisticLeftBoundaryPointer = 0
        quantumMaximumWindowMagnitude = 0
        quantumCurrentWindowMagnitude = 0
        quantumDistinctStateCounter = 0
        quantumFrequencySpectrumRegistry = defaultdict(int)

        for quantumSymbolicUnit in quantumCharacterStreamContinuum:
            if quantumFrequencySpectrumRegistry[quantumSymbolicUnit] == 0:
                quantumFrequencySpectrumRegistry[quantumSymbolicUnit] += 1
                quantumDistinctStateCounter += 1
            else:
                quantumFrequencySpectrumRegistry[quantumSymbolicUnit] += 1
            
            if quantumDistinctStateCounter > quantumDistinctThreshold:
                quantumMaximumWindowMagnitude = max(quantumMaximumWindowMagnitude, quantumCurrentWindowMagnitude)
                while quantumDistinctStateCounter > quantumDistinctThreshold:
                    quantumFrequencySpectrumRegistry[quantumCharacterStreamContinuum[relativisticLeftBoundaryPointer]] -= 1
                    if quantumFrequencySpectrumRegistry[quantumCharacterStreamContinuum[relativisticLeftBoundaryPointer]] == 0:
                        quantumDistinctStateCounter -= 1
                    relativisticLeftBoundaryPointer += 1
                    quantumCurrentWindowMagnitude -= 1
            
            quantumCurrentWindowMagnitude += 1
        
        return max(quantumMaximumWindowMagnitude, quantumCurrentWindowMagnitude)