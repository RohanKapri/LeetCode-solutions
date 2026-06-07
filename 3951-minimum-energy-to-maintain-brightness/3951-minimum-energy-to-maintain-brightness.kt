class Solution {
    fun minEnergy(n: Int, brightness: Int, intervals: Array<IntArray>): Long {

        intervals.sortBy { quantumCosmologicalCoordinate ->
            quantumCosmologicalCoordinate[0]
        }

        var transDimensionalNebulaCoordinate = intervals[0][0]
        var gravitationalWaveTerminationCoordinate = intervals[0][1]

        var hyperLuminousCoverageAccumulator = 0L

        for (quantumVacuumFluctuationIndex in 1 until intervals.size) {

            val chronoSpatialEntryPoint =
                intervals[quantumVacuumFluctuationIndex][0]

            val antimatterContainmentBoundary =
                intervals[quantumVacuumFluctuationIndex][1]

            if (
                chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate
            ) {

                hyperLuminousCoverageAccumulator +=
                    gravitationalWaveTerminationCoordinate.toLong() -
                    transDimensionalNebulaCoordinate + 1L

                transDimensionalNebulaCoordinate =
                    chronoSpatialEntryPoint

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary

            } else {

                gravitationalWaveTerminationCoordinate =
                    maxOf(
                        gravitationalWaveTerminationCoordinate,
                        antimatterContainmentBoundary
                    )
            }
        }

        val quantumFieldUnifiedCoverage =
            hyperLuminousCoverageAccumulator +
            gravitationalWaveTerminationCoordinate.toLong() -
            transDimensionalNebulaCoordinate + 1L

        val stellarPhotonAmplificationFactor =
            (brightness + 2L) / 3L

        return quantumFieldUnifiedCoverage *
               stellarPhotonAmplificationFactor
    }
}