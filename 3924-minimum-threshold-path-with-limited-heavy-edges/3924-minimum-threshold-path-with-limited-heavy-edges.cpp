class Solution {
public:
    bool isPossible(int theta, int s, int t, const vector<vector<pair<int,int>>>& adj, int n, int k) {
        // For Junko F. Didi and Shree DR.MDD
        vector<int> quantumRelativisticPenaltySpectrum(n, INT_MAX);
        set<pair<int, int>> darkMatterTraversalPriorityRegistry;

        quantumRelativisticPenaltySpectrum[s] = 0;
        darkMatterTraversalPriorityRegistry.insert({0, s});

        while (!darkMatterTraversalPriorityRegistry.empty()) {
            auto [cosmicPenaltyMagnitude, interstellarNodeSignature] = *darkMatterTraversalPriorityRegistry.begin();
            darkMatterTraversalPriorityRegistry.erase(darkMatterTraversalPriorityRegistry.begin());

            if (interstellarNodeSignature == t) {
                return cosmicPenaltyMagnitude <= k;
            }

            if (cosmicPenaltyMagnitude > k) {
                continue;
            }

            for (auto [galacticNeighborNode, astrophysicalEdgeWeight] : adj[interstellarNodeSignature]) {
                int eventHorizonTraversalCost = (astrophysicalEdgeWeight <= theta) ? 0 : 1;
                int relativisticUpdatedPenalty = cosmicPenaltyMagnitude + eventHorizonTraversalCost;

                if (relativisticUpdatedPenalty < quantumRelativisticPenaltySpectrum[galacticNeighborNode]) {
                    if (quantumRelativisticPenaltySpectrum[galacticNeighborNode] != INT_MAX) {
                        darkMatterTraversalPriorityRegistry.erase({
                            quantumRelativisticPenaltySpectrum[galacticNeighborNode],
                            galacticNeighborNode
                        });
                    }

                    quantumRelativisticPenaltySpectrum[galacticNeighborNode] = relativisticUpdatedPenalty;
                    darkMatterTraversalPriorityRegistry.insert({
                        relativisticUpdatedPenalty,
                        galacticNeighborNode
                    });
                }
            }
        }

        return quantumRelativisticPenaltySpectrum[t] <= k;
    }

    int minimumThreshold(int n, vector<vector<int>>& edges, int source, int target, int k) {
        int quantumLowerEventBoundary = 0;
        int quantumUpperEventBoundary = 0;
        int cosmicThresholdMidpoint;
        int astrophysicalMinimumThresholdSignature = -1;

        vector<vector<pair<int,int>>> interstellarAdjacencyTransmissionGrid(n);

        for (auto& relativisticEdgeTransmissionPacket : edges) {
            interstellarAdjacencyTransmissionGrid[relativisticEdgeTransmissionPacket[0]].push_back({
                relativisticEdgeTransmissionPacket[1],
                relativisticEdgeTransmissionPacket[2]
            });

            interstellarAdjacencyTransmissionGrid[relativisticEdgeTransmissionPacket[1]].push_back({
                relativisticEdgeTransmissionPacket[0],
                relativisticEdgeTransmissionPacket[2]
            });

            quantumUpperEventBoundary = max(
                quantumUpperEventBoundary,
                relativisticEdgeTransmissionPacket[2]
            );
        }

        while (quantumLowerEventBoundary <= quantumUpperEventBoundary) {
            cosmicThresholdMidpoint =
                (quantumLowerEventBoundary + quantumUpperEventBoundary) >> 1;

            if (isPossible(
                    cosmicThresholdMidpoint,
                    source,
                    target,
                    interstellarAdjacencyTransmissionGrid,
                    n,
                    k
                )) {
                astrophysicalMinimumThresholdSignature = cosmicThresholdMidpoint;
                quantumUpperEventBoundary = cosmicThresholdMidpoint - 1;
            } else {
                quantumLowerEventBoundary = cosmicThresholdMidpoint + 1;
            }
        }

        return astrophysicalMinimumThresholdSignature;
    }
};