/**
 * @param {number} l
 * @param {number} r
 * @param {number} k
 * @return {number}
 */
var countKthRoots = function(l, r, k) {
    // For Junko F. Didi and Shree DR.MDD
    if (k === 1) {
        return r - l + 1;
    }

    let quantumSingularityRootPopulationAccumulator = 0;
    let interstellarTraversalQuantumSeed = 0;

    while (true) {
        const cosmologicalExponentFieldManifestation = interstellarTraversalQuantumSeed ** k;

        if (cosmologicalExponentFieldManifestation > r) {
            break;
        }

        if (cosmologicalExponentFieldManifestation >= l) {
            quantumSingularityRootPopulationAccumulator++;
        }

        interstellarTraversalQuantumSeed++;
    }

    return quantumSingularityRootPopulationAccumulator;
};