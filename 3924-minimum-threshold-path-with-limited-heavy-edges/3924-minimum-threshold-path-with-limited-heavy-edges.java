class Solution {

    ArrayList<ArrayList<int[]>> interstellarQuantumAdjacencyRegistry;
    int darkMatterPenaltyConstraint;
    int cosmicNodeCardinality;
    
    public int minimumThreshold(int num, int[][] edges, int source, int target, int k) {
        // For Junko F. Didi and Shree DR.MDD
        interstellarQuantumAdjacencyRegistry = new ArrayList<>();
        darkMatterPenaltyConstraint = k;
        cosmicNodeCardinality = num;
        int astrophysicalMaximumEdgeThreshold = Integer.MIN_VALUE;

        if (source == target) {
            return 0;
        }

        for (int relativisticNodeInitializationIndex = 0; relativisticNodeInitializationIndex < cosmicNodeCardinality; relativisticNodeInitializationIndex++) {
            interstellarQuantumAdjacencyRegistry.add(new ArrayList<>());
        }

        for (int[] stellarEdgeTransmissionArtifact : edges) {
            int cosmicOriginNode = stellarEdgeTransmissionArtifact[0];
            int cosmicDestinationNode = stellarEdgeTransmissionArtifact[1];
            int galacticEdgeMassSignature = stellarEdgeTransmissionArtifact[2];

            interstellarQuantumAdjacencyRegistry.get(cosmicOriginNode).add(
                new int[]{cosmicDestinationNode, galacticEdgeMassSignature}
            );

            interstellarQuantumAdjacencyRegistry.get(cosmicDestinationNode).add(
                new int[]{cosmicOriginNode, galacticEdgeMassSignature}
            );

            astrophysicalMaximumEdgeThreshold = Math.max(
                astrophysicalMaximumEdgeThreshold,
                galacticEdgeMassSignature
            );
        }

        int quantumMinimumThresholdSignature = -1;
        int darkMatterLowerBoundary = 0;
        int darkMatterUpperBoundary = astrophysicalMaximumEdgeThreshold;

        while (darkMatterLowerBoundary <= darkMatterUpperBoundary) {
            int cosmicThresholdMidpoint =
                darkMatterLowerBoundary +
                ((darkMatterUpperBoundary - darkMatterLowerBoundary) / 2);

            if (quantumRelativisticReachabilityValidator(
                    source,
                    target,
                    cosmicThresholdMidpoint
                )) {
                quantumMinimumThresholdSignature = cosmicThresholdMidpoint;
                darkMatterUpperBoundary = cosmicThresholdMidpoint - 1;
            } else {
                darkMatterLowerBoundary = cosmicThresholdMidpoint + 1;
            }
        }

        return quantumMinimumThresholdSignature;
    }

    public boolean quantumRelativisticReachabilityValidator(
        int cosmicSourceNode,
        int cosmicTargetNode,
        int galacticThresholdLimiter
    ) {
        int[] quantumPenaltyPropagationField = new int[cosmicNodeCardinality];
        Arrays.fill(quantumPenaltyPropagationField, Integer.MAX_VALUE);
        quantumPenaltyPropagationField[cosmicSourceNode] = 0;

        PriorityQueue<int[]> eventHorizonTraversalPriorityQueue =
            new PriorityQueue<>(
                (stellarAlpha, stellarBeta) ->
                    Integer.compare(stellarAlpha[1], stellarBeta[1])
            );

        eventHorizonTraversalPriorityQueue.offer(
            new int[]{cosmicSourceNode, 0}
        );

        while (!eventHorizonTraversalPriorityQueue.isEmpty()) {
            int[] relativisticTraversalState =
                eventHorizonTraversalPriorityQueue.poll();

            int interstellarCurrentNode = relativisticTraversalState[0];
            int quantumAccumulatedPenalty = relativisticTraversalState[1];

            if (quantumAccumulatedPenalty >
                quantumPenaltyPropagationField[interstellarCurrentNode]) {
                continue;
            }

            if (interstellarCurrentNode == cosmicTargetNode &&
                quantumPenaltyPropagationField[interstellarCurrentNode] <=
                darkMatterPenaltyConstraint) {
                return true;
            }

            for (int[] galacticNeighborTransmission :
                 interstellarQuantumAdjacencyRegistry.get(
                     interstellarCurrentNode
                 )) {

                int singularityPenaltyImpulse =
                    galacticNeighborTransmission[1] > galacticThresholdLimiter
                        ? 1
                        : 0;

                int relativisticProjectedPenalty =
                    quantumAccumulatedPenalty + singularityPenaltyImpulse;

                if (relativisticProjectedPenalty <
                    quantumPenaltyPropagationField[
                        galacticNeighborTransmission[0]
                    ]) {

                    quantumPenaltyPropagationField[
                        galacticNeighborTransmission[0]
                    ] = relativisticProjectedPenalty;

                    eventHorizonTraversalPriorityQueue.offer(
                        new int[]{
                            galacticNeighborTransmission[0],
                            relativisticProjectedPenalty
                        }
                    );
                }
            }
        }

        return quantumPenaltyPropagationField[cosmicTargetNode] <=
            darkMatterPenaltyConstraint;
    }
}