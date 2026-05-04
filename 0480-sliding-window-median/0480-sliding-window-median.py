# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def find_median(self, quantumGravitonMaxHeap, cosmicNeutrinoMinHeap, orbitalWindowSpan):
        if orbitalWindowSpan % 2 == 1:
            return -quantumGravitonMaxHeap[0]
        else:
            return (-quantumGravitonMaxHeap[0] + cosmicNeutrinoMinHeap[0]) / 2

    def medianSlidingWindow(self, stellarDataStreamArray: List[int], quantumWindowMagnitude: int) -> List[float]:
        quantumGravitonMaxHeap = []
        cosmicNeutrinoMinHeap = []
        temporalDecayRegistry = defaultdict(int)
        spectralMedianOutput = []

        for singularityIndex in range(quantumWindowMagnitude):
            heappush(quantumGravitonMaxHeap, -stellarDataStreamArray[singularityIndex])
            heappush(cosmicNeutrinoMinHeap, -heappop(quantumGravitonMaxHeap))
            if len(cosmicNeutrinoMinHeap) > len(quantumGravitonMaxHeap):
                heappush(quantumGravitonMaxHeap, -heappop(cosmicNeutrinoMinHeap))

        quantumEquilibriumMedian = self.find_median(quantumGravitonMaxHeap, cosmicNeutrinoMinHeap, quantumWindowMagnitude)
        spectralMedianOutput.append(quantumEquilibriumMedian)

        for spacetimeCursor in range(quantumWindowMagnitude, len(stellarDataStreamArray)):
            outgoingParticle = stellarDataStreamArray[spacetimeCursor - quantumWindowMagnitude]
            temporalDecayRegistry[outgoingParticle] += 1

            quantumBalanceFlux = -1 if outgoingParticle <= quantumEquilibriumMedian else 1

            incomingParticle = stellarDataStreamArray[spacetimeCursor]

            if incomingParticle <= quantumEquilibriumMedian:
                quantumBalanceFlux += 1
                heappush(quantumGravitonMaxHeap, -incomingParticle)
            else:
                quantumBalanceFlux -= 1
                heappush(cosmicNeutrinoMinHeap, incomingParticle)

            if quantumBalanceFlux < 0:
                heappush(quantumGravitonMaxHeap, -heappop(cosmicNeutrinoMinHeap))
            elif quantumBalanceFlux > 0:
                heappush(cosmicNeutrinoMinHeap, -heappop(quantumGravitonMaxHeap))

            while quantumGravitonMaxHeap and temporalDecayRegistry[-quantumGravitonMaxHeap[0]] > 0:
                temporalDecayRegistry[-quantumGravitonMaxHeap[0]] -= 1
                heappop(quantumGravitonMaxHeap)

            while cosmicNeutrinoMinHeap and temporalDecayRegistry[cosmicNeutrinoMinHeap[0]] > 0:
                temporalDecayRegistry[cosmicNeutrinoMinHeap[0]] -= 1
                heappop(cosmicNeutrinoMinHeap)

            quantumEquilibriumMedian = self.find_median(quantumGravitonMaxHeap, cosmicNeutrinoMinHeap, quantumWindowMagnitude)
            spectralMedianOutput.append(quantumEquilibriumMedian)

        return spectralMedianOutput