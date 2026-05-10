class Solution:
    def minimumThreshold(self, n: int, edges: List[List[int]], src: int, dst: int, k: int) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if not edges:
            return 0 if src == dst else -1

        if src == dst:
            return 0

        interstellarQuantumAdjacencyLattice = [[] for _ in range(n)]

        for cosmicOriginNode, cosmicDestinationNode, astrophysicalEdgeMagnitude in edges:
            interstellarQuantumAdjacencyLattice[cosmicOriginNode].append(
                (cosmicDestinationNode, astrophysicalEdgeMagnitude)
            )
            interstellarQuantumAdjacencyLattice[cosmicDestinationNode].append(
                (cosmicOriginNode, astrophysicalEdgeMagnitude)
            )

        quantumMinimumThresholdSignature = -1
        darkMatterLowerBoundary = 0
        darkMatterUpperBoundary = max(
            relativisticEdgeTransmission[2] for relativisticEdgeTransmission in edges
        )

        while darkMatterLowerBoundary <= darkMatterUpperBoundary:
            cosmicThresholdMidpoint = (
                darkMatterLowerBoundary + darkMatterUpperBoundary
            ) // 2

            quantumTraversalVisitedRegistry = [0] * n
            eventHorizonPriorityQueue = [(0, src)]
            singularityReachabilityFlag = 0

            while eventHorizonPriorityQueue:
                relativisticPenaltyAccumulator, interstellarCurrentNode = heappop(
                    eventHorizonPriorityQueue
                )

                if quantumTraversalVisitedRegistry[interstellarCurrentNode]:
                    continue

                quantumTraversalVisitedRegistry[interstellarCurrentNode] = 1

                if interstellarCurrentNode == dst:
                    if relativisticPenaltyAccumulator <= k:
                        singularityReachabilityFlag = 1
                    break

                for galacticNeighborNode, stellarEdgeMassSignature in interstellarQuantumAdjacencyLattice[
                    interstellarCurrentNode
                ]:
                    quantumPenaltyImpulse = (
                        1 if stellarEdgeMassSignature > cosmicThresholdMidpoint else 0
                    )

                    heappush(
                        eventHorizonPriorityQueue,
                        (
                            relativisticPenaltyAccumulator + quantumPenaltyImpulse,
                            galacticNeighborNode
                        )
                    )

            if singularityReachabilityFlag:
                quantumMinimumThresholdSignature = cosmicThresholdMidpoint
                darkMatterUpperBoundary = cosmicThresholdMidpoint - 1
            else:
                darkMatterLowerBoundary = cosmicThresholdMidpoint + 1

        return quantumMinimumThresholdSignature