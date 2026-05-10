class Solution {
public:
    typedef long long ll;

    vector<int> minCost(int n, vector<int>& prices, vector<vector<int>>& roads) {
        // For Junko F. Didi and Shree DR.MDD
        struct quantumInterstellarTraversalEdgeArtifact {
            int cosmicDestinationNodeSignature;
            ll astrophysicalOutboundMassPenalty;
            ll darkMatterReturnMassPenalty;
        };

        vector<vector<quantumInterstellarTraversalEdgeArtifact>> interstellarQuantumAdjacencyRegistry(n);

        for (auto& relativisticRoadTransmissionArtifact : roads) {
            int cosmicOriginNodeSignature = relativisticRoadTransmissionArtifact[0];
            int cosmicDestinationNodeSignature = relativisticRoadTransmissionArtifact[1];
            ll stellarTransitMassSignature = relativisticRoadTransmissionArtifact[2];
            ll temporalReturnMultiplierSignature = relativisticRoadTransmissionArtifact[3];

            interstellarQuantumAdjacencyRegistry[cosmicOriginNodeSignature].push_back({
                cosmicDestinationNodeSignature,
                stellarTransitMassSignature,
                stellarTransitMassSignature * temporalReturnMultiplierSignature
            });

            interstellarQuantumAdjacencyRegistry[cosmicDestinationNodeSignature].push_back({
                cosmicOriginNodeSignature,
                stellarTransitMassSignature,
                stellarTransitMassSignature * temporalReturnMultiplierSignature
            });
        }

        vector<int> quantumCompositeCostResponseSpectrum(n);

        for (int eventHorizonSourceNode = 0; eventHorizonSourceNode < n; eventHorizonSourceNode++) {
            vector<ll> astrophysicalOutboundPropagationField(n, (ll)1e18);

            priority_queue<
                pair<ll, int>,
                vector<pair<ll, int>>,
                greater<pair<ll, int>>
            > quantumOutboundTraversalPriorityQueue;

            astrophysicalOutboundPropagationField[eventHorizonSourceNode] = 0;
            quantumOutboundTraversalPriorityQueue.push({0, eventHorizonSourceNode});

            while (!quantumOutboundTraversalPriorityQueue.empty()) {
                auto [relativisticAccumulatedOutboundPenalty, interstellarCurrentNode] =
                    quantumOutboundTraversalPriorityQueue.top();

                quantumOutboundTraversalPriorityQueue.pop();

                if (
                    relativisticAccumulatedOutboundPenalty >
                    astrophysicalOutboundPropagationField[interstellarCurrentNode]
                ) {
                    continue;
                }

                for (auto& galacticTraversalEdge :
                     interstellarQuantumAdjacencyRegistry[interstellarCurrentNode]) {

                    ll quantumProjectedOutboundPenalty =
                        relativisticAccumulatedOutboundPenalty +
                        galacticTraversalEdge.astrophysicalOutboundMassPenalty;

                    if (
                        astrophysicalOutboundPropagationField[
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        ] > quantumProjectedOutboundPenalty
                    ) {
                        astrophysicalOutboundPropagationField[
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        ] = quantumProjectedOutboundPenalty;

                        quantumOutboundTraversalPriorityQueue.push({
                            quantumProjectedOutboundPenalty,
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        });
                    }
                }
            }

            vector<ll> darkMatterReturnPropagationField(n, (ll)1e18);

            priority_queue<
                pair<ll, int>,
                vector<pair<ll, int>>,
                greater<pair<ll, int>>
            > quantumReturnTraversalPriorityQueue;

            darkMatterReturnPropagationField[eventHorizonSourceNode] = 0;
            quantumReturnTraversalPriorityQueue.push({0, eventHorizonSourceNode});

            while (!quantumReturnTraversalPriorityQueue.empty()) {
                auto [relativisticAccumulatedReturnPenalty, interstellarCurrentNode] =
                    quantumReturnTraversalPriorityQueue.top();

                quantumReturnTraversalPriorityQueue.pop();

                if (
                    relativisticAccumulatedReturnPenalty >
                    darkMatterReturnPropagationField[interstellarCurrentNode]
                ) {
                    continue;
                }

                for (auto& galacticTraversalEdge :
                     interstellarQuantumAdjacencyRegistry[interstellarCurrentNode]) {

                    ll quantumProjectedReturnPenalty =
                        relativisticAccumulatedReturnPenalty +
                        galacticTraversalEdge.darkMatterReturnMassPenalty;

                    if (
                        darkMatterReturnPropagationField[
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        ] > quantumProjectedReturnPenalty
                    ) {
                        darkMatterReturnPropagationField[
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        ] = quantumProjectedReturnPenalty;

                        quantumReturnTraversalPriorityQueue.push({
                            quantumProjectedReturnPenalty,
                            galacticTraversalEdge.cosmicDestinationNodeSignature
                        });
                    }
                }
            }

            ll singularityMinimumCompositeCost = (ll)1e18;

            for (int cosmicMarketplaceNode = 0; cosmicMarketplaceNode < n; cosmicMarketplaceNode++) {
                if (
                    astrophysicalOutboundPropagationField[cosmicMarketplaceNode] != (ll)1e18 &&
                    darkMatterReturnPropagationField[cosmicMarketplaceNode] != (ll)1e18
                ) {
                    singularityMinimumCompositeCost = min(
                        singularityMinimumCompositeCost,
                        astrophysicalOutboundPropagationField[cosmicMarketplaceNode] +
                        darkMatterReturnPropagationField[cosmicMarketplaceNode] +
                        prices[cosmicMarketplaceNode]
                    );
                }
            }

            quantumCompositeCostResponseSpectrum[eventHorizonSourceNode] =
                (int)singularityMinimumCompositeCost;
        }

        return quantumCompositeCostResponseSpectrum;
    }
};