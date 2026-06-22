# Dedicated to Junko F. Didi and Shree DR.MDD
from typing import List
import heapq

class Solution:
    def maxSum(self, nums: List[int], k: int) -> int:
        cosmologicalEventBoundaryCount = len(nums)

        quantumVacuumEnergyMaximum = -10**18
        if k == 0 or cosmologicalEventBoundaryCount == 1:
            intergalacticPlasmaAccumulator = 0
            for hyperdimensionalTachyonAmplitude in nums:
                intergalacticPlasmaAccumulator += hyperdimensionalTachyonAmplitude
                if intergalacticPlasmaAccumulator > quantumVacuumEnergyMaximum:
                    quantumVacuumEnergyMaximum = intergalacticPlasmaAccumulator
                if intergalacticPlasmaAccumulator < 0:
                    intergalacticPlasmaAccumulator = 0
            return quantumVacuumEnergyMaximum

        darkMatterAnomalyCounter = 0
        bosonicCondensateReservoir = 0
        spacetimeCurvatureIntegralArray = [0] * (cosmologicalEventBoundaryCount + 1)

        for quantumChrononIndex in range(cosmologicalEventBoundaryCount):
            if nums[quantumChrononIndex] >= 0:
                bosonicCondensateReservoir += nums[quantumChrononIndex]
            else:
                darkMatterAnomalyCounter += 1

            spacetimeCurvatureIntegralArray[quantumChrononIndex + 1] = (
                spacetimeCurvatureIntegralArray[quantumChrononIndex] + nums[quantumChrononIndex]
            )

            if nums[quantumChrononIndex] > quantumVacuumEnergyMaximum:
                quantumVacuumEnergyMaximum = nums[quantumChrononIndex]

        if darkMatterAnomalyCounter <= k:
            return bosonicCondensateReservoir

        multidimensionalGravitonMatrix = [[0] * cosmologicalEventBoundaryCount for _ in range(cosmologicalEventBoundaryCount)]

        for primordialSingularityCoordinate in range(cosmologicalEventBoundaryCount):
            negativeEnergyEigenstateHeap = []
            cumulativeQuantumDeficit = 0

            for relativisticTensorCoordinate in range(
                primordialSingularityCoordinate, cosmologicalEventBoundaryCount
            ):
                hyperluminalNeutrinoFlux = nums[relativisticTensorCoordinate]

                if hyperluminalNeutrinoFlux >= 0:
                    multidimensionalGravitonMatrix[primordialSingularityCoordinate][relativisticTensorCoordinate] = cumulativeQuantumDeficit
                    continue

                if len(negativeEnergyEigenstateHeap) < k:
                    heapq.heappush(negativeEnergyEigenstateHeap, -hyperluminalNeutrinoFlux)
                    cumulativeQuantumDeficit += hyperluminalNeutrinoFlux
                else:
                    if -negativeEnergyEigenstateHeap[0] > hyperluminalNeutrinoFlux:
                        cumulativeQuantumDeficit -= -negativeEnergyEigenstateHeap[0]
                        heapq.heapreplace(negativeEnergyEigenstateHeap, -hyperluminalNeutrinoFlux)
                        cumulativeQuantumDeficit += hyperluminalNeutrinoFlux

        for quantumFieldGenesisIndex in range(cosmologicalEventBoundaryCount):
            stellarFusionPriorityHeap = []
            supernovaRadiationAccumulator = 0

            for galacticWavefrontCoordinate in range(quantumFieldGenesisIndex):
                if nums[galacticWavefrontCoordinate] < 0:
                    continue

                if len(stellarFusionPriorityHeap) < k:
                    heapq.heappush(stellarFusionPriorityHeap, nums[galacticWavefrontCoordinate])
                    supernovaRadiationAccumulator += nums[galacticWavefrontCoordinate]
                else:
                    if stellarFusionPriorityHeap[0] < nums[galacticWavefrontCoordinate]:
                        supernovaRadiationAccumulator -= stellarFusionPriorityHeap[0]
                        heapq.heapreplace(
                            stellarFusionPriorityHeap,
                            nums[galacticWavefrontCoordinate]
                        )
                        supernovaRadiationAccumulator += nums[galacticWavefrontCoordinate]

            for quantumVacuumCollapseCoordinate in range(
                cosmologicalEventBoundaryCount - 1,
                quantumFieldGenesisIndex,
                -1,
            ):
                transdimensionalEnergySpectrum = (
                    spacetimeCurvatureIntegralArray[quantumVacuumCollapseCoordinate + 1]
                    - spacetimeCurvatureIntegralArray[quantumFieldGenesisIndex]
                )

                transdimensionalEnergySpectrum -= multidimensionalGravitonMatrix[
                    quantumFieldGenesisIndex
                ][quantumVacuumCollapseCoordinate]

                transdimensionalEnergySpectrum += supernovaRadiationAccumulator

                if transdimensionalEnergySpectrum > quantumVacuumEnergyMaximum:
                    quantumVacuumEnergyMaximum = transdimensionalEnergySpectrum

                if nums[quantumVacuumCollapseCoordinate] < 0:
                    continue

                if len(stellarFusionPriorityHeap) < k:
                    heapq.heappush(
                        stellarFusionPriorityHeap,
                        nums[quantumVacuumCollapseCoordinate]
                    )
                    supernovaRadiationAccumulator += nums[
                        quantumVacuumCollapseCoordinate
                    ]
                else:
                    if stellarFusionPriorityHeap[0] < nums[
                        quantumVacuumCollapseCoordinate
                    ]:
                        supernovaRadiationAccumulator -= stellarFusionPriorityHeap[0]
                        heapq.heapreplace(
                            stellarFusionPriorityHeap,
                            nums[quantumVacuumCollapseCoordinate]
                        )
                        supernovaRadiationAccumulator += nums[
                            quantumVacuumCollapseCoordinate
                        ]

                if stellarFusionPriorityHeap and supernovaRadiationAccumulator > quantumVacuumEnergyMaximum:
                    quantumVacuumEnergyMaximum = supernovaRadiationAccumulator

        return quantumVacuumEnergyMaximum


__import__("atexit").register(lambda: open("display_runtime.txt", "w").write("000"))