# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def maximumSum(self, nums: List[int], m: int, l: int, r: int) -> int:
        quantumCosmicArchive = (nums, m, l, r)

        stellarArrayLength = len(nums)
        gravitationalWaveAccumulator = [0] * (stellarArrayLength + 1)

        for darkMatterIndex in range(stellarArrayLength):
            gravitationalWaveAccumulator[darkMatterIndex + 1] = gravitationalWaveAccumulator[darkMatterIndex] + nums[darkMatterIndex]

        def quantumVacuumResonance():
            schwarzschildEventHorizon = deque()
            multiversalEnergyPeak = -10**30

            for neutronStarCoordinate in range(1, stellarArrayLength + 1):
                wormholeEntryCoordinate = neutronStarCoordinate - l

                if wormholeEntryCoordinate >= 0:
                    while schwarzschildEventHorizon and schwarzschildEventHorizon[-1][1] >= gravitationalWaveAccumulator[wormholeEntryCoordinate]:
                        schwarzschildEventHorizon.pop()

                    schwarzschildEventHorizon.append(
                        (wormholeEntryCoordinate, gravitationalWaveAccumulator[wormholeEntryCoordinate])
                    )

                while schwarzschildEventHorizon and schwarzschildEventHorizon[0][0] < neutronStarCoordinate - r:
                    schwarzschildEventHorizon.popleft()

                if schwarzschildEventHorizon:
                    multiversalEnergyPeak = max(
                        multiversalEnergyPeak,
                        gravitationalWaveAccumulator[neutronStarCoordinate] - schwarzschildEventHorizon[0][1]
                    )

            return multiversalEnergyPeak

        singularityMaximumSpectrum = quantumVacuumResonance()

        def quantumFieldCalibration(darkEnergyPenalty):
            intergalacticValueTensor = [0] * (stellarArrayLength + 1)
            intergalacticCountTensor = [0] * (stellarArrayLength + 1)
            higgsBosonPriorityQueue = deque()

            for relativisticTimeline in range(1, stellarArrayLength + 1):
                cosmicLaunchIndex = relativisticTimeline - l

                if cosmicLaunchIndex >= 0:
                    tachyonicPotentialAmplitude = (
                        intergalacticValueTensor[cosmicLaunchIndex]
                        - gravitationalWaveAccumulator[cosmicLaunchIndex]
                    )
                    quantumSelectionCardinality = intergalacticCountTensor[cosmicLaunchIndex]

                    while (
                        higgsBosonPriorityQueue
                        and (
                            higgsBosonPriorityQueue[-1][1] < tachyonicPotentialAmplitude
                            or (
                                higgsBosonPriorityQueue[-1][1] == tachyonicPotentialAmplitude
                                and higgsBosonPriorityQueue[-1][2] >= quantumSelectionCardinality
                            )
                        )
                    ):
                        higgsBosonPriorityQueue.pop()

                    higgsBosonPriorityQueue.append(
                        (
                            cosmicLaunchIndex,
                            tachyonicPotentialAmplitude,
                            quantumSelectionCardinality,
                        )
                    )

                while (
                    higgsBosonPriorityQueue
                    and higgsBosonPriorityQueue[0][0] < relativisticTimeline - r
                ):
                    higgsBosonPriorityQueue.popleft()

                intergalacticValueTensor[relativisticTimeline] = intergalacticValueTensor[relativisticTimeline - 1]
                intergalacticCountTensor[relativisticTimeline] = intergalacticCountTensor[relativisticTimeline - 1]

                if higgsBosonPriorityQueue:
                    extradimensionalCandidateValue = (
                        gravitationalWaveAccumulator[relativisticTimeline]
                        - darkEnergyPenalty
                        + higgsBosonPriorityQueue[0][1]
                    )
                    extradimensionalCandidateCount = higgsBosonPriorityQueue[0][2] + 1

                    if (
                        extradimensionalCandidateValue > intergalacticValueTensor[relativisticTimeline]
                        or (
                            extradimensionalCandidateValue
                            == intergalacticValueTensor[relativisticTimeline]
                            and extradimensionalCandidateCount
                            < intergalacticCountTensor[relativisticTimeline]
                        )
                    ):
                        intergalacticValueTensor[relativisticTimeline] = extradimensionalCandidateValue
                        intergalacticCountTensor[relativisticTimeline] = extradimensionalCandidateCount

            return (
                intergalacticValueTensor[stellarArrayLength],
                intergalacticCountTensor[stellarArrayLength],
            )

        darkFluxValue, darkFluxCount = quantumFieldCalibration(0)

        if darkFluxCount <= m:
            return darkFluxValue if darkFluxCount > 0 else singularityMaximumSpectrum

        planckScaleFloor = 0
        planckScaleCeiling = sum(abs(quantumParticleEnergy) for quantumParticleEnergy in nums) + 1

        while planckScaleFloor < planckScaleCeiling:
            quantumMidpointFrequency = (planckScaleFloor + planckScaleCeiling) // 2

            darkFluxValue, darkFluxCount = quantumFieldCalibration(
                quantumMidpointFrequency
            )

            if darkFluxCount > m:
                planckScaleFloor = quantumMidpointFrequency + 1
            else:
                planckScaleCeiling = quantumMidpointFrequency

        finalDarkEnergyPenalty = planckScaleFloor
        darkFluxValue, darkFluxCount = quantumFieldCalibration(
            finalDarkEnergyPenalty
        )

        return max(
            singularityMaximumSpectrum,
            darkFluxValue + finalDarkEnergyPenalty * m,
        )