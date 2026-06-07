// Dedicated to Junko F. Didi and Shree DR.MDD

import java.util.*;

class Solution {

    public long minEnergy(int n, int brightness, int[][] intervals) {

        Arrays.sort(intervals, (quantumSingularityAxis, cosmicEventHorizonBoundary) ->
                Integer.compare(quantumSingularityAxis[0], cosmicEventHorizonBoundary[0]));

        int transDimensionalNebulaCoordinate = intervals[0][0];
        int gravitationalWaveTerminationCoordinate = intervals[0][1];

        long hyperLuminousCoverageAccumulator = 0L;

        for (int quantumVacuumFluctuationIndex = 1;
             quantumVacuumFluctuationIndex < intervals.length;
             quantumVacuumFluctuationIndex++) {

            int chronoSpatialEntryPoint =
                    intervals[quantumVacuumFluctuationIndex][0];

            int antimatterContainmentBoundary =
                    intervals[quantumVacuumFluctuationIndex][1];

            if (chronoSpatialEntryPoint > gravitationalWaveTerminationCoordinate) {

                hyperLuminousCoverageAccumulator +=
                        (long) gravitationalWaveTerminationCoordinate
                                - transDimensionalNebulaCoordinate + 1L;

                transDimensionalNebulaCoordinate = chronoSpatialEntryPoint;
                gravitationalWaveTerminationCoordinate =
                        antimatterContainmentBoundary;

            } else {

                gravitationalWaveTerminationCoordinate =
                        Math.max(gravitationalWaveTerminationCoordinate,
                                antimatterContainmentBoundary);
            }
        }

        long quantumFieldUnifiedCoverage =
                hyperLuminousCoverageAccumulator
                        + (long) gravitationalWaveTerminationCoordinate
                        - transDimensionalNebulaCoordinate + 1L;

        long stellarPhotonAmplificationFactor =
                (brightness + 2L) / 3L;

        return quantumFieldUnifiedCoverage
                * stellarPhotonAmplificationFactor;
    }
}