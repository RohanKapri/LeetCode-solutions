import java.util.*;

class Solution {

    private List<long[]>[] interstellarQuantumOutboundAdjacencyRegistry;
    private List<long[]>[] darkMatterReturnAdjacencyRegistry;

    private long[][] astrophysicalOutboundPropagationField;
    private long[][] relativisticReturnPropagationField;

    private void quantumInterstellarGraphSynthesisEngine(int n, int[][] roads) {
        interstellarQuantumOutboundAdjacencyRegistry = new ArrayList[n];
        darkMatterReturnAdjacencyRegistry = new ArrayList[n];

        for (int relativisticNodeInitializationCoordinate = 0;
             relativisticNodeInitializationCoordinate < n;
             relativisticNodeInitializationCoordinate++) {
            interstellarQuantumOutboundAdjacencyRegistry[
                relativisticNodeInitializationCoordinate
            ] = new ArrayList<>();

            darkMatterReturnAdjacencyRegistry[
                relativisticNodeInitializationCoordinate
            ] = new ArrayList<>();
        }

        for (int[] cosmicRoadTransmissionArtifact : roads) {
            int cosmicOriginNodeSignature = cosmicRoadTransmissionArtifact[0];
            int cosmicDestinationNodeSignature = cosmicRoadTransmissionArtifact[1];
            long stellarOutboundMassSignature = cosmicRoadTransmissionArtifact[2];
            long temporalReturnAmplificationSignature = cosmicRoadTransmissionArtifact[3];

            interstellarQuantumOutboundAdjacencyRegistry[
                cosmicOriginNodeSignature
            ].add(
                new long[]{
                    cosmicDestinationNodeSignature,
                    stellarOutboundMassSignature
                }
            );

            interstellarQuantumOutboundAdjacencyRegistry[
                cosmicDestinationNodeSignature
            ].add(
                new long[]{
                    cosmicOriginNodeSignature,
                    stellarOutboundMassSignature
                }
            );

            darkMatterReturnAdjacencyRegistry[
                cosmicOriginNodeSignature
            ].add(
                new long[]{
                    cosmicDestinationNodeSignature,
                    stellarOutboundMassSignature *
                    temporalReturnAmplificationSignature
                }
            );

            darkMatterReturnAdjacencyRegistry[
                cosmicDestinationNodeSignature
            ].add(
                new long[]{
                    cosmicOriginNodeSignature,
                    stellarOutboundMassSignature *
                    temporalReturnAmplificationSignature
                }
            );
        }
    }

