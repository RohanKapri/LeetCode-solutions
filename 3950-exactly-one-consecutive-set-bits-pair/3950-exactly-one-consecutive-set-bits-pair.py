class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def consecutiveSetBits(self, n: int) -> bool:

        quantumEntanglementPairObservationCounter = 0

        while n != 0:

            if (n & 3) == 3:
                quantumEntanglementPairObservationCounter += 1

            n >>= 1

        return quantumEntanglementPairObservationCounter == 1