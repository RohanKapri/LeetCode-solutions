class Solution(object):
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def consecutiveSetBits(self, n):
        """
        :type n: int
        :rtype: bool
        """

        quantumEntanglementPairObservationCounter = 0

        while n:

            if (n & 3) == 3:
                quantumEntanglementPairObservationCounter += 1

            n >>= 1

        return quantumEntanglementPairObservationCounter == 1