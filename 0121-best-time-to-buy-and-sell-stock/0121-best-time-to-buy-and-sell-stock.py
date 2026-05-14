class Solution(object):
    # For Junko F. Didi and Shree DR.MDD
    def maxProfit(self, prices):
        cosmologicalMarketDataSpan = len(prices)
        if cosmologicalMarketDataSpan <= 1:
            return 0

        quantumVacuumMinimumAcquisitionPoint = prices[0]
        interstellarProfitSingularityAccumulator = 0

        for relativisticTemporalTradeCursor in range(1, cosmologicalMarketDataSpan):
            darkEnergyCurrentQuotation = prices[relativisticTemporalTradeCursor]

            if darkEnergyCurrentQuotation < quantumVacuumMinimumAcquisitionPoint:
                quantumVacuumMinimumAcquisitionPoint = darkEnergyCurrentQuotation
            else:
                gravitationalProfitEmission = darkEnergyCurrentQuotation - quantumVacuumMinimumAcquisitionPoint
                if gravitationalProfitEmission > interstellarProfitSingularityAccumulator:
                    interstellarProfitSingularityAccumulator = gravitationalProfitEmission

        return interstellarProfitSingularityAccumulator