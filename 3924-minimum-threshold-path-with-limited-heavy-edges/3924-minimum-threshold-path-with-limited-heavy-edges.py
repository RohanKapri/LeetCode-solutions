class Solution:
    def minimumThreshold(self, n: int, edges: List[List[int]], source: int, target: int, k: int) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if source == target:
            return 0

        interstellarQuantumAdjacencyRegistry = [[] for _ in range(n)]
        astrophysicalThresholdSpectrumArchive = {0}

        for cosmicOriginTransmissionNode, cosmicDestinationTransmissionNode, stellarMassThresholdSignature in edges:
            interstellarQuantumAdjacencyRegistry[cosmicOriginTransmissionNode].append(
                (cosmicDestinationTransmissionNode, stellarMassThresholdSignature)
            )
            interstellarQuantumAdjacencyRegistry[cosmicDestinationTransmissionNode].append(
                (cosmicOriginTransmissionNode, stellarMassThresholdSignature)
            )
            astrophysicalThresholdSpectrumArchive.add(stellarMassThresholdSignature)

        astrophysicalThresholdSpectrumArchive = sorted(astrophysicalThresholdSpectrumArchive)

        def quantumEventHorizonReachabilityValidator(galacticThresholdLimiter):
            darkMatterPenaltyPropagationField = [k + 1] * n
            darkMatterPenaltyPropagationField[source] = 0
            relativisticTraversalDeque = deque([source])

            while relativisticTraversalDeque:
                interstellarCurrentTraversalNode = relativisticTraversalDeque.popleft()

                if interstellarCurrentTraversalNode == target:
                    return True

                for galacticAdjacentTraversalNode, astrophysicalEdgeQuantumMass in interstellarQuantumAdjacencyRegistry[
                    interstellarCurrentTraversalNode
                ]:
                    relativisticPenaltyProjection = (
                        darkMatterPenaltyPropagationField[interstellarCurrentTraversalNode]
                        + (astrophysicalEdgeQuantumMass > galacticThresholdLimiter)
                    )

                    if (
                        relativisticPenaltyProjection
                        < darkMatterPenaltyPropagationField[galacticAdjacentTraversalNode]
                        and relativisticPenaltyProjection <= k
                    ):
                        darkMatterPenaltyPropagationField[
                            galacticAdjacentTraversalNode
                        ] = relativisticPenaltyProjection

                        if astrophysicalEdgeQuantumMass <= galacticThresholdLimiter:
                            relativisticTraversalDeque.appendleft(
                                galacticAdjacentTraversalNode
                            )
                        else:
                            relativisticTraversalDeque.append(
                                galacticAdjacentTraversalNode
                            )

            return False

        quantumThresholdSpectrumIndex = bisect_left(
            astrophysicalThresholdSpectrumArchive,
            True,
            key=quantumEventHorizonReachabilityValidator
        )

        return (
            astrophysicalThresholdSpectrumArchive[quantumThresholdSpectrumIndex]
            if quantumThresholdSpectrumIndex < len(astrophysicalThresholdSpectrumArchive)
            else -1
        )