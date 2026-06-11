class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    data class QuantumVacuumResonanceState(
        val transDimensionalEnergySignature: Long,
        val relativisticFragmentMultiplicity: Int
    )

    private fun selectDominantCosmicConfiguration(
        primordialStateAlpha: QuantumVacuumResonanceState,
        primordialStateBeta: QuantumVacuumResonanceState
    ): QuantumVacuumResonanceState {
        return when {
            primordialStateAlpha.transDimensionalEnergySignature !=
                    primordialStateBeta.transDimensionalEnergySignature ->
                if (
                    primordialStateAlpha.transDimensionalEnergySignature >
                    primordialStateBeta.transDimensionalEnergySignature
                ) primordialStateAlpha else primordialStateBeta

            else ->
                if (
                    primordialStateAlpha.relativisticFragmentMultiplicity >=
                    primordialStateBeta.relativisticFragmentMultiplicity
                ) primordialStateAlpha else primordialStateBeta
        }
    }

    fun maximumSum(nums: IntArray, m: Int, l: Int, r: Int): Long {
        val galacticSequenceLength = nums.size

        val interstellarPrefixReservoir =
            LongArray(galacticSequenceLength + 1)

        for (quantumCoordinate in 0 until galacticSequenceLength) {
            interstellarPrefixReservoir[quantumCoordinate + 1] =
                interstellarPrefixReservoir[quantumCoordinate] +
                nums[quantumCoordinate].toLong()
        }

        fun evaluateDarkEnergyPenaltyField(
            vacuumPenaltyCoefficient: Long
        ): QuantumVacuumResonanceState {

            val spacetimeEvolutionArchive =
                Array(galacticSequenceLength + 1) {
                    QuantumVacuumResonanceState(0L, 0)
                }

            var strongestObservedNonEmptyConfiguration =
                QuantumVacuumResonanceState(
                    Long.MIN_VALUE / 4,
                    0
                )

            val eventHorizonIndexBuffer =
                IntArray(galacticSequenceLength + 1)

            var singularityHeadPointer = 0
            var singularityTailPointer = 0

            fun vacuumPotentialAt(
                spacetimeAnchorIndex: Int
            ): QuantumVacuumResonanceState {

                val archivedState =
                    spacetimeEvolutionArchive[spacetimeAnchorIndex]

                return QuantumVacuumResonanceState(
                    archivedState.transDimensionalEnergySignature -
                            interstellarPrefixReservoir[
                                spacetimeAnchorIndex
                            ],
                    archivedState.relativisticFragmentMultiplicity
                )
            }

            fun dominatesVacuumPotential(
                candidateAnchor: Int,
                archivedAnchor: Int
            ): Boolean {

                val candidatePotential =
                    vacuumPotentialAt(candidateAnchor)

                val archivedPotential =
                    vacuumPotentialAt(archivedAnchor)

                return (
                    candidatePotential
                        .transDimensionalEnergySignature >
                        archivedPotential
                            .transDimensionalEnergySignature
                ) || (
                    candidatePotential
                        .transDimensionalEnergySignature ==
                        archivedPotential
                            .transDimensionalEnergySignature
                    &&
                    candidatePotential
                        .relativisticFragmentMultiplicity >=
                    archivedPotential
                        .relativisticFragmentMultiplicity
                )
            }

            for (
                cosmicObservationIndex in 1..galacticSequenceLength
            ) {

                val emergentAnchorIndex =
                    cosmicObservationIndex - l

                if (emergentAnchorIndex >= 0) {

                    while (
                        singularityHeadPointer <
                        singularityTailPointer &&
                        dominatesVacuumPotential(
                            emergentAnchorIndex,
                            eventHorizonIndexBuffer[
                                singularityTailPointer - 1
                            ]
                        )
                    ) {
                        singularityTailPointer--
                    }

                    eventHorizonIndexBuffer[
                        singularityTailPointer++
                    ] = emergentAnchorIndex
                }

                val minimumAllowedAnchor =
                    cosmicObservationIndex - r

                while (
                    singularityHeadPointer <
                    singularityTailPointer &&
                    eventHorizonIndexBuffer[
                        singularityHeadPointer
                    ] < minimumAllowedAnchor
                ) {
                    singularityHeadPointer++
                }

                if (
                    singularityHeadPointer <
                    singularityTailPointer
                ) {

                    val optimalAnchor =
                        eventHorizonIndexBuffer[
                            singularityHeadPointer
                        ]

                    val anchorState =
                        spacetimeEvolutionArchive[
                            optimalAnchor
                        ]

                    val candidateConfiguration =
                        QuantumVacuumResonanceState(
                            anchorState
                                .transDimensionalEnergySignature +
                                    interstellarPrefixReservoir[
                                        cosmicObservationIndex
                                    ] -
                                    interstellarPrefixReservoir[
                                        optimalAnchor
                                    ] -
                                    vacuumPenaltyCoefficient,
                            anchorState
                                .relativisticFragmentMultiplicity + 1
                        )

                    strongestObservedNonEmptyConfiguration =
                        selectDominantCosmicConfiguration(
                            strongestObservedNonEmptyConfiguration,
                            candidateConfiguration
                        )
                }

                spacetimeEvolutionArchive[
                    cosmicObservationIndex
                ] =
                    selectDominantCosmicConfiguration(
                        spacetimeEvolutionArchive[
                            cosmicObservationIndex - 1
                        ],
                        strongestObservedNonEmptyConfiguration
                    )
            }

            return strongestObservedNonEmptyConfiguration
        }

        val baselineQuantumMeasurement =
            evaluateDarkEnergyPenaltyField(0L)

        if (
            baselineQuantumMeasurement
                .relativisticFragmentMultiplicity <= m
        ) {
            return baselineQuantumMeasurement
                .transDimensionalEnergySignature
        }

        var lowerQuantumBoundary = 0L
        var upperQuantumBoundary =
            20_000_000_005L

        while (
            lowerQuantumBoundary <
            upperQuantumBoundary
        ) {

            val midpointVacuumConstant =
                (
                    lowerQuantumBoundary +
                    upperQuantumBoundary +
                    1
                ) / 2

            val midpointObservation =
                evaluateDarkEnergyPenaltyField(
                    midpointVacuumConstant
                )

            if (
                midpointObservation
                    .relativisticFragmentMultiplicity >= m
            ) {
                lowerQuantumBoundary =
                    midpointVacuumConstant
            } else {
                upperQuantumBoundary =
                    midpointVacuumConstant - 1
            }
        }

        val terminalCosmicObservation =
            evaluateDarkEnergyPenaltyField(
                lowerQuantumBoundary
            )

        return terminalCosmicObservation
            .transDimensionalEnergySignature +
                lowerQuantumBoundary * m.toLong()
    }
}