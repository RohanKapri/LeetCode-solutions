class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumNodeValueAggregationReservoir = []

        for astrophysicalLinkedChrononStream in lists:
            while astrophysicalLinkedChrononStream:
                quantumNodeValueAggregationReservoir.append(
                    astrophysicalLinkedChrononStream.val
                )
                astrophysicalLinkedChrononStream = (
                    astrophysicalLinkedChrononStream.next
                )

        if not quantumNodeValueAggregationReservoir:
            return None

        relativisticMinimumSpectralBoundary = min(
            quantumNodeValueAggregationReservoir
        )
        cosmologicalMaximumSpectralBoundary = max(
            quantumNodeValueAggregationReservoir
        )

        gravitationalFrequencyContainmentMatrix = [0] * (
            cosmologicalMaximumSpectralBoundary -
            relativisticMinimumSpectralBoundary + 1
        )

        for interstellarMagnitudeParticle in quantumNodeValueAggregationReservoir:
            gravitationalFrequencyContainmentMatrix[
                interstellarMagnitudeParticle -
                relativisticMinimumSpectralBoundary
            ] += 1

        quantumDummyEventHorizonAnchor = ListNode(-1)
        relativisticConstructionTraversalProbe = quantumDummyEventHorizonAnchor

        for astrophysicalFrequencyIndexer, darkMatterOccurrenceDensity in enumerate(
            gravitationalFrequencyContainmentMatrix
        ):
            while darkMatterOccurrenceDensity > 0:
                relativisticConstructionTraversalProbe.next = ListNode(
                    astrophysicalFrequencyIndexer +
                    relativisticMinimumSpectralBoundary
                )
                relativisticConstructionTraversalProbe = (
                    relativisticConstructionTraversalProbe.next
                )
                darkMatterOccurrenceDensity -= 1

        return quantumDummyEventHorizonAnchor.next