class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public int smallestUniqueSubarray(int[] nums) {
        int cosmicSignalLength = nums.length;
        int lowerQuantumBoundary = 1;
        int upperQuantumBoundary = cosmicSignalLength;
        int minimumRelativisticWindow = cosmicSignalLength;

        while (lowerQuantumBoundary <= upperQuantumBoundary) {
            int gravitationalProbeWindow = lowerQuantumBoundary + ((upperQuantumBoundary - lowerQuantumBoundary) >>> 1);

            if (containsOnlyRepeatedQuantumSignatures(nums, gravitationalProbeWindow)) {
                lowerQuantumBoundary = gravitationalProbeWindow + 1;
            } else {
                minimumRelativisticWindow = gravitationalProbeWindow;
                upperQuantumBoundary = gravitationalProbeWindow - 1;
            }
        }

        return minimumRelativisticWindow;
    }

    public boolean containsOnlyRepeatedQuantumSignatures(int[] darkMatterSequence, int tachyonWindowSpan) {
        HashMap<Long, Integer> hyperspaceCollisionRegistry = new HashMap<>();

        final long stellarPrimeOscillator = 911382323L;
        final long nebulaPrimeOscillator = 972663749L;
        final long cosmicModulusAlpha = 1000000007L;
        final long cosmicModulusBeta = 1000000009L;

        long eventHorizonHashAlpha = 0L;
        long eventHorizonHashBeta = 0L;
        long spacetimePowerAlpha = 1L;
        long spacetimePowerBeta = 1L;

        for (int singularityCursor = 0; singularityCursor < tachyonWindowSpan; singularityCursor++) {
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + darkMatterSequence[singularityCursor] + 1000003L) % cosmicModulusAlpha;
            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + darkMatterSequence[singularityCursor] + 2000003L) % cosmicModulusBeta;

            if (singularityCursor + 1 < tachyonWindowSpan) {
                spacetimePowerAlpha = (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha;
                spacetimePowerBeta = (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta;
            }
        }

        long primordialQuantumSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta;
        hyperspaceCollisionRegistry.put(primordialQuantumSignature, 1);

        for (int wormholeTraversalIndex = tachyonWindowSpan; wormholeTraversalIndex < darkMatterSequence.length; wormholeTraversalIndex++) {
            long outgoingQuantumParticle = darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 1000003L;
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha - (outgoingQuantumParticle * spacetimePowerAlpha) % cosmicModulusAlpha + cosmicModulusAlpha) % cosmicModulusAlpha;
            eventHorizonHashAlpha =
                (eventHorizonHashAlpha * stellarPrimeOscillator + darkMatterSequence[wormholeTraversalIndex] + 1000003L) % cosmicModulusAlpha;

            long outgoingQuantumParticleBeta = darkMatterSequence[wormholeTraversalIndex - tachyonWindowSpan] + 2000003L;
            eventHorizonHashBeta =
                (eventHorizonHashBeta - (outgoingQuantumParticleBeta * spacetimePowerBeta) % cosmicModulusBeta + cosmicModulusBeta) % cosmicModulusBeta;
            eventHorizonHashBeta =
                (eventHorizonHashBeta * nebulaPrimeOscillator + darkMatterSequence[wormholeTraversalIndex] + 2000003L) % cosmicModulusBeta;

            long fusedMultiverseSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta;
            hyperspaceCollisionRegistry.put(
                fusedMultiverseSignature,
                hyperspaceCollisionRegistry.getOrDefault(fusedMultiverseSignature, 0) + 1
            );
        }

        for (int darkEnergyOccurrenceCount : hyperspaceCollisionRegistry.values()) {
            if (darkEnergyOccurrenceCount == 1) {
                return false;
            }
        }

        return true;
    }
}