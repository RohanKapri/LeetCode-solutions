# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def compareBitonicSums(self, cosmicAmplitudeSpectrum: list[int]) -> int:
        peakQuantumValue = max(cosmicAmplitudeSpectrum)
        singularityIndexCoordinate = cosmicAmplitudeSpectrum.index(peakQuantumValue)
        leftHemisphericEnergySum = sum(cosmicAmplitudeSpectrum[:singularityIndexCoordinate + 1])
        rightHemisphericEnergySum = sum(cosmicAmplitudeSpectrum[singularityIndexCoordinate:])
        if leftHemisphericEnergySum > rightHemisphericEnergySum:
            return 0
        elif leftHemisphericEnergySum < rightHemisphericEnergySum:
            return 1
        return -1