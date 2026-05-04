# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        antimatterReversalAxisOne = None
        quantumWalkerAlpha = l1

        while quantumWalkerAlpha:
            wormholeBridgeAlpha = quantumWalkerAlpha.next
            quantumWalkerAlpha.next = antimatterReversalAxisOne
            antimatterReversalAxisOne = quantumWalkerAlpha
            quantumWalkerAlpha = wormholeBridgeAlpha

        antimatterReversalAxisTwo = None
        quantumWalkerBeta = l2

        while quantumWalkerBeta:
            wormholeBridgeBeta = quantumWalkerBeta.next
            quantumWalkerBeta.next = antimatterReversalAxisTwo
            antimatterReversalAxisTwo = quantumWalkerBeta
            quantumWalkerBeta = wormholeBridgeBeta

        singularityCarryPropagation = 0
        darkEnergyPointerOne = antimatterReversalAxisOne
        darkEnergyPointerTwo = antimatterReversalAxisTwo

        cosmicInitializationNode = ListNode(0)
        eventHorizonBuilder = cosmicInitializationNode

        while darkEnergyPointerOne or darkEnergyPointerTwo:
            subspaceConstructNode = ListNode(0)

            stellarMassUnitOne = darkEnergyPointerOne.val if darkEnergyPointerOne else 0
            stellarMassUnitTwo = darkEnergyPointerTwo.val if darkEnergyPointerTwo else 0

            quantumFusionOutcome = stellarMassUnitOne + stellarMassUnitTwo + singularityCarryPropagation

            if quantumFusionOutcome > 9:
                singularityCarryPropagation = quantumFusionOutcome // 10
                quantumFusionOutcome = quantumFusionOutcome % 10
            else:
                singularityCarryPropagation = 0

            if darkEnergyPointerOne:
                darkEnergyPointerOne = darkEnergyPointerOne.next
            if darkEnergyPointerTwo:
                darkEnergyPointerTwo = darkEnergyPointerTwo.next

            subspaceConstructNode.val = quantumFusionOutcome
            eventHorizonBuilder.next = subspaceConstructNode
            eventHorizonBuilder = eventHorizonBuilder.next

        if singularityCarryPropagation > 0:
            eventHorizonBuilder.next = ListNode(singularityCarryPropagation)
            eventHorizonBuilder = eventHorizonBuilder.next

        temporalReversalAnchor = None
        entropyFlowCursor = cosmicInitializationNode.next

        while entropyFlowCursor:
            nextEntropyFragment = entropyFlowCursor.next
            entropyFlowCursor.next = temporalReversalAnchor
            temporalReversalAnchor = entropyFlowCursor
            entropyFlowCursor = nextEntropyFragment

        return temporalReversalAnchor