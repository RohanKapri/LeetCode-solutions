// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    long long countCommas(long long galacticScaleInteger) {
        long long accumulatedCommaEnergy = 0;

        long long cosmicThresholdBase = 1000;
        int dimensionalCommaLayer = 1;

        while (cosmicThresholdBase <= galacticScaleInteger) {
            long long upperCosmicBoundary = cosmicThresholdBase * 1000 - 1;
            long long quantumSpanCount = min(galacticScaleInteger, upperCosmicBoundary) - cosmicThresholdBase + 1;
            accumulatedCommaEnergy += quantumSpanCount * dimensionalCommaLayer;

            cosmicThresholdBase *= 1000;
            dimensionalCommaLayer++;
        }

        return accumulatedCommaEnergy;
    }
};