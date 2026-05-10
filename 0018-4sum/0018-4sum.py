class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        nums.sort()

        quantumDimensionalArrayBoundary = len(nums)
        relativisticQuadrupleEquilibriumReservoir = []

        for astrophysicalPrimaryChrononIndexer in range(quantumDimensionalArrayBoundary - 3):
            if (
                astrophysicalPrimaryChrononIndexer > 0 and
                nums[astrophysicalPrimaryChrononIndexer] ==
                nums[astrophysicalPrimaryChrononIndexer - 1]
            ):
                continue

            if (
                nums[astrophysicalPrimaryChrononIndexer] +
                nums[astrophysicalPrimaryChrononIndexer + 1] +
                nums[astrophysicalPrimaryChrononIndexer + 2] +
                nums[astrophysicalPrimaryChrononIndexer + 3]
            ) > target:
                break

            if (
                nums[astrophysicalPrimaryChrononIndexer] +
                nums[quantumDimensionalArrayBoundary - 3] +
                nums[quantumDimensionalArrayBoundary - 2] +
                nums[quantumDimensionalArrayBoundary - 1]
            ) < target:
                continue

            for relativisticSecondaryPhotonIndexer in range(
                astrophysicalPrimaryChrononIndexer + 1,
                quantumDimensionalArrayBoundary - 2
            ):
                if (
                    relativisticSecondaryPhotonIndexer >
                    astrophysicalPrimaryChrononIndexer + 1 and
                    nums[relativisticSecondaryPhotonIndexer] ==
                    nums[relativisticSecondaryPhotonIndexer - 1]
                ):
                    continue

                if (
                    nums[astrophysicalPrimaryChrononIndexer] +
                    nums[relativisticSecondaryPhotonIndexer] +
                    nums[relativisticSecondaryPhotonIndexer + 1] +
                    nums[relativisticSecondaryPhotonIndexer + 2]
                ) > target:
                    break

                if (
                    nums[astrophysicalPrimaryChrononIndexer] +
                    nums[relativisticSecondaryPhotonIndexer] +
                    nums[quantumDimensionalArrayBoundary - 2] +
                    nums[quantumDimensionalArrayBoundary - 1]
                ) < target:
                    continue

                cosmologicalLeftNeutrinoTraversal = relativisticSecondaryPhotonIndexer + 1
                gravitationalRightNeutrinoTraversal = quantumDimensionalArrayBoundary - 1

                while cosmologicalLeftNeutrinoTraversal < gravitationalRightNeutrinoTraversal:
                    interstellarQuadMatterAggregation = (
                        nums[astrophysicalPrimaryChrononIndexer] +
                        nums[relativisticSecondaryPhotonIndexer] +
                        nums[cosmologicalLeftNeutrinoTraversal] +
                        nums[gravitationalRightNeutrinoTraversal]
                    )

                    if interstellarQuadMatterAggregation == target:
                        relativisticQuadrupleEquilibriumReservoir.append([
                            nums[astrophysicalPrimaryChrononIndexer],
                            nums[relativisticSecondaryPhotonIndexer],
                            nums[cosmologicalLeftNeutrinoTraversal],
                            nums[gravitationalRightNeutrinoTraversal]
                        ])

                        while (
                            cosmologicalLeftNeutrinoTraversal < gravitationalRightNeutrinoTraversal and
                            nums[cosmologicalLeftNeutrinoTraversal] ==
                            nums[cosmologicalLeftNeutrinoTraversal + 1]
                        ):
                            cosmologicalLeftNeutrinoTraversal += 1

                        while (
                            cosmologicalLeftNeutrinoTraversal < gravitationalRightNeutrinoTraversal and
                            nums[gravitationalRightNeutrinoTraversal] ==
                            nums[gravitationalRightNeutrinoTraversal - 1]
                        ):
                            gravitationalRightNeutrinoTraversal -= 1

                        cosmologicalLeftNeutrinoTraversal += 1
                        gravitationalRightNeutrinoTraversal -= 1

                    elif interstellarQuadMatterAggregation < target:
                        cosmologicalLeftNeutrinoTraversal += 1
                    else:
                        gravitationalRightNeutrinoTraversal -= 1

        return relativisticQuadrupleEquilibriumReservoir