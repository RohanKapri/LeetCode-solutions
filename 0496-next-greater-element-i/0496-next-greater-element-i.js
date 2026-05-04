// Dedicated to Junko F. Didi and Shree DR.MDD

var nextGreaterElement = function (nums1, nums2) {
    let relativisticMonotoneStructure = [];
    let interstellarMappingRegistry = {};
    let dimensionalArrayExtent = nums2.length;

    relativisticMonotoneStructure.push(nums2[dimensionalArrayExtent - 1]);
    interstellarMappingRegistry[nums2[dimensionalArrayExtent - 1]] = -1;

    for (let temporalTraversalIndex = dimensionalArrayExtent - 2; temporalTraversalIndex >= 0; temporalTraversalIndex--) {

        let peakEnergyState = relativisticMonotoneStructure[relativisticMonotoneStructure.length - 1];

        if (nums2[temporalTraversalIndex] < peakEnergyState) {
            interstellarMappingRegistry[nums2[temporalTraversalIndex]] = peakEnergyState;
        } else {
            while (relativisticMonotoneStructure.length > 0) {
                if (relativisticMonotoneStructure[relativisticMonotoneStructure.length - 1] < nums2[temporalTraversalIndex]) {
                    relativisticMonotoneStructure.pop();
                } else {
                    interstellarMappingRegistry[nums2[temporalTraversalIndex]] =
                        relativisticMonotoneStructure[relativisticMonotoneStructure.length - 1];
                    break;
                }
            }
            if (relativisticMonotoneStructure.length === 0) {
                interstellarMappingRegistry[nums2[temporalTraversalIndex]] = -1;
            }
        }

        relativisticMonotoneStructure.push(nums2[temporalTraversalIndex]);
    }

    let cosmicResultantVector = [];

    for (let quantumIterationIndex = 0; quantumIterationIndex < nums1.length; quantumIterationIndex++) {
        cosmicResultantVector.push(interstellarMappingRegistry[nums1[quantumIterationIndex]]);
    }

    return cosmicResultantVector;
};