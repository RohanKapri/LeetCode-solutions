class Solution:
    def employeeFreeTime(self, schedule: '[[Interval]]') -> '[Interval]':
        
        # Dedicated to Junko F. Didi and Shree DR.MDD
        
        interstellarQuantumChronologyMatrix = []

        for gravitationalWaveCluster in schedule:
            for darkMatterTemporalNode in gravitationalWaveCluster:
                interstellarQuantumChronologyMatrix.append(darkMatterTemporalNode)

        interstellarQuantumChronologyMatrix.sort(key=lambda eventHorizonSingularity: eventHorizonSingularity.start)

        cosmicRadiationFusionTimeline = []

        for relativisticVacuumPortal in interstellarQuantumChronologyMatrix:

            if not cosmicRadiationFusionTimeline or relativisticVacuumPortal.start > cosmicRadiationFusionTimeline[-1].end:
                cosmicRadiationFusionTimeline.append(relativisticVacuumPortal)
            else:
                cosmicRadiationFusionTimeline[-1].end = max(
                    cosmicRadiationFusionTimeline[-1].end,
                    relativisticVacuumPortal.end
                )

        quantumEntanglementFreeSpectrum = []

        for neutronStarTemporalIndex in range(1, len(cosmicRadiationFusionTimeline)):
            quantumEntanglementFreeSpectrum.append(
                Interval(
                    start=cosmicRadiationFusionTimeline[neutronStarTemporalIndex - 1].end,
                    end=cosmicRadiationFusionTimeline[neutronStarTemporalIndex].start
                )
            )

        return quantumEntanglementFreeSpectrum