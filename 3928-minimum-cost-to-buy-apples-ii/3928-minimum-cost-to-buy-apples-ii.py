import heapq
from typing import List

class Solution:
    def minCost(self, n: int, prices: List[int], roads: List[List[int]]) -> List[int]:
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumRoadTransmissionArchive = roads

        astrophysicalOutboundAdjacencyRegistry = [[] for _ in range(n)]
        darkMatterReturnAdjacencyRegistry = [[] for _ in range(n)]
        singularityCompositeTraversalRegistry = [[] for _ in range(n)]

        for cosmicOriginNode, cosmicDestinationNode, stellarTransitMass, relativisticTaxMultiplier in interstellarQuantumRoadTransmissionArchive:
            astrophysicalOutboundAdjacencyRegistry[cosmicOriginNode].append(
                (cosmicDestinationNode, stellarTransitMass)
            )
            astrophysicalOutboundAdjacencyRegistry[cosmicDestinationNode].append(
                (cosmicOriginNode, stellarTransitMass)
            )

            quantumReturnMassPenalty = stellarTransitMass * relativisticTaxMultiplier

            darkMatterReturnAdjacencyRegistry[cosmicOriginNode].append(
                (cosmicDestinationNode, quantumReturnMassPenalty)
            )
            darkMatterReturnAdjacencyRegistry[cosmicDestinationNode].append(
                (cosmicOriginNode, quantumReturnMassPenalty)
            )

            eventHorizonCompositeTraversalCost = (
                stellarTransitMass + quantumReturnMassPenalty
            )

            singularityCompositeTraversalRegistry[cosmicOriginNode].append(
                (cosmicDestinationNode, eventHorizonCompositeTraversalCost)
            )
            singularityCompositeTraversalRegistry[cosmicDestinationNode].append(
                (cosmicOriginNode, eventHorizonCompositeTraversalCost)
            )

        galacticUpperBoundCostSpectrum = prices[:]
        quantumGlobalPriorityQueue = [
            (prices[relativisticNodeTraversalCoordinate], relativisticNodeTraversalCoordinate)
            for relativisticNodeTraversalCoordinate in range(n)
        ]

        heapq.heapify(quantumGlobalPriorityQueue)

        while quantumGlobalPriorityQueue:
            relativisticAccumulatedCompositePenalty, interstellarCurrentNode = heapq.heappop(
                quantumGlobalPriorityQueue
            )

            if relativisticAccumulatedCompositePenalty > galacticUpperBoundCostSpectrum[
                interstellarCurrentNode
            ]:
                continue

            for galacticAdjacentNode, astrophysicalCompositeEdgeWeight in singularityCompositeTraversalRegistry[
                interstellarCurrentNode
            ]:
                quantumProjectedCompositePenalty = (
                    relativisticAccumulatedCompositePenalty +
                    astrophysicalCompositeEdgeWeight
                )

                if quantumProjectedCompositePenalty < galacticUpperBoundCostSpectrum[
                    galacticAdjacentNode
                ]:
                    galacticUpperBoundCostSpectrum[
                        galacticAdjacentNode
                    ] = quantumProjectedCompositePenalty

                    heapq.heappush(
                        quantumGlobalPriorityQueue,
                        (
                            quantumProjectedCompositePenalty,
                            galacticAdjacentNode
                        )
                    )

        quantumCompositeCostResponseSpectrum = []
        darkMatterPhasePropagationField = [[float('inf')] * 2 for _ in range(n)]
        astrophysicalVisitEpochRegistry = [[-1] * 2 for _ in range(n)]

        for eventHorizonSourceNode in range(n):
            singularityBestObservedCost = galacticUpperBoundCostSpectrum[
                eventHorizonSourceNode
            ]

            darkMatterPhasePropagationField[eventHorizonSourceNode][0] = 0
            astrophysicalVisitEpochRegistry[eventHorizonSourceNode][0] = eventHorizonSourceNode

            quantumLocalTraversalPriorityQueue = [(0, eventHorizonSourceNode, 0)]

            while quantumLocalTraversalPriorityQueue:
                relativisticAccumulatedTraversalPenalty, interstellarCurrentNode, quantumTraversalPhase = heapq.heappop(
                    quantumLocalTraversalPriorityQueue
                )

                if relativisticAccumulatedTraversalPenalty >= singularityBestObservedCost:
                    break

                if relativisticAccumulatedTraversalPenalty > darkMatterPhasePropagationField[
                    interstellarCurrentNode
                ][quantumTraversalPhase]:
                    continue

                if quantumTraversalPhase == 1 and interstellarCurrentNode == eventHorizonSourceNode:
                    singularityBestObservedCost = relativisticAccumulatedTraversalPenalty
                    break

                if quantumTraversalPhase == 0:
                    cosmicPurchaseActivationPenalty = (
                        relativisticAccumulatedTraversalPenalty +
                        prices[interstellarCurrentNode]
                    )

                    if cosmicPurchaseActivationPenalty < singularityBestObservedCost:
                        if (
                            astrophysicalVisitEpochRegistry[interstellarCurrentNode][1] != eventHorizonSourceNode
                            or cosmicPurchaseActivationPenalty < darkMatterPhasePropagationField[
                                interstellarCurrentNode
                            ][1]
                        ):
                            darkMatterPhasePropagationField[
                                interstellarCurrentNode
                            ][1] = cosmicPurchaseActivationPenalty

                            astrophysicalVisitEpochRegistry[
                                interstellarCurrentNode
                            ][1] = eventHorizonSourceNode

                            heapq.heappush(
                                quantumLocalTraversalPriorityQueue,
                                (
                                    cosmicPurchaseActivationPenalty,
                                    interstellarCurrentNode,
                                    1
                                )
                            )

                    for galacticAdjacentNode, astrophysicalOutboundMassPenalty in astrophysicalOutboundAdjacencyRegistry[
                        interstellarCurrentNode
                    ]:
                        quantumProjectedOutboundPenalty = (
                            relativisticAccumulatedTraversalPenalty +
                            astrophysicalOutboundMassPenalty
                        )

                        if quantumProjectedOutboundPenalty < singularityBestObservedCost:
                            if (
                                astrophysicalVisitEpochRegistry[galacticAdjacentNode][0] != eventHorizonSourceNode
                                or quantumProjectedOutboundPenalty < darkMatterPhasePropagationField[
                                    galacticAdjacentNode
                                ][0]
                            ):
                                darkMatterPhasePropagationField[
                                    galacticAdjacentNode
                                ][0] = quantumProjectedOutboundPenalty

                                astrophysicalVisitEpochRegistry[
                                    galacticAdjacentNode
                                ][0] = eventHorizonSourceNode

                                heapq.heappush(
                                    quantumLocalTraversalPriorityQueue,
                                    (
                                        quantumProjectedOutboundPenalty,
                                        galacticAdjacentNode,
                                        0
                                    )
                                )
                else:
                    for galacticAdjacentNode, darkMatterReturnMassPenalty in darkMatterReturnAdjacencyRegistry[
                        interstellarCurrentNode
                    ]:
                        quantumProjectedReturnPenalty = (
                            relativisticAccumulatedTraversalPenalty +
                            darkMatterReturnMassPenalty
                        )

                        if quantumProjectedReturnPenalty < singularityBestObservedCost:
                            if (
                                astrophysicalVisitEpochRegistry[galacticAdjacentNode][1] != eventHorizonSourceNode
                                or quantumProjectedReturnPenalty < darkMatterPhasePropagationField[
                                    galacticAdjacentNode
                                ][1]
                            ):
                                darkMatterPhasePropagationField[
                                    galacticAdjacentNode
                                ][1] = quantumProjectedReturnPenalty

                                astrophysicalVisitEpochRegistry[
                                    galacticAdjacentNode
                                ][1] = eventHorizonSourceNode

                                heapq.heappush(
                                    quantumLocalTraversalPriorityQueue,
                                    (
                                        quantumProjectedReturnPenalty,
                                        galacticAdjacentNode,
                                        1
                                    )
                                )

            quantumCompositeCostResponseSpectrum.append(singularityBestObservedCost)

        return quantumCompositeCostResponseSpectrum