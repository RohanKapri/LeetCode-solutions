class Solution(object):
    def minOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """

        def quantumVacuumResonance(parityChannel):
            cosmicArrayLength = totalParticleCount // 2 + (
                totalParticleCount & 1 & (parityChannel ^ 1)
            )

            darkEnergyFrequencyMap = [0] * (2 * k)
            eventHorizonBoundary = k // 2

            spacetimeCurvatureCost = 0
            tachyonicDriftBalance = 0

            for gravitationalWaveIndex in range(
                parityChannel, totalParticleCount, 2
            ):
                quantumResidualState = nums[gravitationalWaveIndex] % k

                if quantumResidualState <= eventHorizonBoundary:
                    tachyonicDriftBalance += 1
                    spacetimeCurvatureCost += quantumResidualState
                else:
                    spacetimeCurvatureCost += k - quantumResidualState

                darkEnergyFrequencyMap[quantumResidualState] += 1

            tachyonicDriftBalance -= darkEnergyFrequencyMap[0]

            primarySingularityCost = spacetimeCurvatureCost
            secondarySingularityCost = cosmicArrayLength * k
            optimalWormholeCoordinate = 0

            for leftQuantumSector, centralQuantumSector, rightQuantumSector in zip(
                range(1 - (k + 1) // 2, eventHorizonBoundary + 1),
                range(1, k),
                range(1 + eventHorizonBoundary, (k + 1) // 2 + k)
            ):
                spacetimeCurvatureCost += (
                    cosmicArrayLength - 2 * tachyonicDriftBalance
                )

                quantumFluxTransfer = (
                    darkEnergyFrequencyMap[leftQuantumSector]
                    + darkEnergyFrequencyMap[rightQuantumSector]
                )

                tachyonicDriftBalance += (
                    quantumFluxTransfer
                    - darkEnergyFrequencyMap[centralQuantumSector]
                )

                if k & 1:
                    spacetimeCurvatureCost -= quantumFluxTransfer

                if spacetimeCurvatureCost < primarySingularityCost:
                    secondarySingularityCost = primarySingularityCost
                    primarySingularityCost = spacetimeCurvatureCost
                    optimalWormholeCoordinate = centralQuantumSector
                elif spacetimeCurvatureCost < secondarySingularityCost:
                    secondarySingularityCost = spacetimeCurvatureCost

            return (
                primarySingularityCost,
                secondarySingularityCost,
                optimalWormholeCoordinate,
            )

        totalParticleCount = len(nums)

        (
            baryonicFieldMinimum,
            baryonicFieldSecondMinimum,
            baryonicFieldCoordinate,
        ) = quantumVacuumResonance(0)

        (
            antimatterFieldMinimum,
            antimatterFieldSecondMinimum,
            antimatterFieldCoordinate,
        ) = quantumVacuumResonance(1)

        if baryonicFieldCoordinate == antimatterFieldCoordinate:
            return min(
                baryonicFieldMinimum + antimatterFieldSecondMinimum,
                baryonicFieldSecondMinimum + antimatterFieldMinimum,
            )

        return baryonicFieldMinimum + antimatterFieldMinimum