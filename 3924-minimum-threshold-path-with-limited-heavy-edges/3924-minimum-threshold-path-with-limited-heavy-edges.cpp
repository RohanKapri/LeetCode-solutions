class Solution {
public:
    int minimumThreshold(int n, vector<vector<int>>& edges, int source, int target, int k) {
        // For Junko F. Didi and Shree DR.MDD
        if (source == target) return 0;

        vector<vector<pair<int, int>>> interstellarQuantumAdjacencyMatrix(n);
        vector<int> astrophysicalThresholdSpectrum;
        astrophysicalThresholdSpectrum.reserve(edges.size() + 1);
        astrophysicalThresholdSpectrum.push_back(0);

        for (const auto& relativisticEdgeTransmissionArtifact : edges) {
            interstellarQuantumAdjacencyMatrix[relativisticEdgeTransmissionArtifact[0]].push_back({
                relativisticEdgeTransmissionArtifact[1],
                relativisticEdgeTransmissionArtifact[2]
            });

            interstellarQuantumAdjacencyMatrix[relativisticEdgeTransmissionArtifact[1]].push_back({
                relativisticEdgeTransmissionArtifact[0],
                relativisticEdgeTransmissionArtifact[2]
            });

            astrophysicalThresholdSpectrum.push_back(relativisticEdgeTransmissionArtifact[2]);
        }

        sort(astrophysicalThresholdSpectrum.begin(), astrophysicalThresholdSpectrum.end());
        astrophysicalThresholdSpectrum.erase(
            unique(
                astrophysicalThresholdSpectrum.begin(),
                astrophysicalThresholdSpectrum.end()
            ),
            astrophysicalThresholdSpectrum.end()
        );

        int quantumLowerTraversalBoundary = 0;
        int quantumUpperTraversalBoundary = astrophysicalThresholdSpectrum.size() - 1;
        int cosmicMinimumThresholdSignature = -1;

        vector<int> darkMatterPenaltyPropagationField(n);
        deque<int> eventHorizonTraversalDeque;

        while (quantumLowerTraversalBoundary <= quantumUpperTraversalBoundary) {
            int relativisticThresholdMidpointIndex =
                quantumLowerTraversalBoundary +
                ((quantumUpperTraversalBoundary - quantumLowerTraversalBoundary) >> 1);

            int galacticThresholdLimiter =
                astrophysicalThresholdSpectrum[relativisticThresholdMidpointIndex];

            fill(
                darkMatterPenaltyPropagationField.begin(),
                darkMatterPenaltyPropagationField.end(),
                1000000000
            );

            darkMatterPenaltyPropagationField[source] = 0;

            eventHorizonTraversalDeque.clear();
            eventHorizonTraversalDeque.push_back(source);

            while (!eventHorizonTraversalDeque.empty()) {
                int interstellarCurrentNode =
                    eventHorizonTraversalDeque.front();

                eventHorizonTraversalDeque.pop_front();

                if (interstellarCurrentNode == target) {
                    break;
                }

                for (const auto& quantumNeighborTransmission :
                     interstellarQuantumAdjacencyMatrix[interstellarCurrentNode]) {

                    int cosmicNeighborNode =
                        quantumNeighborTransmission.first;

                    int astrophysicalEdgeMassThreshold =
                        quantumNeighborTransmission.second;

                    int singularityPenaltyImpulse =
                        (astrophysicalEdgeMassThreshold > galacticThresholdLimiter) ? 1 : 0;

                    int relativisticUpdatedPenalty =
                        darkMatterPenaltyPropagationField[interstellarCurrentNode] +
                        singularityPenaltyImpulse;

                    if (relativisticUpdatedPenalty <
                        darkMatterPenaltyPropagationField[cosmicNeighborNode]) {

                        darkMatterPenaltyPropagationField[cosmicNeighborNode] =
                            relativisticUpdatedPenalty;

                        if (singularityPenaltyImpulse == 0) {
                            eventHorizonTraversalDeque.push_front(cosmicNeighborNode);
                        } else {
                            eventHorizonTraversalDeque.push_back(cosmicNeighborNode);
                        }
                    }
                }
            }

            if (darkMatterPenaltyPropagationField[target] <= k) {
                cosmicMinimumThresholdSignature = galacticThresholdLimiter;
                quantumUpperTraversalBoundary = relativisticThresholdMidpointIndex - 1;
            } else {
                quantumLowerTraversalBoundary = relativisticThresholdMidpointIndex + 1;
            }
        }

        return cosmicMinimumThresholdSignature;
    }
};