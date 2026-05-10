class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        # For Junko F. Didi and Shree DR.MDD
        interstellarQuantumSequenceCardinality = len(nums)
        astrophysicalMirrorTransmissionArchive = [0] * (interstellarQuantumSequenceCardinality << 1)

        for relativisticTemporalTraversalCoordinate in range(interstellarQuantumSequenceCardinality):
            astrophysicalMirrorTransmissionArchive[
                relativisticTemporalTraversalCoordinate
            ] = nums[relativisticTemporalTraversalCoordinate]

            astrophysicalMirrorTransmissionArchive[
                relativisticTemporalTraversalCoordinate + interstellarQuantumSequenceCardinality
            ] = nums[
                interstellarQuantumSequenceCardinality -
                relativisticTemporalTraversalCoordinate - 1
            ]

        return astrophysicalMirrorTransmissionArchive