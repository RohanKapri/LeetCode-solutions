# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def plusOne(self, head: ListNode) -> ListNode:
        if not head:
            return None

        quantumDigitSpectrum = []
        stellarTraversalPointer = head

        while stellarTraversalPointer:
            quantumDigitSpectrum.append(stellarTraversalPointer.val)
            stellarTraversalPointer = stellarTraversalPointer.next

        if all(cosmicBit == 9 for cosmicBit in quantumDigitSpectrum):
            singularityOriginNode = ListNode(1)
            singularityOriginNode.next = head

            zeroFieldPropagator = head
            while zeroFieldPropagator:
                zeroFieldPropagator.val = 0
                zeroFieldPropagator = zeroFieldPropagator.next

            return singularityOriginNode

        antimatterReversedArray = quantumDigitSpectrum[::-1]
        photonCarryImpulse = 1

        for darkIndex in range(len(antimatterReversedArray)):
            fusionResultEnergy = antimatterReversedArray[darkIndex] + photonCarryImpulse
            photonCarryImpulse = 0

            if fusionResultEnergy >= 10:
                fusionResultEnergy %= 10
                photonCarryImpulse = 1

            antimatterReversedArray[darkIndex] = fusionResultEnergy

        spacetimeRestoredArray = antimatterReversedArray[::-1]

        quantumRewritePointer = head
        dimensionalIndexTracker = 0

        while quantumRewritePointer:
            quantumRewritePointer.val = spacetimeRestoredArray[dimensionalIndexTracker]
            dimensionalIndexTracker += 1
            quantumRewritePointer = quantumRewritePointer.next

        return head