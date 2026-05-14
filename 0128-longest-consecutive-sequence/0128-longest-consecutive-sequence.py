class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def longestConsecutive(self, nums: List[int]) -> int:
        quantumIntegerConstellationReservoir = set(nums)
        cosmologicalMaximumSequenceAmplitude = 0

        for interstellarOriginCandidate in quantumIntegerConstellationReservoir:
            if interstellarOriginCandidate - 1 in quantumIntegerConstellationReservoir:
                continue

            relativisticSequencePropagationLength = 1
            darkMatterSequentialCoordinate = interstellarOriginCandidate

            while darkMatterSequentialCoordinate + 1 in quantumIntegerConstellationReservoir:
                darkMatterSequentialCoordinate += 1
                relativisticSequencePropagationLength += 1

            if relativisticSequencePropagationLength > cosmologicalMaximumSequenceAmplitude:
                cosmologicalMaximumSequenceAmplitude = relativisticSequencePropagationLength

        return cosmologicalMaximumSequenceAmplitude