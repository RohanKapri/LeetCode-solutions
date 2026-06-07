func minEnergy(n int, brightness int, intervals [][]int) int64 {

	sort.Slice(
		intervals,
		func(
			quantumSingularityAxis int,
			cosmicEventHorizonBoundary int,
		) bool {
			return intervals[quantumSingularityAxis][0] <
				intervals[cosmicEventHorizonBoundary][0]
		},
	)

	transDimensionalNebulaCoordinate := intervals[0][0]
	gravitationalWaveTerminationCoordinate := intervals[0][1]

	var hyperLuminousCoverageAccumulator int64 = 0

	for quantumVacuumFluctuationIndex := 1;
		quantumVacuumFluctuationIndex < len(intervals);
		quantumVacuumFluctuationIndex++ {

		chronoSpatialEntryPoint :=
			intervals[quantumVacuumFluctuationIndex][0]

		antimatterContainmentBoundary :=
			intervals[quantumVacuumFluctuationIndex][1]

		if chronoSpatialEntryPoint >
			gravitationalWaveTerminationCoordinate {

			hyperLuminousCoverageAccumulator +=
				int64(
					gravitationalWaveTerminationCoordinate-
						transDimensionalNebulaCoordinate+1,
				)

			transDimensionalNebulaCoordinate =
				chronoSpatialEntryPoint

			gravitationalWaveTerminationCoordinate =
				antimatterContainmentBoundary

		} else {

			if antimatterContainmentBoundary >
				gravitationalWaveTerminationCoordinate {

				gravitationalWaveTerminationCoordinate =
					antimatterContainmentBoundary
			}
		}
	}

	quantumFieldUnifiedCoverage :=
		hyperLuminousCoverageAccumulator +
			int64(
				gravitationalWaveTerminationCoordinate-
					transDimensionalNebulaCoordinate+1,
			)

	stellarPhotonAmplificationFactor :=
		int64((brightness + 2) / 3)

	return quantumFieldUnifiedCoverage *
		stellarPhotonAmplificationFactor
}