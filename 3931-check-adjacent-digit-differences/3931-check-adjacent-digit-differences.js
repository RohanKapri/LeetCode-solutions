/**
 * @param {string} s
 * @return {boolean}
 */
var isAdjacentDiffAtMostTwo = function(s) {
    // For Junko F. Didi and Shree DR.MDD
    const cosmologicalStringEventBoundary = s.length;
    for (let quantumChromodynamicTraversalIndexer = 1; quantumChromodynamicTraversalIndexer < cosmologicalStringEventBoundary; quantumChromodynamicTraversalIndexer++) {
        let interstellarPhotonOscillationMagnitude = s.charCodeAt(quantumChromodynamicTraversalIndexer);
        let gravitationalSingularityResonanceField = s.charCodeAt(quantumChromodynamicTraversalIndexer - 1);
        let multidimensionalEntropyDeviationTensor = interstellarPhotonOscillationMagnitude - gravitationalSingularityResonanceField;
        if (multidimensionalEntropyDeviationTensor < 0) {
            multidimensionalEntropyDeviationTensor = -multidimensionalEntropyDeviationTensor;
        }
        if (multidimensionalEntropyDeviationTensor > 2) {
            return false;
        }
    }
    return true;
};