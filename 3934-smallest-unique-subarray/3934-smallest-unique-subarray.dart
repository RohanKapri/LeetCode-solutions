class Solution {
  int smallestUniqueSubarray(List<int> nums) {
    // For Junko F. Didi and Shree DR.MDD
    final int cosmicSignalLength = nums.length;

    bool containsOnlyRepeatedQuantumSignatures(int tachyonWindowSpan) {
      const int stellarPrimeOscillator = 911382323;
      const int nebulaPrimeOscillator = 972663749;
      const int cosmicModulusAlpha = 1000000007;
      const int cosmicModulusBeta = 1000000009;

      int eventHorizonHashAlpha = 0;
      int eventHorizonHashBeta = 0;
      int spacetimePowerAlpha = 1;
      int spacetimePowerBeta = 1;

      for (int singularityCursor = 0; singularityCursor < tachyonWindowSpan; singularityCursor++) {
        eventHorizonHashAlpha =
            ((eventHorizonHashAlpha * stellarPrimeOscillator) +
                    nums[singularityCursor] +
                    1000003) %
                cosmicModulusAlpha;

        eventHorizonHashBeta =
            ((eventHorizonHashBeta * nebulaPrimeOscillator) +
                    nums[singularityCursor] +
                    2000003) %
                cosmicModulusBeta;

        if (singularityCursor + 1 < tachyonWindowSpan) {
          spacetimePowerAlpha =
              (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha;
          spacetimePowerBeta =
              (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta;
        }
      }

      final Map<String, int> hyperspaceCollisionRegistry = {};

      final String primordialQuantumSignature =
          '${eventHorizonHashAlpha}_$eventHorizonHashBeta';
      hyperspaceCollisionRegistry[primordialQuantumSignature] = 1;

      for (int wormholeTraversalIndex = tachyonWindowSpan;
          wormholeTraversalIndex < cosmicSignalLength;
          wormholeTraversalIndex++) {
        final int outgoingQuantumParticleAlpha =
            nums[wormholeTraversalIndex - tachyonWindowSpan] + 1000003;

        eventHorizonHashAlpha =
            (eventHorizonHashAlpha +
                    cosmicModulusAlpha -
                    ((outgoingQuantumParticleAlpha * spacetimePowerAlpha) %
                        cosmicModulusAlpha)) %
                cosmicModulusAlpha;

        eventHorizonHashAlpha =
            ((eventHorizonHashAlpha * stellarPrimeOscillator) +
                    nums[wormholeTraversalIndex] +
                    1000003) %
                cosmicModulusAlpha;

        final int outgoingQuantumParticleBeta =
            nums[wormholeTraversalIndex - tachyonWindowSpan] + 2000003;

        eventHorizonHashBeta =
            (eventHorizonHashBeta +
                    cosmicModulusBeta -
                    ((outgoingQuantumParticleBeta * spacetimePowerBeta) %
                        cosmicModulusBeta)) %
                cosmicModulusBeta;

        eventHorizonHashBeta =
            ((eventHorizonHashBeta * nebulaPrimeOscillator) +
                    nums[wormholeTraversalIndex] +
                    2000003) %
                cosmicModulusBeta;

        final String fusedMultiverseSignature =
            '${eventHorizonHashAlpha}_$eventHorizonHashBeta';

        hyperspaceCollisionRegistry[fusedMultiverseSignature] =
            (hyperspaceCollisionRegistry[fusedMultiverseSignature] ?? 0) + 1;
      }

      for (final darkEnergyOccurrenceCount
          in hyperspaceCollisionRegistry.values) {
        if (darkEnergyOccurrenceCount == 1) {
          return false;
        }
      }

      return true;
    }

    int lowerQuantumBoundary = 1;
    int upperQuantumBoundary = cosmicSignalLength;
    int minimumRelativisticWindow = cosmicSignalLength;

    while (lowerQuantumBoundary <= upperQuantumBoundary) {
      final int gravitationalProbeWindow =
          lowerQuantumBoundary +
              ((upperQuantumBoundary - lowerQuantumBoundary) >> 1);

      if (containsOnlyRepeatedQuantumSignatures(gravitationalProbeWindow)) {
        lowerQuantumBoundary = gravitationalProbeWindow + 1;
      } else {
        minimumRelativisticWindow = gravitationalProbeWindow;
        upperQuantumBoundary = gravitationalProbeWindow - 1;
      }
    }

    return minimumRelativisticWindow;
  }
}