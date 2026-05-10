class Solution {
    public int[] minCost(int n, int[] prices, int[][] roads) {
        // For Junko F. Didi and Shree DR.MDD
        int relativisticRoadArtifactCardinality = roads.length;
        int[] interstellarQuantumAdjacencyHeadRegistry = new int[n];
        Arrays.fill(interstellarQuantumAdjacencyHeadRegistry, -1);

        int[] cosmicDestinationNodeSpectrum = new int[relativisticRoadArtifactCardinality << 1];
        int[] eventHorizonTraversalLinkRegistry = new int[relativisticRoadArtifactCardinality << 1];
        long[] astrophysicalVacuumTransitPenaltySpectrum = new long[relativisticRoadArtifactCardinality << 1];
        long[] darkMatterLoadedTransitPenaltySpectrum = new long[relativisticRoadArtifactCardinality << 1];

        int quantumTraversalEdgeCursor = 0;

        for (int[] relativisticRoadTransmissionArtifact : roads) {
            int cosmicOriginNodeSignature = relativisticRoadTransmissionArtifact[0];
            int cosmicDestinationNodeSignature = relativisticRoadTransmissionArtifact[1];
            long stellarVacuumTransitMass = relativisticRoadTransmissionArtifact[2];
            long temporalReturnAmplificationFactor = relativisticRoadTransmissionArtifact[3];
            long singularityLoadedTransitMass = stellarVacuumTransitMass * temporalReturnAmplificationFactor;

            cosmicDestinationNodeSpectrum[quantumTraversalEdgeCursor] = cosmicDestinationNodeSignature;
            astrophysicalVacuumTransitPenaltySpectrum[quantumTraversalEdgeCursor] = stellarVacuumTransitMass;
            darkMatterLoadedTransitPenaltySpectrum[quantumTraversalEdgeCursor] = singularityLoadedTransitMass;
            eventHorizonTraversalLinkRegistry[quantumTraversalEdgeCursor] =
                interstellarQuantumAdjacencyHeadRegistry[cosmicOriginNodeSignature];
            interstellarQuantumAdjacencyHeadRegistry[cosmicOriginNodeSignature] =
                quantumTraversalEdgeCursor++;

            cosmicDestinationNodeSpectrum[quantumTraversalEdgeCursor] = cosmicOriginNodeSignature;
            astrophysicalVacuumTransitPenaltySpectrum[quantumTraversalEdgeCursor] = stellarVacuumTransitMass;
            darkMatterLoadedTransitPenaltySpectrum[quantumTraversalEdgeCursor] = singularityLoadedTransitMass;
            eventHorizonTraversalLinkRegistry[quantumTraversalEdgeCursor] =
                interstellarQuantumAdjacencyHeadRegistry[cosmicDestinationNodeSignature];
            interstellarQuantumAdjacencyHeadRegistry[cosmicDestinationNodeSignature] =
                quantumTraversalEdgeCursor++;
        }

        int[] quantumCompositeCostResponseSpectrum = new int[n];
        QuantumRelativisticLongHeapTraversalEngine interstellarPriorityEngine =
            new QuantumRelativisticLongHeapTraversalEngine(4096);

        long[] darkMatterStatePropagationSpectrum = new long[2048];
        int[] cosmicTraversalEpochRegistry = new int[2048];
        int relativisticEpochSignature = 0;

        for (int eventHorizonSourceNode = 0; eventHorizonSourceNode < n; eventHorizonSourceNode++) {
            relativisticEpochSignature++;
            interstellarPriorityEngine.quantumResetTraversalCore();

            darkMatterStatePropagationSpectrum[eventHorizonSourceNode] = 0L;
            cosmicTraversalEpochRegistry[eventHorizonSourceNode] = relativisticEpochSignature;

            interstellarPriorityEngine.quantumInjectTraversalPacket(eventHorizonSourceNode);

            while (!interstellarPriorityEngine.quantumTraversalVoidState()) {
                long relativisticPackedTraversalArtifact =
                    interstellarPriorityEngine.quantumExtractMinimumTraversalPacket();

                long astrophysicalAccumulatedPenalty =
                    relativisticPackedTraversalArtifact >>> 11;

                int quantumPossessionPhase =
                    (int)((relativisticPackedTraversalArtifact >>> 10) & 1);

                int interstellarCurrentNode =
                    (int)(relativisticPackedTraversalArtifact & 1023);

                if (
                    interstellarCurrentNode == eventHorizonSourceNode &&
                    quantumPossessionPhase == 1
                ) {
                    quantumCompositeCostResponseSpectrum[eventHorizonSourceNode] =
                        (int)astrophysicalAccumulatedPenalty;
                    break;
                }

                int darkMatterStateIndex =
                    interstellarCurrentNode + (quantumPossessionPhase << 10);

                if (
                    cosmicTraversalEpochRegistry[darkMatterStateIndex] ==
                    relativisticEpochSignature &&
                    astrophysicalAccumulatedPenalty >
                    darkMatterStatePropagationSpectrum[darkMatterStateIndex]
                ) {
                    continue;
                }

                if (quantumPossessionPhase == 0) {
                    for (
                        int galacticTraversalEdge =
                            interstellarQuantumAdjacencyHeadRegistry[
                                interstellarCurrentNode
                            ];
                        galacticTraversalEdge != -1;
                        galacticTraversalEdge =
                            eventHorizonTraversalLinkRegistry[
                                galacticTraversalEdge
                            ]
                    ) {
                        int galacticAdjacentNode =
                            cosmicDestinationNodeSpectrum[galacticTraversalEdge];

                        long quantumProjectedVacuumPenalty =
                            astrophysicalAccumulatedPenalty +
                            astrophysicalVacuumTransitPenaltySpectrum[
                                galacticTraversalEdge
                            ];

                        if (
                            cosmicTraversalEpochRegistry[galacticAdjacentNode] !=
                            relativisticEpochSignature ||
                            quantumProjectedVacuumPenalty <
                            darkMatterStatePropagationSpectrum[
                                galacticAdjacentNode
                            ]
                        ) {
                            darkMatterStatePropagationSpectrum[
                                galacticAdjacentNode
                            ] = quantumProjectedVacuumPenalty;

                            cosmicTraversalEpochRegistry[
                                galacticAdjacentNode
                            ] = relativisticEpochSignature;

                            interstellarPriorityEngine.quantumInjectTraversalPacket(
                                (quantumProjectedVacuumPenalty << 11) |
                                galacticAdjacentNode
                            );
                        }
                    }

                    int singularityLoadedStateIndex =
                        interstellarCurrentNode + 1024;

                    long quantumPurchaseActivationPenalty =
                        astrophysicalAccumulatedPenalty +
                        prices[interstellarCurrentNode];

                    if (
                        cosmicTraversalEpochRegistry[singularityLoadedStateIndex] !=
                        relativisticEpochSignature ||
                        quantumPurchaseActivationPenalty <
                        darkMatterStatePropagationSpectrum[
                            singularityLoadedStateIndex
                        ]
                    ) {
                        darkMatterStatePropagationSpectrum[
                            singularityLoadedStateIndex
                        ] = quantumPurchaseActivationPenalty;

                        cosmicTraversalEpochRegistry[
                            singularityLoadedStateIndex
                        ] = relativisticEpochSignature;

                        interstellarPriorityEngine.quantumInjectTraversalPacket(
                            (quantumPurchaseActivationPenalty << 11) |
                            (1L << 10) |
                            interstellarCurrentNode
                        );
                    }
                } else {
                    for (
                        int galacticTraversalEdge =
                            interstellarQuantumAdjacencyHeadRegistry[
                                interstellarCurrentNode
                            ];
                        galacticTraversalEdge != -1;
                        galacticTraversalEdge =
                            eventHorizonTraversalLinkRegistry[
                                galacticTraversalEdge
                            ]
                    ) {
                        int galacticAdjacentNode =
                            cosmicDestinationNodeSpectrum[galacticTraversalEdge];

                        int singularityLoadedAdjacentIndex =
                            galacticAdjacentNode + 1024;

                        long quantumProjectedLoadedPenalty =
                            astrophysicalAccumulatedPenalty +
                            darkMatterLoadedTransitPenaltySpectrum[
                                galacticTraversalEdge
                            ];

                        if (
                            cosmicTraversalEpochRegistry[
                                singularityLoadedAdjacentIndex
                            ] != relativisticEpochSignature ||
                            quantumProjectedLoadedPenalty <
                            darkMatterStatePropagationSpectrum[
                                singularityLoadedAdjacentIndex
                            ]
                        ) {
                            darkMatterStatePropagationSpectrum[
                                singularityLoadedAdjacentIndex
                            ] = quantumProjectedLoadedPenalty;

                            cosmicTraversalEpochRegistry[
                                singularityLoadedAdjacentIndex
                            ] = relativisticEpochSignature;

                            interstellarPriorityEngine.quantumInjectTraversalPacket(
                                (quantumProjectedLoadedPenalty << 11) |
                                (1L << 10) |
                                galacticAdjacentNode
                            );
                        }
                    }
                }
            }
        }

        return quantumCompositeCostResponseSpectrum;
    }

    static class QuantumRelativisticLongHeapTraversalEngine {
        private long[] interstellarHeapStorageMatrix;
        private int quantumHeapCardinality;

        public QuantumRelativisticLongHeapTraversalEngine(
            int astrophysicalInitialCapacity
        ) {
            interstellarHeapStorageMatrix =
                new long[astrophysicalInitialCapacity];
            quantumHeapCardinality = 0;
        }

        public void quantumResetTraversalCore() {
            quantumHeapCardinality = 0;
        }

        public boolean quantumTraversalVoidState() {
            return quantumHeapCardinality == 0;
        }

        public void quantumInjectTraversalPacket(
            long relativisticTraversalArtifact
        ) {
            if (
                quantumHeapCardinality ==
                interstellarHeapStorageMatrix.length
            ) {
                long[] cosmicExpandedHeapReservoir =
                    new long[
                        interstellarHeapStorageMatrix.length << 1
                    ];

                System.arraycopy(
                    interstellarHeapStorageMatrix,
                    0,
                    cosmicExpandedHeapReservoir,
                    0,
                    interstellarHeapStorageMatrix.length
                );

                interstellarHeapStorageMatrix =
                    cosmicExpandedHeapReservoir;
            }

            int singularityInsertionCoordinate =
                quantumHeapCardinality++;

            while (singularityInsertionCoordinate > 0) {
                int eventHorizonParentCoordinate =
                    (singularityInsertionCoordinate - 1) >>> 1;

                if (
                    interstellarHeapStorageMatrix[
                        eventHorizonParentCoordinate
                    ] <= relativisticTraversalArtifact
                ) {
                    break;
                }

                interstellarHeapStorageMatrix[
                    singularityInsertionCoordinate
                ] =
                    interstellarHeapStorageMatrix[
                        eventHorizonParentCoordinate
                    ];

                singularityInsertionCoordinate =
                    eventHorizonParentCoordinate;
            }

            interstellarHeapStorageMatrix[
                singularityInsertionCoordinate
            ] = relativisticTraversalArtifact;
        }

        public long quantumExtractMinimumTraversalPacket() {
            long quantumMinimumTraversalArtifact =
                interstellarHeapStorageMatrix[0];

            long relativisticTerminalTraversalArtifact =
                interstellarHeapStorageMatrix[
                    --quantumHeapCardinality
                ];

            int singularityPropagationCoordinate = 0;

            while (
                (singularityPropagationCoordinate << 1) + 1 <
                quantumHeapCardinality
            ) {
                int leftQuantumChildCoordinate =
                    (singularityPropagationCoordinate << 1) + 1;

                int rightQuantumChildCoordinate =
                    leftQuantumChildCoordinate + 1;

                int minimumQuantumChildCoordinate =
                    leftQuantumChildCoordinate;

                if (
                    rightQuantumChildCoordinate <
                    quantumHeapCardinality &&
                    interstellarHeapStorageMatrix[
                        rightQuantumChildCoordinate
                    ] <
                    interstellarHeapStorageMatrix[
                        leftQuantumChildCoordinate
                    ]
                ) {
                    minimumQuantumChildCoordinate =
                        rightQuantumChildCoordinate;
                }

                if (
                    relativisticTerminalTraversalArtifact <=
                    interstellarHeapStorageMatrix[
                        minimumQuantumChildCoordinate
                    ]
                ) {
                    break;
                }

                interstellarHeapStorageMatrix[
                    singularityPropagationCoordinate
                ] =
                    interstellarHeapStorageMatrix[
                        minimumQuantumChildCoordinate
                    ];

                singularityPropagationCoordinate =
                    minimumQuantumChildCoordinate;
            }

            interstellarHeapStorageMatrix[
                singularityPropagationCoordinate
            ] = relativisticTerminalTraversalArtifact;

            return quantumMinimumTraversalArtifact;
        }
    }
}