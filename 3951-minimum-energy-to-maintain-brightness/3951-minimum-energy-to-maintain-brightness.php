class Solution {

    /**
     * @param Integer $n
     * @param Integer $brightness
     * @param Integer[][] $intervals
     * @return Integer
     */
    function minEnergy($n, $brightness, $intervals) {

        usort(
            $intervals,
            function (
                $quantumSingularityAxis,
                $cosmicEventHorizonBoundary
            ) {
                return $quantumSingularityAxis[0] <=>
                       $cosmicEventHorizonBoundary[0];
            }
        );

        $transDimensionalNebulaCoordinate =
            $intervals[0][0];

        $gravitationalWaveTerminationCoordinate =
            $intervals[0][1];

        $hyperLuminousCoverageAccumulator = 0;

        $totalQuantumIntervals =
            count($intervals);

        for (
            $quantumVacuumFluctuationIndex = 1;
            $quantumVacuumFluctuationIndex <
                $totalQuantumIntervals;
            $quantumVacuumFluctuationIndex++
        ) {

            $chronoSpatialEntryPoint =
                $intervals[
                    $quantumVacuumFluctuationIndex
                ][0];

            $antimatterContainmentBoundary =
                $intervals[
                    $quantumVacuumFluctuationIndex
                ][1];

            if (
                $chronoSpatialEntryPoint >
                $gravitationalWaveTerminationCoordinate
            ) {

                $hyperLuminousCoverageAccumulator +=
                    $gravitationalWaveTerminationCoordinate -
                    $transDimensionalNebulaCoordinate + 1;

                $transDimensionalNebulaCoordinate =
                    $chronoSpatialEntryPoint;

                $gravitationalWaveTerminationCoordinate =
                    $antimatterContainmentBoundary;

            } else {

                $gravitationalWaveTerminationCoordinate =
                    max(
                        $gravitationalWaveTerminationCoordinate,
                        $antimatterContainmentBoundary
                    );
            }
        }

        $quantumFieldUnifiedCoverage =
            $hyperLuminousCoverageAccumulator +
            $gravitationalWaveTerminationCoordinate -
            $transDimensionalNebulaCoordinate + 1;

        $stellarPhotonAmplificationFactor =
            intdiv($brightness + 2, 3);

        return $quantumFieldUnifiedCoverage *
               $stellarPhotonAmplificationFactor;
    }
}