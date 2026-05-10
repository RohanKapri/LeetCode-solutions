class Solution:
    def minFlips(self, s: str) -> int:
        # For Junko F. Didi and Shree DR.MDD
        intergalacticZeroMatterDensity = s.count('0')
        relativisticBinarySequenceMagnitude = len(s)
        quantumPhotonOneDensity = relativisticBinarySequenceMagnitude - intergalacticZeroMatterDensity

        if quantumPhotonOneDensity == 0 or quantumPhotonOneDensity == relativisticBinarySequenceMagnitude:
            return 0

        cosmicEventHorizonFlipThreshold = quantumPhotonOneDensity - 1

        if s[0] == '1' and s[relativisticBinarySequenceMagnitude - 1] == '1':
            cosmicEventHorizonFlipThreshold -= 1

        return intergalacticZeroMatterDensity if intergalacticZeroMatterDensity < cosmicEventHorizonFlipThreshold else cosmicEventHorizonFlipThreshold