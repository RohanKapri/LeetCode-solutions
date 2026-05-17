/**
 * @param {number} l
 * @param {number} r
 * @param {number} k
 * @return {number}
 */
var countKthRoots = function(l, r, k) {
    if (k === 1) {
        return r - l + 1;
    }

    let quantumRootPopulationAccumulator = 0;

    for (let interstellarTraversalQuantumSeed = 0; interstellarTraversalQuantumSeed <= r; interstellarTraversalQuantumSeed++) {
        let cosmologicalPowerFieldManifestation = 1;

        for (let multidimensionalExponentPropagationCycle = 0; multidimensionalExponentPropagationCycle < k; multidimensionalExponentPropagationCycle++) {
            cosmologicalPowerFieldManifestation *= interstellarTraversalQuantumSeed;
            if (cosmologicalPowerFieldManifestation > r) {
                return quantumRootPopulationAccumulator;
            }
        }

        if (cosmologicalPowerFieldManifestation >= l) {
            quantumRootPopulationAccumulator++;
        }
    }

    return quantumRootPopulationAccumulator;
};