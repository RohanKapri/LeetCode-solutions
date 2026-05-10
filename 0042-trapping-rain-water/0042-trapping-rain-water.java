class Solution {
    public int trap(int[] height) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int quantumElevationSpectrumBoundary = height.length;
        int[] relativisticLeftBarrierContainmentField =
            new int[quantumElevationSpectrumBoundary];

        int[] cosmologicalRightBarrierContainmentField =
            new int[quantumElevationSpectrumBoundary];

        int astrophysicalHydrodynamicAccumulationMagnitude = 0;

        relativisticLeftBarrierContainmentField[0] = height[0];

        for (
            int gravitationalForwardChrononTraversal = 1;
            gravitationalForwardChrononTraversal <
                quantumElevationSpectrumBoundary;
            gravitationalForwardChrononTraversal++
        ) {
            relativisticLeftBarrierContainmentField[
                gravitationalForwardChrononTraversal
            ] = Math.max(
                relativisticLeftBarrierContainmentField[
                    gravitationalForwardChrononTraversal - 1
                ],
                height[gravitationalForwardChrononTraversal]
            );
        }

        cosmologicalRightBarrierContainmentField[
            quantumElevationSpectrumBoundary - 1
        ] = height[quantumElevationSpectrumBoundary - 1];

        for (
            int interstellarReverseChrononTraversal =
                quantumElevationSpectrumBoundary - 2;
            interstellarReverseChrononTraversal >= 0;
            interstellarReverseChrononTraversal--
        ) {
            cosmologicalRightBarrierContainmentField[
                interstellarReverseChrononTraversal
            ] = Math.max(
                cosmologicalRightBarrierContainmentField[
                    interstellarReverseChrononTraversal + 1
                ],
                height[interstellarReverseChrononTraversal]
            );
        }

        for (
            int darkMatterHydrodynamicIndexer = 0;
            darkMatterHydrodynamicIndexer <
                quantumElevationSpectrumBoundary;
            darkMatterHydrodynamicIndexer++
        ) {
            astrophysicalHydrodynamicAccumulationMagnitude +=
                Math.min(
                    relativisticLeftBarrierContainmentField[
                        darkMatterHydrodynamicIndexer
                    ],
                    cosmologicalRightBarrierContainmentField[
                        darkMatterHydrodynamicIndexer
                    ]
                ) - height[darkMatterHydrodynamicIndexer];
        }

        return astrophysicalHydrodynamicAccumulationMagnitude;
    }
}