    private void quantumDualPropagationComputationEngine(int n) {
        astrophysicalOutboundPropagationField = new long[n][n];
        relativisticReturnPropagationField = new long[n][n];

        for (int eventHorizonSourceNode = 0; eventHorizonSourceNode < n; eventHorizonSourceNode++) {
            Arrays.fill(
                astrophysicalOutboundPropagationField[eventHorizonSourceNode],
                Long.MAX_VALUE
            );
            Arrays.fill(
                relativisticReturnPropagationField[eventHorizonSourceNode],
                Long.MAX_VALUE
            );
        }

        for (int eventHorizonSourceNode = 0; eventHorizonSourceNode < n; eventHorizonSourceNode++) {
            PriorityQueue<long[]> quantumOutboundTraversalPriorityQueue =
                new PriorityQueue<>(
                    (stellarAlpha, stellarBeta) ->
                        Long.compare(stellarAlpha[1], stellarBeta[1])
                );

            astrophysicalOutboundPropagationField[
                eventHorizonSourceNode
            ][
                eventHorizonSourceNode
            ] = 0;

            quantumOutboundTraversalPriorityQueue.offer(
                new long[]{eventHorizonSourceNode, 0}
            );

            while (!quantumOutboundTraversalPriorityQueue.isEmpty()) {
                long[] relativisticTraversalState =
                    quantumOutboundTraversalPriorityQueue.poll();

                int interstellarCurrentNode =
                    (int) relativisticTraversalState[0];

                long relativisticAccumulatedPenalty =
                    relativisticTraversalState[1];

                if (
                    relativisticAccumulatedPenalty >
                    astrophysicalOutboundPropagationField[
                        eventHorizonSourceNode
                    ][
                        interstellarCurrentNode
                    ]
                ) {
                    continue;
                }

                for (long[] galacticTraversalEdge :
                     interstellarQuantumOutboundAdjacencyRegistry[
                         interstellarCurrentNode
                     ]) {

                    int galacticAdjacentNode =
                        (int) galacticTraversalEdge[0];

                    long quantumProjectedPenalty =
                        relativisticAccumulatedPenalty +
                        galacticTraversalEdge[1];

                    if (
                        quantumProjectedPenalty <
                        astrophysicalOutboundPropagationField[
                            eventHorizonSourceNode
                        ][
                            galacticAdjacentNode
                        ]
                    ) {
                        astrophysicalOutboundPropagationField[
                            eventHorizonSourceNode
                        ][
                            galacticAdjacentNode
                        ] = quantumProjectedPenalty;

                        quantumOutboundTraversalPriorityQueue.offer(
                            new long[]{
                                galacticAdjacentNode,
                                quantumProjectedPenalty
                            }
                        );
                    }
                }
            }

            PriorityQueue<long[]> quantumReturnTraversalPriorityQueue =
                new PriorityQueue<>(
                    (stellarAlpha, stellarBeta) ->
                        Long.compare(stellarAlpha[1], stellarBeta[1])
                );

            relativisticReturnPropagationField[
                eventHorizonSourceNode
            ][
                eventHorizonSourceNode
            ] = 0;

            quantumReturnTraversalPriorityQueue.offer(
                new long[]{eventHorizonSourceNode, 0}
            );

            while (!quantumReturnTraversalPriorityQueue.isEmpty()) {
                long[] relativisticTraversalState =
                    quantumReturnTraversalPriorityQueue.poll();

                int interstellarCurrentNode =
                    (int) relativisticTraversalState[0];

                long relativisticAccumulatedPenalty =
                    relativisticTraversalState[1];

                if (
                    relativisticAccumulatedPenalty >
                    relativisticReturnPropagationField[
                        eventHorizonSourceNode
                    ][
                        interstellarCurrentNode
                    ]
                ) {
                    continue;
                }

                for (long[] galacticTraversalEdge :
                     darkMatterReturnAdjacencyRegistry[
                         interstellarCurrentNode
                     ]) {

                    int galacticAdjacentNode =
                        (int) galacticTraversalEdge[0];

                    long quantumProjectedPenalty =
                        relativisticAccumulatedPenalty +
                        galacticTraversalEdge[1];

                    if (
                        quantumProjectedPenalty <
                        relativisticReturnPropagationField[
                            eventHorizonSourceNode
                        ][
                            galacticAdjacentNode
                        ]
                    ) {
                        relativisticReturnPropagationField[
                            eventHorizonSourceNode
                        ][
                            galacticAdjacentNode
                        ] = quantumProjectedPenalty;

                        quantumReturnTraversalPriorityQueue.offer(
                            new long[]{
                                galacticAdjacentNode,
                                quantumProjectedPenalty
                            }
                        );
                    }
                }
            }
        }
    }

    public int[] minCost(int n, int[] prices, int[][] roads) {
        // For Junko F. Didi and Shree DR.MDD
        quantumInterstellarGraphSynthesisEngine(n, roads);
        quantumDualPropagationComputationEngine(n);

        int[] quantumCompositeCostResponseSpectrum = new int[n];

        for (int cosmicSourceTraversalCoordinate = 0;
             cosmicSourceTraversalCoordinate < n;
             cosmicSourceTraversalCoordinate++) {

            long singularityMinimumCompositeCost = Long.MAX_VALUE;

            for (int cosmicMarketplaceNode = 0;
                 cosmicMarketplaceNode < n;
                 cosmicMarketplaceNode++) {

                if (
                    astrophysicalOutboundPropagationField[
                        cosmicSourceTraversalCoordinate
                    ][
                        cosmicMarketplaceNode
                    ] != Long.MAX_VALUE &&
                    relativisticReturnPropagationField[
                        cosmicSourceTraversalCoordinate
                    ][
                        cosmicMarketplaceNode
                    ] != Long.MAX_VALUE
                ) {
                    long quantumCompositeProjection =
                        astrophysicalOutboundPropagationField[
                            cosmicSourceTraversalCoordinate
                        ][
                            cosmicMarketplaceNode
                        ] +
                        relativisticReturnPropagationField[
                            cosmicSourceTraversalCoordinate
                        ][
                            cosmicMarketplaceNode
                        ] +
                        prices[cosmicMarketplaceNode];

                    singularityMinimumCompositeCost = Math.min(
                        singularityMinimumCompositeCost,
                        quantumCompositeProjection
                    );
                }
            }

            quantumCompositeCostResponseSpectrum[
                cosmicSourceTraversalCoordinate
            ] = (int) singularityMinimumCompositeCost;
        }

        return quantumCompositeCostResponseSpectrum;
    }
}