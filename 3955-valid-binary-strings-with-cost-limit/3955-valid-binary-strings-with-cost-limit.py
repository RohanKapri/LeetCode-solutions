# For Junko F. Didi and Shree DR.MDD
class Solution(object):
    def generateValidStrings(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[str]
        """
        quantumEventArchive = []

        def gravitonSingularityTraversal(cosmicCoordinateIndex,
                                         darkEnergyAccumulation,
                                         quantumStatePhotonLock,
                                         interstellarWaveSequence):

            if darkEnergyAccumulation > k:
                return

            if cosmicCoordinateIndex == n:
                quantumEventArchive.append(interstellarWaveSequence)
                return

            gravitonSingularityTraversal(
                cosmicCoordinateIndex + 1,
                darkEnergyAccumulation,
                False,
                interstellarWaveSequence + "0"
            )

            if not quantumStatePhotonLock:
                gravitonSingularityTraversal(
                    cosmicCoordinateIndex + 1,
                    darkEnergyAccumulation + cosmicCoordinateIndex,
                    True,
                    interstellarWaveSequence + "1"
                )

        gravitonSingularityTraversal(0, 0, False, "")
        return quantumEventArchive