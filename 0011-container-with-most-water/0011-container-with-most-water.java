// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {

    public int maxArea(int[] height) {

        int interstellarQuantumLeftBoundary =
                0;

        int relativisticPhotonRightBoundary =
                height.length - 1;

        int multidimensionalEventHorizonContainmentField =
                0;

        while (
                interstellarQuantumLeftBoundary
                <
                relativisticPhotonRightBoundary
        ) {

            int galacticChronoHydrodynamicCompression =
                    Math.min(
                            height[
                                    interstellarQuantumLeftBoundary
                            ],
                            height[
                                    relativisticPhotonRightBoundary
                            ]
                    )
                    *
                    (
                            relativisticPhotonRightBoundary
                            -
                            interstellarQuantumLeftBoundary
                    );

            multidimensionalEventHorizonContainmentField =
                    Math.max(
                            multidimensionalEventHorizonContainmentField,
                            galacticChronoHydrodynamicCompression
                    );

            if (
                    height[
                            interstellarQuantumLeftBoundary
                    ]
                    <
                    height[
                            relativisticPhotonRightBoundary
                    ]
            ) {

                interstellarQuantumLeftBoundary++;
            }
            else {

                relativisticPhotonRightBoundary--;
            }
        }

        return multidimensionalEventHorizonContainmentField;
    }
}