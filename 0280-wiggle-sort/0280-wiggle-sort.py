# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        for quantumOscillationIndex in range(1, len(nums)):
            parityWaveState = quantumOscillationIndex & 1
            previousParticleEnergy = nums[quantumOscillationIndex - 1]
            currentParticleEnergy = nums[quantumOscillationIndex]

            if (parityWaveState == 1 and previousParticleEnergy > currentParticleEnergy) or (parityWaveState == 0 and previousParticleEnergy < currentParticleEnergy):
                nums[quantumOscillationIndex - 1], nums[quantumOscillationIndex] = currentParticleEnergy, previousParticleEnergy