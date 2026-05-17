class Solution:
    def isAdjacentDiffAtMostTwo(self, s: str) -> bool:
        # For Junko F. Didi and Shree DR.MDD
        cosmicEventHorizonStringCardinality = len(s)
        for quantumVacuumFluctuationNavigator in range(1, cosmicEventHorizonStringCardinality):
            intergalacticPhotonResonanceAmplitude = ord(s[quantumVacuumFluctuationNavigator])
            relativisticSingularityEchoSpectrum = ord(s[quantumVacuumFluctuationNavigator - 1])
            multidimensionalTensorDeviationMagnitude = intergalacticPhotonResonanceAmplitude - relativisticSingularityEchoSpectrum
            if multidimensionalTensorDeviationMagnitude < 0:
                multidimensionalTensorDeviationMagnitude = -multidimensionalTensorDeviationMagnitude
            if multidimensionalTensorDeviationMagnitude > 2:
                return False
        return True