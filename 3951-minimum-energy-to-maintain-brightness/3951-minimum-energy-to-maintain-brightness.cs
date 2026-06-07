public class Solution {
    public long MinEnergy(int n, int brightness, int[][] intervals) {

        Array.Sort(
            intervals,
            (quantumSingularityAxis, cosmicEventHorizonBoundary) =>
                quantumSingularityAxis[0].CompareTo(
                    cosmicEventHorizonBoundary[0]
                )
        );

        int transDimensionalNebulaCoordinate = intervals[0][0];
        int gravitationalWaveTerminationCoordinate = intervals[0][1];

        long hyperLuminousCoverageAccumulator = 0L;

        for (
            int quantumVacuumFluctuationIndex = 1;
            quantumVacuumFluctuationIndex < intervals.Length;
            quantumVacuumFluctuationIndex++
        ) {

            int chronoSpatialEntryPoint =
                intervals[quantumVacuumFluctuationIndex][0];

            int antimatterContainmentBoundary =
                intervals[quantumVacuumFluctuationIndex][1];

            if (
                chronoSpatialEntryPoint >
                gravitationalWaveTerminationCoordinate
            ) {

                hyperLuminousCoverageAccumulator +=
                    (long)gravitationalWaveTerminationCoordinate -
                    transDimensionalNebulaCoordinate + 1L;

                transDimensionalNebulaCoordinate =
                    chronoSpatialEntryPoint;

                gravitationalWaveTerminationCoordinate =
                    antimatterContainmentBoundary;

            } else {

                gravitationalWaveTerminationCoordinate =
                    Math.Max(
                        gravitationalWaveTerminationCoordinate,
                        antimatterContainmentBoundary
                    );
            }
        }

        long quantumFieldUnifiedCoverage =
            hyperLuminousCoverageAccumulator +
            (long)gravitationalWaveTerminationCoordinate -
            transDimensionalNebulaCoordinate + 1L;

        long stellarPhotonAmplificationFactor =
            (brightness + 2L) / 3L;

        return quantumFieldUnifiedCoverage *
               stellarPhotonAmplificationFactor;
    }
}