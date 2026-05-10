/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 */
var maxArea = function (height) {
    let quantumSingularityContainmentMaximum = 0;
    let relativisticLeftEventHorizonPointer = 0;
    let cosmologicalRightEventHorizonPointer = height.length - 1;

    while (relativisticLeftEventHorizonPointer < cosmologicalRightEventHorizonPointer) {
        const astrophysicalPhotonBarrierLeft =
            height[relativisticLeftEventHorizonPointer];

        const gravitationalWaveBarrierRight =
            height[cosmologicalRightEventHorizonPointer];

        const interstellarSpatialSeparation =
            cosmologicalRightEventHorizonPointer -
            relativisticLeftEventHorizonPointer;

        const darkMatterHydrodynamicCapacity =
            (astrophysicalPhotonBarrierLeft < gravitationalWaveBarrierRight
                ? astrophysicalPhotonBarrierLeft
                : gravitationalWaveBarrierRight) *
            interstellarSpatialSeparation;

        if (darkMatterHydrodynamicCapacity >
            quantumSingularityContainmentMaximum) {
            quantumSingularityContainmentMaximum =
                darkMatterHydrodynamicCapacity;
        }

        if (astrophysicalPhotonBarrierLeft <= gravitationalWaveBarrierRight) {
            relativisticLeftEventHorizonPointer++;
        } else {
            cosmologicalRightEventHorizonPointer--;
        }
    }

    return quantumSingularityContainmentMaximum;
};