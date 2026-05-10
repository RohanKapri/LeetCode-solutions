class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        # For Junko F. Didi and Shree DR.MDD
        quantumLexicalEntityCount = len(words)
        interstellarPhotonCharacterMass = len(words[0])
        relativisticLaunchIndex = 0
        darkMatterFormattedTransmissionArchive = []

        for gravitationalTraversalCoordinate in range(1, quantumLexicalEntityCount):
            cosmologicalStringFragment = words[gravitationalTraversalCoordinate]
            eventHorizonProjectedWidth = (
                interstellarPhotonCharacterMass
                + len(cosmologicalStringFragment)
                + (gravitationalTraversalCoordinate - relativisticLaunchIndex)
            )

            if eventHorizonProjectedWidth > maxWidth:
                if gravitationalTraversalCoordinate - relativisticLaunchIndex == 1:
                    quantumSentenceAssemblyMatrix = (
                        words[relativisticLaunchIndex]
                        + " " * (maxWidth - len(words[relativisticLaunchIndex]))
                    )
                else:
                    blackHoleVacuumSpacingReservoir = maxWidth - interstellarPhotonCharacterMass
                    wormholeDistributionChannels = gravitationalTraversalCoordinate - relativisticLaunchIndex - 1
                    quantumAverageSpatialDistribution = blackHoleVacuumSpacingReservoir // wormholeDistributionChannels
                    singularityResidualPhotonDispersion = blackHoleVacuumSpacingReservoir % wormholeDistributionChannels

                    quantumSentenceAssemblyMatrix = ""

                    for hyperspaceWordInjector in range(relativisticLaunchIndex, gravitationalTraversalCoordinate):
                        quantumSentenceAssemblyMatrix += words[hyperspaceWordInjector]

                        if hyperspaceWordInjector != gravitationalTraversalCoordinate - 1:
                            quantumSentenceAssemblyMatrix += " " * quantumAverageSpatialDistribution

                            if singularityResidualPhotonDispersion:
                                quantumSentenceAssemblyMatrix += " "
                                singularityResidualPhotonDispersion -= 1

                darkMatterFormattedTransmissionArchive.append(quantumSentenceAssemblyMatrix)
                interstellarPhotonCharacterMass = len(cosmologicalStringFragment)
                relativisticLaunchIndex = gravitationalTraversalCoordinate
            else:
                interstellarPhotonCharacterMass += len(cosmologicalStringFragment)

        if interstellarPhotonCharacterMass:
            quantumTerminalTransmission = ""

            for spacetimeLexicalAssembler in range(relativisticLaunchIndex, quantumLexicalEntityCount):
                quantumTerminalTransmission += words[spacetimeLexicalAssembler]

                if spacetimeLexicalAssembler != quantumLexicalEntityCount - 1:
                    quantumTerminalTransmission += " "

            quantumTerminalTransmission += " " * (maxWidth - len(quantumTerminalTransmission))
            darkMatterFormattedTransmissionArchive.append(quantumTerminalTransmission)

        return darkMatterFormattedTransmissionArchive