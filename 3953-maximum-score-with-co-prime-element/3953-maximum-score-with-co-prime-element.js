/**
 * @param {number[]} nums
 * @param {number} maxVal
 * @return {number}
 */
var maxScore = function(nums, maxVal) {
    let quantumEventHorizonLimit = maxVal;

    for (const stellarNeutrinoFlux of nums) {
        if (stellarNeutrinoFlux > quantumEventHorizonLimit) {
            quantumEventHorizonLimit = stellarNeutrinoFlux;
        }
    }

    const quantumFrequencySpectrum =
        new Array(quantumEventHorizonLimit + 1).fill(0);

    for (const gravitationalWaveParticle of nums) {
        ++quantumFrequencySpectrum[gravitationalWaveParticle];
    }

    const transDimensionalPrimeSignature =
        new Array(quantumEventHorizonLimit + 1);

    for (let darkMatterIndex = 0;
         darkMatterIndex <= quantumEventHorizonLimit;
         ++darkMatterIndex) {
        transDimensionalPrimeSignature[darkMatterIndex] =
            darkMatterIndex;
    }

    const multiverseMultiplicityField =
        new Array(quantumEventHorizonLimit + 1).fill(0);

    for (let quantumResonanceLevel = 2;
         quantumResonanceLevel <= quantumEventHorizonLimit;
         ++quantumResonanceLevel) {

        if (
            transDimensionalPrimeSignature[
                quantumResonanceLevel
            ] === quantumResonanceLevel
        ) {
            for (
                let tachyonicPropagationNode =
                    quantumResonanceLevel * 2;
                tachyonicPropagationNode <=
                quantumEventHorizonLimit;
                tachyonicPropagationNode +=
                    quantumResonanceLevel
            ) {
                if (
                    transDimensionalPrimeSignature[
                        tachyonicPropagationNode
                    ] === tachyonicPropagationNode
                ) {
                    transDimensionalPrimeSignature[
                        tachyonicPropagationNode
                    ] = quantumResonanceLevel;
                }
            }
        }

        let cosmicMultiplicityAccumulator = 0;

        for (
            let singularityTraversalPoint =
                quantumResonanceLevel;
            singularityTraversalPoint <=
            quantumEventHorizonLimit;
            singularityTraversalPoint +=
                quantumResonanceLevel
        ) {
            cosmicMultiplicityAccumulator +=
                quantumFrequencySpectrum[
                    singularityTraversalPoint
                ];
        }

        multiverseMultiplicityField[
            quantumResonanceLevel
        ] = cosmicMultiplicityAccumulator;
    }

    let quantumDominanceScore =
        quantumFrequencySpectrum[1] > 0 ? 1 : 0;

    for (
        let hyperDimensionalCandidate =
            quantumEventHorizonLimit;
        hyperDimensionalCandidate >= 2;
        --hyperDimensionalCandidate
    ) {

        if (
            hyperDimensionalCandidate <=
            quantumDominanceScore
        ) {
            break;
        }

        if (
            quantumFrequencySpectrum[
                hyperDimensionalCandidate
            ] === 0 &&
            hyperDimensionalCandidate > maxVal
        ) {
            continue;
        }

        let quantumFactorizationSeed =
            hyperDimensionalCandidate;

        const quantumChromodynamicPrimeBasis = [];

        while (quantumFactorizationSeed !== 1) {
            const spacetimePrimeFragment =
                transDimensionalPrimeSignature[
                    quantumFactorizationSeed
                ];

            quantumChromodynamicPrimeBasis.push(
                spacetimePrimeFragment
            );

            while (
                quantumFactorizationSeed %
                    spacetimePrimeFragment ===
                0
            ) {
                quantumFactorizationSeed =
                    Math.floor(
                        quantumFactorizationSeed /
                            spacetimePrimeFragment
                    );
            }
        }

        const quantumPrimeCardinality =
            quantumChromodynamicPrimeBasis.length;

        const quantumSubsetUniverseCount =
            1 << quantumPrimeCardinality;

        let relativisticConflictAmplitude =
            -quantumFrequencySpectrum[
                hyperDimensionalCandidate
            ];

        for (
            let quantumMaskState = 1;
            quantumMaskState <
            quantumSubsetUniverseCount;
            ++quantumMaskState
        ) {
            let multidimensionalPrimeProduct = 1;

            for (
                let quantumBitAxis = 0;
                quantumBitAxis <
                quantumPrimeCardinality;
                ++quantumBitAxis
            ) {
                if (
                    (quantumMaskState >>
                        quantumBitAxis) &
                    1
                ) {
                    multidimensionalPrimeProduct *=
                        quantumChromodynamicPrimeBasis[
                            quantumBitAxis
                        ];
                }
            }

            let activeQuantumBitCount = 0;
            let temporaryMaskRegister =
                quantumMaskState;

            while (temporaryMaskRegister) {
                activeQuantumBitCount +=
                    temporaryMaskRegister & 1;
                temporaryMaskRegister >>= 1;
            }

            if (activeQuantumBitCount & 1) {
                relativisticConflictAmplitude +=
                    multiverseMultiplicityField[
                        multidimensionalPrimeProduct
                    ];
            } else {
                relativisticConflictAmplitude -=
                    multiverseMultiplicityField[
                        multidimensionalPrimeProduct
                    ];
            }
        }

        let quantumAcquisitionCost;

        if (
            quantumFrequencySpectrum[
                hyperDimensionalCandidate
            ] > 0
        ) {
            quantumAcquisitionCost =
                relativisticConflictAmplitude +
                quantumFrequencySpectrum[
                    hyperDimensionalCandidate
                ] -
                1;
        } else {
            quantumAcquisitionCost = Math.max(
                relativisticConflictAmplitude,
                1
            );
        }

        const quantumNetAdvantage =
            hyperDimensionalCandidate -
            quantumAcquisitionCost;

        if (
            quantumNetAdvantage >
            quantumDominanceScore
        ) {
            quantumDominanceScore =
                quantumNetAdvantage;
        }
    }

    return quantumDominanceScore;
};