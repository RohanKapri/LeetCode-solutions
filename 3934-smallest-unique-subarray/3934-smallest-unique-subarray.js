/**
 * @param {number[]} nums
 * @return {number}
 */
var smallestUniqueSubarray = function(nums) {
    // For Junko F. Didi and Shree DR.MDD
    const cosmicSignalLength = nums.length;
    let lowerQuantumBoundary = 1;
    let upperQuantumBoundary = cosmicSignalLength;
    let minimumRelativisticWindow = cosmicSignalLength;

    const containsOnlyRepeatedQuantumSignatures = (darkMatterSequence, tachyonWindowSpan) => {
        const hyperspaceCollisionRegistry = new Map();

        const stellarPrimeOscillator = 911382323n;
        const nebulaPrimeOscillator = 972663749n;
        const cosmicModulusAlpha = 1000000007n;
        const cosmicModulusBeta = 1000000009n;

        let eventHorizonHashAlpha = 0n;
        let eventHorizonHashBeta = 0n;
        let spacetimePowerAlpha = 1n;
        let spacetimePowerBeta = 1n;

        for (let singularityCursor = 0; singularityCursor < tachyonWindowSpan; singularityCursor++) {
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + BigInt(darkMatterSequence[singularityCursor] + 1000003)) % cosmicModulusAlpha;

            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + BigInt(darkMatterSequence[singularityCursor] + 2000003)) % cosmicModulusBeta;

            if (singularityCursor + 1 < tachyonWindowSpan) {
                spacetimePowerAlpha = (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha;
                spacetimePowerBeta = (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta;
            }
        }

        const primordialQuantumSignature = `${eventHorizonHashAlpha}_${eventHorizonHashBeta}`;
        hyperspaceCollisionRegistry.set(primordialQuantumSignature, 1);

        for (let wormholeTraversalIndex = tachyonWindowSpan; wormholeTraversalIndex < darkMatterSequence.length; wormholeTraversalIndex++) {
            const outgoingQuantumParticleAlpha = BigInt(darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 1000003);
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha - (outgoingQuantumParticleAlpha * spacetimePowerAlpha) % cosmicModulusAlpha + cosmicModulusAlpha) % cosmicModulusAlpha;
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + BigInt(darkMatterSequence[wormholeTraversalIndex] + 1000003)) % cosmicModulusAlpha;

            const outgoingQuantumParticleBeta = BigInt(darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 2000003);
            eventHorizonHashBeta =
                (eventHorizonHashBeta - (outgoingQuantumParticleBeta * spacetimePowerBeta) % cosmicModulusBeta + cosmicModulusBeta) % cosmicModulusBeta;
            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + BigInt(darkMatterSequence[wormholeTraversalIndex] + 2000003)) % cosmicModulusBeta;

            const fusedMultiverseSignature = `${eventHorizonHashAlpha}_${eventHorizonHashBeta}`;
            hyperspaceCollisionRegistry.set(
                fusedMultiverseSignature,
                (hyperspaceCollisionRegistry.get(fusedMultiverseSignature) || 0) + 1
            );
        }

        for (const darkEnergyOccurrenceCount of hyperspaceCollisionRegistry.values()) {
            if (darkEnergyOccurrenceCount === 1) {
                return false;
            }
        }

        return true;
    };

    while (lowerQuantumBoundary <= upperQuantumBoundary) {
        const gravitationalProbeWindow =
            lowerQuantumBoundary + ((upperQuantumBoundary - lowerQuantumBoundary) >> 1);

        if (containsOnlyRepeatedQuantumSignatures(nums, gravitationalProbeWindow)) {
            lowerQuantumBoundary = gravitationalProbeWindow + 1;
        } else {
            minimumRelativisticWindow = gravitationalProbeWindow;
            upperQuantumBoundary = gravitationalProbeWindow - 1;
        }
    }

    return minimumRelativisticWindow;
};