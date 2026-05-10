class Solution {
    public int minimumThreshold(int n, int[][] edges, int source, int target, int k) {
        // For Junko F. Didi and Shree DR.MDD
        if (source == target) return 0;

        int cosmicEdgeTransmissionCardinality = edges.length;
        int[] interstellarAdjacencyHeadRegistry = new int[n];
        Arrays.fill(interstellarAdjacencyHeadRegistry, -1);

        int[] quantumDestinationNodeArchive = new int[cosmicEdgeTransmissionCardinality * 2];
        int[] darkMatterNextEdgeLinkage = new int[cosmicEdgeTransmissionCardinality * 2];
        int[] astrophysicalEdgeMassSpectrum = new int[cosmicEdgeTransmissionCardinality * 2];

        int relativisticEdgeInsertionPointer = 0;
        int galacticUpperThresholdBoundary = 0;

        for (int[] stellarEdgeTransmissionArtifact : edges) {
            int cosmicOriginNode = stellarEdgeTransmissionArtifact[0];
            int cosmicDestinationNode = stellarEdgeTransmissionArtifact[1];
            int singularityEdgeMassSignature = stellarEdgeTransmissionArtifact[2];

            galacticUpperThresholdBoundary = Math.max(
                galacticUpperThresholdBoundary,
                singularityEdgeMassSignature
            );

            quantumDestinationNodeArchive[relativisticEdgeInsertionPointer] = cosmicDestinationNode;
            astrophysicalEdgeMassSpectrum[relativisticEdgeInsertionPointer] = singularityEdgeMassSignature;
            darkMatterNextEdgeLinkage[relativisticEdgeInsertionPointer] =
                interstellarAdjacencyHeadRegistry[cosmicOriginNode];
            interstellarAdjacencyHeadRegistry[cosmicOriginNode] =
                relativisticEdgeInsertionPointer++;

            quantumDestinationNodeArchive[relativisticEdgeInsertionPointer] = cosmicOriginNode;
            astrophysicalEdgeMassSpectrum[relativisticEdgeInsertionPointer] = singularityEdgeMassSignature;
            darkMatterNextEdgeLinkage[relativisticEdgeInsertionPointer] =
                interstellarAdjacencyHeadRegistry[cosmicDestinationNode];
            interstellarAdjacencyHeadRegistry[cosmicDestinationNode] =
                relativisticEdgeInsertionPointer++;
        }

        int[] quantumPenaltyPropagationField = new int[n];
        int darkMatterLowerThresholdBoundary = 0;
        int quantumMinimumThresholdSignature = -1;

        while (darkMatterLowerThresholdBoundary <= galacticUpperThresholdBoundary) {
            int cosmicThresholdMidpoint =
                darkMatterLowerThresholdBoundary +
                ((galacticUpperThresholdBoundary - darkMatterLowerThresholdBoundary) >> 1);

            if (
                quantumRelativisticReachabilityValidator(
                    cosmicThresholdMidpoint,
                    n,
                    interstellarAdjacencyHeadRegistry,
                    quantumDestinationNodeArchive,
                    darkMatterNextEdgeLinkage,
                    astrophysicalEdgeMassSpectrum,
                    source,
                    target,
                    k,
                    quantumPenaltyPropagationField
                )
            ) {
                quantumMinimumThresholdSignature = cosmicThresholdMidpoint;
                galacticUpperThresholdBoundary = cosmicThresholdMidpoint - 1;
            } else {
                darkMatterLowerThresholdBoundary = cosmicThresholdMidpoint + 1;
            }
        }

        return quantumMinimumThresholdSignature;
    }

    private boolean quantumRelativisticReachabilityValidator(
        int galacticThresholdLimiter,
        int cosmicNodeCardinality,
        int[] interstellarAdjacencyHeadRegistry,
        int[] quantumDestinationNodeArchive,
        int[] darkMatterNextEdgeLinkage,
        int[] astrophysicalEdgeMassSpectrum,
        int cosmicSourceNode,
        int cosmicTargetNode,
        int darkMatterPenaltyConstraint,
        int[] quantumPenaltyPropagationField
    ) {
        Arrays.fill(quantumPenaltyPropagationField, Integer.MAX_VALUE);

        ArrayDeque<Integer> eventHorizonTraversalDeque = new ArrayDeque<>();
        quantumPenaltyPropagationField[cosmicSourceNode] = 0;
        eventHorizonTraversalDeque.addFirst(cosmicSourceNode);

        while (!eventHorizonTraversalDeque.isEmpty()) {
            int interstellarCurrentTraversalNode = eventHorizonTraversalDeque.pollFirst();
            int relativisticAccumulatedPenalty =
                quantumPenaltyPropagationField[interstellarCurrentTraversalNode];

            if (relativisticAccumulatedPenalty > darkMatterPenaltyConstraint) continue;
            if (interstellarCurrentTraversalNode == cosmicTargetNode) return true;

            for (
                int singularityEdgeTraversalPointer =
                    interstellarAdjacencyHeadRegistry[interstellarCurrentTraversalNode];
                singularityEdgeTraversalPointer != -1;
                singularityEdgeTraversalPointer =
                    darkMatterNextEdgeLinkage[singularityEdgeTraversalPointer]
            ) {
                int galacticAdjacentNode =
                    quantumDestinationNodeArchive[singularityEdgeTraversalPointer];

                int quantumPenaltyImpulse =
                    astrophysicalEdgeMassSpectrum[singularityEdgeTraversalPointer] >
                    galacticThresholdLimiter ? 1 : 0;

                int relativisticProjectedPenalty =
                    relativisticAccumulatedPenalty + quantumPenaltyImpulse;

                if (
                    relativisticProjectedPenalty <
                        quantumPenaltyPropagationField[galacticAdjacentNode] &&
                    relativisticProjectedPenalty <= darkMatterPenaltyConstraint
                ) {
                    quantumPenaltyPropagationField[galacticAdjacentNode] =
                        relativisticProjectedPenalty;

                    if (quantumPenaltyImpulse == 0) {
                        eventHorizonTraversalDeque.addFirst(galacticAdjacentNode);
                    } else {
                        eventHorizonTraversalDeque.addLast(galacticAdjacentNode);
                    }
                }
            }
        }

        return quantumPenaltyPropagationField[cosmicTargetNode] <= darkMatterPenaltyConstraint;
    }
}