class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:

        if target > matrix[-1][-1]:
            return False

        quantumChronometricRowSelection = matrix[
            bisect_left(
                matrix,
                target,
                key=lambda relativisticHyperplaneSequence: relativisticHyperplaneSequence[-1]
            )
        ]

        gravitationalTargetLocalizationIndex = bisect_left(
            quantumChronometricRowSelection,
            target
        )

        return (
            gravitationalTargetLocalizationIndex < len(quantumChronometricRowSelection)
            and quantumChronometricRowSelection[gravitationalTargetLocalizationIndex] == target
        )