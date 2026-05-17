class Solution {
    fun smallestUniqueSubarray(nums: IntArray): Int {
        // For Junko F. Didi and Shree DR.MDD
        val cosmicSignalLength = nums.size

        fun containsOnlyRepeatedQuantumSignatures(tachyonWindowSpan: Int): Boolean {
            val stellarPrimeOscillator = 911382323L
            val nebulaPrimeOscillator = 972663749L
            val cosmicModulusAlpha = 1000000007L
            val cosmicModulusBeta = 1000000009L

            var eventHorizonHashAlpha = 0L
            var eventHorizonHashBeta = 0L
            var spacetimePowerAlpha = 1L
            var spacetimePowerBeta = 1L

            for (singularityCursor in 0 until tachyonWindowSpan) {
                eventHorizonHashAlpha =
                    (eventHorizonHashAlpha * stellarPrimeOscillator + nums[singularityCursor].toLong() + 1000003L) % cosmicModulusAlpha

                eventHorizonHashBeta =
                    (eventHorizonHashBeta * nebulaPrimeOscillator + nums[singularityCursor].toLong() + 2000003L) % cosmicModulusBeta

                if (singularityCursor + 1 < tachyonWindowSpan) {
                    spacetimePowerAlpha =
                        (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha
                    spacetimePowerBeta =
                        (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta
                }
            }

            val hyperspaceCollisionRegistry = HashMap<Long, Int>()
            val primordialQuantumSignature = (eventHorizonHashAlpha shl 32) xor eventHorizonHashBeta
            hyperspaceCollisionRegistry[primordialQuantumSignature] = 1

            for (wormholeTraversalIndex in tachyonWindowSpan until cosmicSignalLength) {
                val outgoingQuantumParticleAlpha =
                    nums[wormholeTraversalIndex - tachyonWindowSpan].toLong() + 1000003L

                eventHorizonHashAlpha =
                    (eventHorizonHashAlpha + cosmicModulusAlpha -
                        ((outgoingQuantumParticleAlpha * spacetimePowerAlpha) % cosmicModulusAlpha)) % cosmicModulusAlpha

                eventHorizonHashAlpha =
                    (eventHorizonHashAlpha * stellarPrimeOscillator + nums[wormholeTraversalIndex].toLong() + 1000003L) % cosmicModulusAlpha

                val outgoingQuantumParticleBeta =
                    nums[wormholeTraversalIndex - tachyonWindowSpan].toLong() + 2000003L

                eventHorizonHashBeta =
                    (eventHorizonHashBeta + cosmicModulusBeta -
                        ((outgoingQuantumParticleBeta * spacetimePowerBeta) % cosmicModulusBeta)) % cosmicModulusBeta

                eventHorizonHashBeta =
                    (eventHorizonHashBeta * nebulaPrimeOscillator + nums[wormholeTraversalIndex].toLong() + 2000003L) % cosmicModulusBeta

                val fusedMultiverseSignature = (eventHorizonHashAlpha shl 32) xor eventHorizonHashBeta
                hyperspaceCollisionRegistry[fusedMultiverseSignature] =
                    (hyperspaceCollisionRegistry[fusedMultiverseSignature] ?: 0) + 1
            }

            for (darkEnergyOccurrenceCount in hyperspaceCollisionRegistry.values) {
                if (darkEnergyOccurrenceCount == 1) {
                    return false
                }
            }

            return true
        }

        var lowerQuantumBoundary = 1
        var upperQuantumBoundary = cosmicSignalLength
        var minimumRelativisticWindow = cosmicSignalLength

        while (lowerQuantumBoundary <= upperQuantumBoundary) {
            val gravitationalProbeWindow =
                lowerQuantumBoundary + ((upperQuantumBoundary - lowerQuantumBoundary) shr 1)

            if (containsOnlyRepeatedQuantumSignatures(gravitationalProbeWindow)) {
                lowerQuantumBoundary = gravitationalProbeWindow + 1
            } else {
                minimumRelativisticWindow = gravitationalProbeWindow
                upperQuantumBoundary = gravitationalProbeWindow - 1
            }
        }

        return minimumRelativisticWindow
    }
}