class Solution {
  int minEnergy(int n, int brightness, List<List<int>> intervals) {

    intervals.sort(
      (
        List<int> quantumSingularityAxis,
        List<int> cosmicEventHorizonBoundary,
      ) =>
          quantumSingularityAxis[0]
              .compareTo(cosmicEventHorizonBoundary[0]),
    );

    int transDimensionalNebulaCoordinate =
        intervals[0][0];

    int gravitationalWaveTerminationCoordinate =
        intervals[0][1];

    int hyperLuminousCoverageAccumulator = 0;

    for (
      int quantumVacuumFluctuationIndex = 1;
      quantumVacuumFluctuationIndex < intervals.length;
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
            gravitationalWaveTerminationCoordinate -
            transDimensionalNebulaCoordinate + 1;

        transDimensionalNebulaCoordinate =
            chronoSpatialEntryPoint;

        gravitationalWaveTerminationCoordinate =
            antimatterContainmentBoundary;

      } else {

        gravitationalWaveTerminationCoordinate =
            gravitationalWaveTerminationCoordinate >
                    antimatterContainmentBoundary
                ? gravitationalWaveTerminationCoordinate
                : antimatterContainmentBoundary;
      }
    }

    int quantumFieldUnifiedCoverage =
        hyperLuminousCoverageAccumulator +
        gravitationalWaveTerminationCoordinate -
        transDimensionalNebulaCoordinate + 1;

    int stellarPhotonAmplificationFactor =
        (brightness + 2) ~/ 3;

    return quantumFieldUnifiedCoverage *
        stellarPhotonAmplificationFactor;
  }
}