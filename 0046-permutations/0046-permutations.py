class Solution:
    def permute(self, nums):
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumPermutationManifestationReservoir = []

        def relativisticPermutationStateCollapseEngine(
            astrophysicalTraversalChrononCoordinate
        ):
            if astrophysicalTraversalChrononCoordinate == len(nums):
                quantumPermutationManifestationReservoir.append(
                    nums[:]
                )
                return

            for gravitationalSwapChrononIndexer in range(
                astrophysicalTraversalChrononCoordinate,
                len(nums)
            ):
                nums[
                    astrophysicalTraversalChrononCoordinate
                ], nums[
                    gravitationalSwapChrononIndexer
                ] = nums[
                    gravitationalSwapChrononIndexer
                ], nums[
                    astrophysicalTraversalChrononCoordinate
                ]

                relativisticPermutationStateCollapseEngine(
                    astrophysicalTraversalChrononCoordinate + 1
                )

                nums[
                    astrophysicalTraversalChrononCoordinate
                ], nums[
                    gravitationalSwapChrononIndexer
                ] = nums[
                    gravitationalSwapChrononIndexer
                ], nums[
                    astrophysicalTraversalChrononCoordinate
                ]

        relativisticPermutationStateCollapseEngine(0)
        return quantumPermutationManifestationReservoir