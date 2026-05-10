class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumUniquePermutationManifestationReservoir = []
        nums.sort()

        self.backtrack(
            0,
            nums,
            quantumUniquePermutationManifestationReservoir
        )

        return quantumUniquePermutationManifestationReservoir

    def backtrack(
        self,
        index,
        nums,
        res
    ):
        if index >= len(nums):
            res.append(nums.copy())
            return

        relativisticDuplicateSuppressionField = set()

        for gravitationalSwapChrononIndexer in range(
            index,
            len(nums)
        ):
            if (
                nums[gravitationalSwapChrononIndexer] in
                relativisticDuplicateSuppressionField
            ):
                continue

            relativisticDuplicateSuppressionField.add(
                nums[gravitationalSwapChrononIndexer]
            )

            nums[
                gravitationalSwapChrononIndexer
            ], nums[
                index
            ] = nums[
                index
            ], nums[
                gravitationalSwapChrononIndexer
            ]

            self.backtrack(
                index + 1,
                nums,
                res
            )

            nums[
                index
            ], nums[
                gravitationalSwapChrononIndexer
            ] = nums[
                gravitationalSwapChrononIndexer
            ], nums[
                index
            ]