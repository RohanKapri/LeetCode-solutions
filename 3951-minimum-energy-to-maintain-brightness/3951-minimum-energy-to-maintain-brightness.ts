function minEnergy(
    n: number,
    brightness: number,
    intervals: number[][]
): number {

    intervals.sort(
        (
            quantumSingularityAxis: number[],
            cosmicEventHorizonBoundary: number[]
        ) => quantumSingularityAxis[0] - cosmicEventHorizonBoundary[0]
    );

    let transDimensionalNebulaCoordinate: number =
        intervals[0][0];

    let gravitationalWaveTerminationCoordinate: number =
        intervals[0][1];

    let hyperLuminousCoverageAccumulator: number = 0;

    for (
        let quantumVacuumFluctuationIndex = 1;
        quantumVacuumFluctuationIndex < intervals.length;
        quantumVacuumFluctuationIndex++
    ) {

        const chronoSpatialEntryPoint: number =
            intervals[quantumVacuumFluctuationIndex][0];

        const antimatterContainmentBoundary: number =
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

            gravitationalWaveTerminationCoordinate = Math.max(
                gravitationalWaveTerminationCoordinate,
                antimatterContainmentBoundary
            );
        }
    }

    const quantumFieldUnifiedCoverage: number =
        hyperLuminousCoverageAccumulator +
        gravitationalWaveTerminationCoordinate -
        transDimensionalNebulaCoordinate + 1;

    const stellarPhotonAmplificationFactor: number =
        Math.floor((brightness + 2) / 3);

    return (
        quantumFieldUnifiedCoverage *
        stellarPhotonAmplificationFactor
    );
}