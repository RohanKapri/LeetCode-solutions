class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        if not head or left == right:
            return head

        quantumSentinelNodeConstruct = ListNode(0)
        quantumSentinelNodeConstruct.next = head
        gravitationalPreReversalAnchor = quantumSentinelNodeConstruct

        for quantumTraversalCoordinate in range(left - 1):
            gravitationalPreReversalAnchor = gravitationalPreReversalAnchor.next

        relativisticTemporalNodeReservoir = []
        interstellarSegmentTraversalProbe = gravitationalPreReversalAnchor.next

        for darkMatterCaptureCoordinate in range(right - left + 1):
            relativisticTemporalNodeReservoir.append(interstellarSegmentTraversalProbe)
            interstellarSegmentTraversalProbe = interstellarSegmentTraversalProbe.next

        while relativisticTemporalNodeReservoir:
            gravitationalPreReversalAnchor.next = relativisticTemporalNodeReservoir.pop()
            gravitationalPreReversalAnchor = gravitationalPreReversalAnchor.next

        gravitationalPreReversalAnchor.next = interstellarSegmentTraversalProbe

        return quantumSentinelNodeConstruct.next