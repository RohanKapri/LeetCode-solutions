class Solution:
    def minCost(self, n: int, prices: List[int], roads: List[List[int]]) -> List[int]:
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumAdjacencyRegistry = defaultdict(list)

        for cosmicOriginNode, cosmicDestinationNode, stellarTransitMass, relativisticReturnMultiplier in roads:
            astrophysicalReturnTraversalPenalty = stellarTransitMass * relativisticReturnMultiplier
            interstellarQuantumAdjacencyRegistry[cosmicOriginNode].append(
                (
                    cosmicDestinationNode,
                    stellarTransitMass,
                    astrophysicalReturnTraversalPenalty
                )
            )
            interstellarQuantumAdjacencyRegistry[cosmicDestinationNode].append(
                (
                    cosmicOriginNode,
                    stellarTransitMass,
                    astrophysicalReturnTraversalPenalty
                )
            )

        def quantumDualDijkstraCostSynthesizer(eventHorizonSourceNode):
            darkMatterOutboundPropagationField = [float('inf')] * n
            darkMatterReturnPropagationField = [float('inf')] * n

            darkMatterOutboundPropagationField[eventHorizonSourceNode] = 0
            darkMatterReturnPropagationField[eventHorizonSourceNode] = 0

            quantumOutboundTraversalPriorityQueue = [(0, eventHorizonSourceNode)]

            while quantumOutboundTraversalPriorityQueue:
                relativisticAccumulatedOutboundPenalty, interstellarCurrentNode = heappop(
                    quantumOutboundTraversalPriorityQueue
                )

                if relativisticAccumulatedOutboundPenalty > darkMatterOutboundPropagationField[
                    interstellarCurrentNode
                ]:
                    continue

                for galacticAdjacentNode, astrophysicalEdgeWeight, _ in interstellarQuantumAdjacencyRegistry[
                    interstellarCurrentNode
                ]:
                    quantumProjectedOutboundPenalty = (
                        relativisticAccumulatedOutboundPenalty + astrophysicalEdgeWeight
                    )

                    if quantumProjectedOutboundPenalty < darkMatterOutboundPropagationField[
                        galacticAdjacentNode
                    ]:
                        darkMatterOutboundPropagationField[
                            galacticAdjacentNode
                        ] = quantumProjectedOutboundPenalty

                        heappush(
                            quantumOutboundTraversalPriorityQueue,
                            (
                                quantumProjectedOutboundPenalty,
                                galacticAdjacentNode
                            )
                        )

            quantumReturnTraversalPriorityQueue = [(0, eventHorizonSourceNode)]

            while quantumReturnTraversalPriorityQueue:
                relativisticAccumulatedReturnPenalty, interstellarCurrentNode = heappop(
                    quantumReturnTraversalPriorityQueue
                )

                if relativisticAccumulatedReturnPenalty > darkMatterReturnPropagationField[
                    interstellarCurrentNode
                ]:
                    continue

                for galacticAdjacentNode, _, astrophysicalReturnWeight in interstellarQuantumAdjacencyRegistry[
                    interstellarCurrentNode
                ]:
                    quantumProjectedReturnPenalty = (
                        relativisticAccumulatedReturnPenalty + astrophysicalReturnWeight
                    )

                    if quantumProjectedReturnPenalty < darkMatterReturnPropagationField[
                        galacticAdjacentNode
                    ]:
                        darkMatterReturnPropagationField[
                            galacticAdjacentNode
                        ] = quantumProjectedReturnPenalty

                        heappush(
                            quantumReturnTraversalPriorityQueue,
                            (
                                quantumProjectedReturnPenalty,
                                galacticAdjacentNode
                            )
                        )

            singularityMinimumCompositeCost = float('inf')

            for cosmicMarketplaceNode in range(n):
                singularityMinimumCompositeCost = min(
                    singularityMinimumCompositeCost,
                    prices[cosmicMarketplaceNode] +
                    darkMatterOutboundPropagationField[cosmicMarketplaceNode] +
                    darkMatterReturnPropagationField[cosmicMarketplaceNode]
                )

            return singularityMinimumCompositeCost

        quantumCompositeCostResponseSpectrum = []

        for relativisticSourceTraversalCoordinate in range(n):
            quantumCompositeCostResponseSpectrum.append(
                quantumDualDijkstraCostSynthesizer(
                    relativisticSourceTraversalCoordinate
                )
            )

        return quantumCompositeCostResponseSpectrum