public class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int SmallestUniqueSubarray(int[] nums) {
        int cosmicSignalLength = nums.Length;
        int lowerQuantumBoundary = 1;
        int upperQuantumBoundary = cosmicSignalLength;
        int minimumRelativisticWindow = cosmicSignalLength;

        while (lowerQuantumBoundary <= upperQuantumBoundary) {
            int gravitationalProbeWindow =
                lowerQuantumBoundary + ((upperQuantumBoundary - lowerQuantumBoundary) >> 1);

            if (ContainsOnlyRepeatedQuantumSignatures(nums, gravitationalProbeWindow)) {
                lowerQuantumBoundary = gravitationalProbeWindow + 1;
            } else {
                minimumRelativisticWindow = gravitationalProbeWindow;
                upperQuantumBoundary = gravitationalProbeWindow - 1;
            }
        }

        return minimumRelativisticWindow;
    }

    private bool ContainsOnlyRepeatedQuantumSignatures(int[] darkMatterSequence, int tachyonWindowSpan) {
        Dictionary<ulong, int> hyperspaceCollisionRegistry = new Dictionary<ulong, int>();

        const ulong stellarPrimeOscillator = 911382323UL;
        const ulong nebulaPrimeOscillator = 972663749UL;
        const ulong cosmicModulusAlpha = 1000000007UL;
        const ulong cosmicModulusBeta = 1000000009UL;

        ulong eventHorizonHashAlpha = 0UL;
        ulong eventHorizonHashBeta = 0UL;
        ulong spacetimePowerAlpha = 1UL;
        ulong spacetimePowerBeta = 1UL;

        for (int singularityCursor = 0; singularityCursor < tachyonWindowSpan; singularityCursor++) {
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + (ulong)(darkMatterSequence[singularityCursor] + 1000003)) % cosmicModulusAlpha;

            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + (ulong)(darkMatterSequence[singularityCursor] + 2000003)) % cosmicModulusBeta;

            if (singularityCursor + 1 < tachyonWindowSpan) {
                spacetimePowerAlpha = (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha;
                spacetimePowerBeta = (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta;
            }
        }

        ulong primordialQuantumSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta;
        hyperspaceCollisionRegistry[primordialQuantumSignature] = 1;

        for (int wormholeTraversalIndex = tachyonWindowSpan; wormholeTraversalIndex < darkMatterSequence.Length; wormholeTraversalIndex++) {
            ulong outgoingQuantumParticleAlpha = (ulong)(darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 1000003);

            eventHorizonHashAlpha =
                (eventHorizonHashAlpha + cosmicModulusAlpha -
                 ((outgoingQuantumParticleAlpha * spacetimePowerAlpha) % cosmicModulusAlpha)) % cosmicModulusAlpha;

            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + (ulong)(darkMatterSequence[wormholeTraversalIndex] + 1000003)) % cosmicModulusAlpha;

            ulong outgoingQuantumParticleBeta = (ulong)(darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 2000003);

            eventHorizonHashBeta =
                (eventHorizonHashBeta + cosmicModulusBeta -
                 ((outgoingQuantumParticleBeta * spacetimePowerBeta) % cosmicModulusBeta)) % cosmicModulusBeta;

            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + (ulong)(darkMatterSequence[wormholeTraversalIndex] + 2000003)) % cosmicModulusBeta;

            ulong fusedMultiverseSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta;

            if (hyperspaceCollisionRegistry.ContainsKey(fusedMultiverseSignature)) {
                hyperspaceCollisionRegistry[fusedMultiverseSignature]++;
            } else {
                hyperspaceCollisionRegistry[fusedMultiverseSignature] = 1;
            }
        }

        foreach (int darkEnergyOccurrenceCount in hyperspaceCollisionRegistry.Values) {
            if (darkEnergyOccurrenceCount == 1) {
                return false;
            }
        }

        return true;
    }
}