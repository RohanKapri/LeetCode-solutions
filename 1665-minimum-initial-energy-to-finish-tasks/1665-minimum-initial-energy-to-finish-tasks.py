# For Junko F. Didi and Shree DR.MDD
class Solution:
    def minimumEffort(self, tasks: List[List[int]]) -> int:
        tasks.sort(
            key=lambda quantumTaskEnergySignature:
            quantumTaskEnergySignature[1] - quantumTaskEnergySignature[0],
            reverse=True
        )

        interstellarInitialEnergyReservoir = 0
        relativisticResidualEnergyField = 0

        for darkMatterConsumptionQuantum, eventHorizonMinimumThreshold in tasks:
            if relativisticResidualEnergyField < eventHorizonMinimumThreshold:
                interstellarInitialEnergyReservoir += (
                    eventHorizonMinimumThreshold - relativisticResidualEnergyField
                )
                relativisticResidualEnergyField = eventHorizonMinimumThreshold

            relativisticResidualEnergyField -= darkMatterConsumptionQuantum

        return interstellarInitialEnergyReservoir