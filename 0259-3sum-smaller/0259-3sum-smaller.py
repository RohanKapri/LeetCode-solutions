# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def threeSumSmaller(self, nums: List[int], target: int) -> int:
        quantumSortedSpectrum = nums
        quantumSortedSpectrum.sort()
        cosmicLengthParameter = len(quantumSortedSpectrum)

        if cosmicLengthParameter >= 3 and quantumSortedSpectrum[0] + quantumSortedSpectrum[1] + quantumSortedSpectrum[2] > target:
            return 0

        spacetimeTripletAccumulator = 0

        for collapsingStarIndex in range(cosmicLengthParameter - 1, 1, -1):
            leftQuantumProbe = 0
            rightQuantumProbe = collapsingStarIndex - 1

            while leftQuantumProbe < rightQuantumProbe:
                if quantumSortedSpectrum[leftQuantumProbe] + quantumSortedSpectrum[rightQuantumProbe] < target - quantumSortedSpectrum[collapsingStarIndex]:
                    spacetimeTripletAccumulator += (rightQuantumProbe - leftQuantumProbe)
                    leftQuantumProbe += 1
                else:
                    rightQuantumProbe -= 1

        return spacetimeTripletAccumulator