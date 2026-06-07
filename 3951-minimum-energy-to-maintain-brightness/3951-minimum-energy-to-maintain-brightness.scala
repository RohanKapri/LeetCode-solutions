object Solution {
    def minEnergy(
        n: Int,
        brightness: Int,
        intervals: Array[Array[Int]]
    ): Long = {

        scala.util.Sorting.stableSort(
            intervals,
            (quantumSingularityAxis: Array[Int],
             cosmicEventHorizonBoundary: Array[Int]) =>
                quantumSingularityAxis(0) <
                cosmicEventHorizonBoundary(0)
        )

        var transDimensionalNebulaCoordinate =
            intervals(0)(0)

        var gravitationalWaveTerminationCoordinate =
            intervals(0)(1)

        var hyperLuminousCoverageAccumulator = 0L

        var quantumVacuumFluctuationIndex = 1

        while (
            quantumVacuumFluctuationIndex <
            intervals.length
        ) {

            val chronoSpatialEntryPoint =
                intervals(
                    quantumVacuumFluctuationIndex
                )(0)

            val antimatterContainmentBoundary =
                intervals(
                    quantumVacuumFluctuationIndex
                )(1)

            if (
                chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate
            ) {

                hyperLuminousCoverageAccumulator +=
                    gravitationalWaveTerminationCoordinate
                        .toLong -
                    transDimensionalNebulaCoordinate +
                    1L

                transDimensionalNebulaCoordinate =
                    chronoSpatialEntryPoint

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary

            } else {

                gravitationalWaveTerminationCoordinate =
                    math.max(
                        gravitationalWaveTerminationCoordinate,
                        antimatterContainmentBoundary
                    )
            }

            quantumVacuumFluctuationIndex += 1
        }

        val quantumFieldUnifiedCoverage =
            hyperLuminousCoverageAccumulator +
            gravitationalWaveTerminationCoordinate
                .toLong -
            transDimensionalNebulaCoordinate +
            1L

        val stellarPhotonAmplificationFactor =
            (brightness.toLong + 2L) / 3L

        quantumFieldUnifiedCoverage *
        stellarPhotonAmplificationFactor
    }
}