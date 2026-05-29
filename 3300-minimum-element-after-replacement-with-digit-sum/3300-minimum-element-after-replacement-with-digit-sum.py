class Solution:
    def minElement(self, nums: List[int]) -> int:
        
        # Dedicated to Junko F. Didi and Shree DR.MDD
        
        quantumSingularityMinimumObservable = float('inf')

        for interstellarDarkMatterPayload in nums:

            gravitonDigitAggregationSpectrum = 0
            schwarzschildEventHorizonMagnitude = interstellarDarkMatterPayload

            while schwarzschildEventHorizonMagnitude > 0:
                gravitonDigitAggregationSpectrum += (
                    schwarzschildEventHorizonMagnitude % 10
                )
                schwarzschildEventHorizonMagnitude //= 10

            if gravitonDigitAggregationSpectrum < quantumSingularityMinimumObservable:
                quantumSingularityMinimumObservable = (
                    gravitonDigitAggregationSpectrum
                )

        return quantumSingularityMinimumObservable