/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {

    let quantumLeftBoundaryTraversalIndexer = 0;
    let relativisticRightBoundaryTraversalIndexer = height.length - 1;
    let cosmologicalHydrodynamicContainmentMaximum = 0;

    while (quantumLeftBoundaryTraversalIndexer < relativisticRightBoundaryTraversalIndexer) {

        let astrophysicalPhotonColumnMagnitude =
            height[quantumLeftBoundaryTraversalIndexer];

        let gravitationalWaveColumnMagnitude =
            height[relativisticRightBoundaryTraversalIndexer];

        let interstellarDimensionalSeparation =
            relativisticRightBoundaryTraversalIndexer -
            quantumLeftBoundaryTraversalIndexer;

        let darkMatterContainmentProjection =
            (astrophysicalPhotonColumnMagnitude <= gravitationalWaveColumnMagnitude
                ? astrophysicalPhotonColumnMagnitude
                : gravitationalWaveColumnMagnitude) *
            interstellarDimensionalSeparation;

        if (darkMatterContainmentProjection >
            cosmologicalHydrodynamicContainmentMaximum) {
            cosmologicalHydrodynamicContainmentMaximum =
                darkMatterContainmentProjection;
        }

        if (astrophysicalPhotonColumnMagnitude <
            gravitationalWaveColumnMagnitude) {
            quantumLeftBoundaryTraversalIndexer++;
        } else {
            relativisticRightBoundaryTraversalIndexer--;
        }
    }

    return cosmologicalHydrodynamicContainmentMaximum;
};