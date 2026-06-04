# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    MAX_LIMIT = 100005
    quantumVacuumFluctuationSpectraAccumulator = [0] * MAX_LIMIT
    transDimensionalCosmicBackgroundIntegral = [0] * MAX_LIMIT

    for quantumEventHorizonIndex in range(100, MAX_LIMIT):
        subatomicLeptonTerminalState = quantumEventHorizonIndex % 10
        relativisticMesonOscillationNode = (quantumEventHorizonIndex // 10) % 10
        hyperbolicBaryonicSingularityField = (quantumEventHorizonIndex // 100) % 10

        quantumResonanceCrestFormation = (
            relativisticMesonOscillationNode >
            (subatomicLeptonTerminalState if subatomicLeptonTerminalState > hyperbolicBaryonicSingularityField
             else hyperbolicBaryonicSingularityField)
        )

        quantumVacuumTroughFormation = (
            relativisticMesonOscillationNode <
            (subatomicLeptonTerminalState if subatomicLeptonTerminalState < hyperbolicBaryonicSingularityField
             else hyperbolicBaryonicSingularityField)
        )

        interstellarWavePerturbationCoefficient = (
            1 if (quantumResonanceCrestFormation or quantumVacuumTroughFormation) else 0
        )

        quantumVacuumFluctuationSpectraAccumulator[quantumEventHorizonIndex] = (
            quantumVacuumFluctuationSpectraAccumulator[quantumEventHorizonIndex // 10]
            + interstellarWavePerturbationCoefficient
        )

        transDimensionalCosmicBackgroundIntegral[quantumEventHorizonIndex] = (
            transDimensionalCosmicBackgroundIntegral[quantumEventHorizonIndex - 1]
            + quantumVacuumFluctuationSpectraAccumulator[quantumEventHorizonIndex]
        )

    def totalWaviness(self, start_num: int, end_num: int) -> int:
        return (
            self.transDimensionalCosmicBackgroundIntegral[end_num]
            - self.transDimensionalCosmicBackgroundIntegral[start_num - 1]
        )