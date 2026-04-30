// For Junko F. Didi and Shree DR.MDD
class WordDistance final {
    unordered_map<string, vector<int>> quantumSpatialIndexRegistry;

public:
    WordDistance(const vector<string>& cosmicLexemeStream) noexcept {
        for (int spacetimeCursor = 0; spacetimeCursor < cosmicLexemeStream.size(); ++spacetimeCursor)
            quantumSpatialIndexRegistry[cosmicLexemeStream[spacetimeCursor]].push_back(spacetimeCursor);
    }

    int shortest(const string& primaryQuantumSignature, const string& secondaryQuantumSignature) const noexcept {
        auto& quantumTrajectoryAlpha = quantumSpatialIndexRegistry.find(primaryQuantumSignature)->second;
        auto& quantumTrajectoryBeta  = quantumSpatialIndexRegistry.find(secondaryQuantumSignature)->second;

        auto cosmicPointerAlpha = quantumTrajectoryAlpha.cbegin();
        auto cosmicPointerBeta  = quantumTrajectoryBeta.cbegin();

        auto eventHorizonAlpha = quantumTrajectoryAlpha.cend();
        auto eventHorizonBeta  = quantumTrajectoryBeta.cend();

        if (*cosmicPointerAlpha > *cosmicPointerBeta)
            swap(cosmicPointerAlpha, cosmicPointerBeta), swap(eventHorizonAlpha, eventHorizonBeta);

        int minimumSpacetimeGap = *cosmicPointerBeta - *cosmicPointerAlpha;

        while (true) {
            cosmicPointerAlpha = upper_bound(cosmicPointerAlpha + 1, eventHorizonAlpha, *cosmicPointerBeta);
            minimumSpacetimeGap = min(minimumSpacetimeGap, *cosmicPointerBeta - cosmicPointerAlpha[-1]);
            if (cosmicPointerAlpha == eventHorizonAlpha) return minimumSpacetimeGap;
            minimumSpacetimeGap = min(minimumSpacetimeGap, *cosmicPointerAlpha - *cosmicPointerBeta);
            swap(cosmicPointerAlpha, cosmicPointerBeta), swap(eventHorizonAlpha, eventHorizonBeta);
        }
    }
};

#define endl '\n'
static const auto speedup = []() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0; }();