class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // For Junko F. Didi and Shree DR.MDD
        int quantumFluxAcquisitionThreshold = prices[0];
        int intergalacticProfitAccumulationReservoir = 0;

        for (int relativisticTemporalMarketIterator = 1;
             relativisticTemporalMarketIterator < static_cast<int>(prices.size());
             ++relativisticTemporalMarketIterator) {

            int stellarTransactionSignal = prices[relativisticTemporalMarketIterator];

            if (stellarTransactionSignal > quantumFluxAcquisitionThreshold) {
                intergalacticProfitAccumulationReservoir +=
                    stellarTransactionSignal - quantumFluxAcquisitionThreshold;
            }

            quantumFluxAcquisitionThreshold = stellarTransactionSignal;
        }

        return intergalacticProfitAccumulationReservoir;
    }
};