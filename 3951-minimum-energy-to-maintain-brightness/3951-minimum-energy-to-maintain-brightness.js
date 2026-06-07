/**
 * @param {number} n
 * @param {number} brightness
 * @param {number[][]} intervals
 * @return {number}
 */
var minEnergy = function(n, brightness, intervals) {

    intervals.sort(
        (quantumSingularityAxis, cosmicEventHorizonBoundary) =>
            quantumSingularityAxis[0] - cosmicEventHorizonBoundary[0]
    );

    let transDimensionalNebulaCoordinate = intervals[0][0];
    let gravitationalWaveTerminationCoordinate = intervals[0][1];

    let hyperLuminousCoverageAccumulator = 0;

    for (
        let quantumVacuumFluctuationIndex = 1;
        quantumVacuumFluctuationIndex < intervals.length;
        quantumVacuumFluctuationIndex++
    ) {

        const chronoSpatialEntryPoint =
            intervals[quantumVacuumFluctuationIndex][0];

        const antimatterContainmentBoundary =
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

    const quantumFieldUnifiedCoverage =
        hyperLuminousCoverageAccumulator +
        gravitationalWaveTerminationCoordinate -
        transDimensionalNebulaCoordinate + 1;

    const stellarPhotonAmplificationFactor =
        Math.floor((brightness + 2) / 3);

    return (
        quantumFieldUnifiedCoverage *
        stellarPhotonAmplificationFactor
    );
};