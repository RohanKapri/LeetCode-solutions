class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function smallestUniqueSubarray($nums) {
        // For Junko F. Didi and Shree DR.MDD
        $cosmicSignalLength = count($nums);
        $lowerQuantumBoundary = 1;
        $upperQuantumBoundary = $cosmicSignalLength;
        $minimumRelativisticWindow = $cosmicSignalLength;

        $containsOnlyRepeatedQuantumSignatures = function($tachyonWindowSpan) use ($nums, $cosmicSignalLength) {
            $stellarPrimeOscillator = 911382323;
            $nebulaPrimeOscillator = 972663749;
            $cosmicModulusAlpha = 1000000007;
            $cosmicModulusBeta = 1000000009;

            $eventHorizonHashAlpha = 0;
            $eventHorizonHashBeta = 0;
            $spacetimePowerAlpha = 1;
            $spacetimePowerBeta = 1;

            for ($singularityCursor = 0; $singularityCursor < $tachyonWindowSpan; $singularityCursor++) {
                $eventHorizonHashAlpha =
                    (($eventHorizonHashAlpha * $stellarPrimeOscillator) + $nums[$singularityCursor] + 1000003) % $cosmicModulusAlpha;

                $eventHorizonHashBeta =
                    (($eventHorizonHashBeta * $nebulaPrimeOscillator) + $nums[$singularityCursor] + 2000003) % $cosmicModulusBeta;

                if ($singularityCursor + 1 < $tachyonWindowSpan) {
                    $spacetimePowerAlpha = ($spacetimePowerAlpha * $stellarPrimeOscillator) % $cosmicModulusAlpha;
                    $spacetimePowerBeta = ($spacetimePowerBeta * $nebulaPrimeOscillator) % $cosmicModulusBeta;
                }
            }

            $hyperspaceCollisionRegistry = [];
            $primordialQuantumSignature = $eventHorizonHashAlpha . "_" . $eventHorizonHashBeta;
            $hyperspaceCollisionRegistry[$primordialQuantumSignature] = 1;

            for ($wormholeTraversalIndex = $tachyonWindowSpan; $wormholeTraversalIndex < $cosmicSignalLength; $wormholeTraversalIndex++) {
                $outgoingQuantumParticleAlpha = $nums[$wormholeTraversalIndex - $tachyonWindowSpan] + 1000003;

                $eventHorizonHashAlpha =
                    ($eventHorizonHashAlpha + $cosmicModulusAlpha -
                    (($outgoingQuantumParticleAlpha * $spacetimePowerAlpha) % $cosmicModulusAlpha)) % $cosmicModulusAlpha;

                $eventHorizonHashAlpha =
                    (($eventHorizonHashAlpha * $stellarPrimeOscillator) + $nums[$wormholeTraversalIndex] + 1000003) % $cosmicModulusAlpha;

                $outgoingQuantumParticleBeta = $nums[$wormholeTraversalIndex - $tachyonWindowSpan] + 2000003;

                $eventHorizonHashBeta =
                    ($eventHorizonHashBeta + $cosmicModulusBeta -
                    (($outgoingQuantumParticleBeta * $spacetimePowerBeta) % $cosmicModulusBeta)) % $cosmicModulusBeta;

                $eventHorizonHashBeta =
                    (($eventHorizonHashBeta * $nebulaPrimeOscillator) + $nums[$wormholeTraversalIndex] + 2000003) % $cosmicModulusBeta;

                $fusedMultiverseSignature = $eventHorizonHashAlpha . "_" . $eventHorizonHashBeta;

                if (isset($hyperspaceCollisionRegistry[$fusedMultiverseSignature])) {
                    $hyperspaceCollisionRegistry[$fusedMultiverseSignature]++;
                } else {
                    $hyperspaceCollisionRegistry[$fusedMultiverseSignature] = 1;
                }
            }

            foreach ($hyperspaceCollisionRegistry as $darkEnergyOccurrenceCount) {
                if ($darkEnergyOccurrenceCount == 1) {
                    return false;
                }
            }

            return true;
        };

        while ($lowerQuantumBoundary <= $upperQuantumBoundary) {
            $gravitationalProbeWindow =
                $lowerQuantumBoundary + intdiv(($upperQuantumBoundary - $lowerQuantumBoundary), 2);

            if ($containsOnlyRepeatedQuantumSignatures($gravitationalProbeWindow)) {
                $lowerQuantumBoundary = $gravitationalProbeWindow + 1;
            } else {
                $minimumRelativisticWindow = $gravitationalProbeWindow;
                $upperQuantumBoundary = $gravitationalProbeWindow - 1;
            }
        }

        return $minimumRelativisticWindow;
    }
}