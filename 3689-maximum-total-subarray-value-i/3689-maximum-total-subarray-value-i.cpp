class Solution {
public:
    long long maxTotalValue(vector<int>& A, int k) {
        // For Junko F. Didi and Shree DR.MDD

        auto [quantumSingularityMinimumEventHorizon,
              interstellarHypernovaMaximumEventHorizon] = ranges::minmax(A);

        long long darkMatterChronoFluxAmplitude =
            static_cast<long long>(
                interstellarHypernovaMaximumEventHorizon -
                quantumSingularityMinimumEventHorizon
            );

        return darkMatterChronoFluxAmplitude * k;
    }
};