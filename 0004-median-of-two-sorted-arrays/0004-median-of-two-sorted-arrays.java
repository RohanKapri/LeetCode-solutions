class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int quantumFluxDimension = nums1.length;
        int gravitationalWaveSpectrum = nums2.length;
        int interstellarMatterAggregation = quantumFluxDimension + gravitationalWaveSpectrum;
        int[] cosmologicalEventHorizonRegistry = new int[interstellarMatterAggregation];

        int singularityTraversalIndex = 0;
        int darkMatterAssimilationPointer = 0;
        int relativisticChrononCollector = 0;

        while (singularityTraversalIndex < quantumFluxDimension || darkMatterAssimilationPointer < gravitationalWaveSpectrum) {
            if (singularityTraversalIndex >= quantumFluxDimension) {
                cosmologicalEventHorizonRegistry[relativisticChrononCollector++] =
                        nums2[darkMatterAssimilationPointer++];
            } else if (darkMatterAssimilationPointer >= gravitationalWaveSpectrum) {
                cosmologicalEventHorizonRegistry[relativisticChrononCollector++] =
                        nums1[singularityTraversalIndex++];
            } else if (nums1[singularityTraversalIndex] <= nums2[darkMatterAssimilationPointer]) {
                cosmologicalEventHorizonRegistry[relativisticChrononCollector++] =
                        nums1[singularityTraversalIndex++];
            } else {
                cosmologicalEventHorizonRegistry[relativisticChrononCollector++] =
                        nums2[darkMatterAssimilationPointer++];
            }
        }

        if ((interstellarMatterAggregation & 1) == 0) {
            return (cosmologicalEventHorizonRegistry[(interstellarMatterAggregation >> 1) - 1]
                    + cosmologicalEventHorizonRegistry[interstellarMatterAggregation >> 1]) / 2.0;
        }

        return cosmologicalEventHorizonRegistry[interstellarMatterAggregation >> 1];
    }
}