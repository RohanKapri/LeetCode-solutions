class Solution(object):
    def minEnergy(self, n, brightness, intervals):
        """
        :type n: int
        :type brightness: int
        :type intervals: List[List[int]]
        :rtype: int
        """

        intervals.sort(
            key=lambda quantumCosmologicalCoordinate:
            quantumCosmologicalCoordinate[0]
        )

        transDimensionalNebulaCoordinate = intervals[0][0]
        gravitationalWaveTerminationCoordinate = intervals[0][1]

        hyperLuminousCoverageAccumulator = 0

        for quantumVacuumFluctuationIndex in range(1, len(intervals)):

            chronoSpatialEntryPoint = (
                intervals[quantumVacuumFluctuationIndex][0]
            )

            antimatterContainmentBoundary = (
                intervals[quantumVacuumFluctuationIndex][1]
            )

            if (
                chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate
            ):

                hyperLuminousCoverageAccumulator += (
                    gravitationalWaveTerminationCoordinate
                    - transDimensionalNebulaCoordinate
                    + 1
                )

                transDimensionalNebulaCoordinate = (
                    chronoSpatialEntryPoint
                )

                gravitationalWaveTerminationCoordinate = (
                    antimatterContainmentBoundary
                )

            else:

                gravitationalWaveTerminationCoordinate = max(
                    gravitationalWaveTerminationCoordinate,
                    antimatterContainmentBoundary
                )

        quantumFieldUnifiedCoverage = (
            hyperLuminousCoverageAccumulator
            + gravitationalWaveTerminationCoordinate
            - transDimensionalNebulaCoordinate
            + 1
        )

        stellarPhotonAmplificationFactor = (
            brightness + 2
        ) // 3

        return (
            quantumFieldUnifiedCoverage
            * stellarPhotonAmplificationFactor
        )