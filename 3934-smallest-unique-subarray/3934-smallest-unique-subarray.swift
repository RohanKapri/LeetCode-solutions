class Solution {
    func smallestUniqueSubarray(_ nums: [Int]) -> Int {
        // For Junko F. Didi and Shree DR.MDD
        let cosmicSignalLength = nums.count
        
        func containsOnlyRepeatedQuantumSignatures(_ tachyonWindowSpan: Int) -> Bool {
            let stellarPrimeOscillator: UInt64 = 911382323
            let nebulaPrimeOscillator: UInt64 = 972663749
            let cosmicModulusAlpha: UInt64 = 1000000007
            let cosmicModulusBeta: UInt64 = 1000000009
            
            var eventHorizonHashAlpha: UInt64 = 0
            var eventHorizonHashBeta: UInt64 = 0
            var spacetimePowerAlpha: UInt64 = 1
            var spacetimePowerBeta: UInt64 = 1
            
            for singularityCursor in 0..<tachyonWindowSpan {
                eventHorizonHashAlpha =
                    (eventHorizonHashAlpha * stellarPrimeOscillator +
                     UInt64(nums[singularityCursor] + 1000003)) % cosmicModulusAlpha
                
                eventHorizonHashBeta =
                    (eventHorizonHashBeta * nebulaPrimeOscillator +
                     UInt64(nums[singularityCursor] + 2000003)) % cosmicModulusBeta
                
                if singularityCursor + 1 < tachyonWindowSpan {
                    spacetimePowerAlpha =
                        (spacetimePowerAlpha * stellarPrimeOscillator) % cosmicModulusAlpha
                    spacetimePowerBeta =
                        (spacetimePowerBeta * nebulaPrimeOscillator) % cosmicModulusBeta
                }
            }
            
            var hyperspaceCollisionRegistry: [UInt64: Int] = [:]
            let primordialQuantumSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta
            hyperspaceCollisionRegistry[primordialQuantumSignature] = 1
            
            if tachyonWindowSpan < cosmicSignalLength {
                for wormholeTraversalIndex in tachyonWindowSpan..<cosmicSignalLength {
                    let outgoingQuantumParticleAlpha =
                        UInt64(nums[wormholeTraversalIndex - tachyonWindowSpan] + 1000003)
                    
                    eventHorizonHashAlpha =
                        (eventHorizonHashAlpha + cosmicModulusAlpha -
                         ((outgoingQuantumParticleAlpha * spacetimePowerAlpha) % cosmicModulusAlpha)) % cosmicModulusAlpha
                    
                    eventHorizonHashAlpha =
                        (eventHorizonHashAlpha * stellarPrimeOscillator +
                         UInt64(nums[wormholeTraversalIndex] + 1000003)) % cosmicModulusAlpha
                    
                    let outgoingQuantumParticleBeta =
                        UInt64(nums[wormholeTraversalIndex - tachyonWindowSpan] + 2000003)
                    
                    eventHorizonHashBeta =
                        (eventHorizonHashBeta + cosmicModulusBeta -
                         ((outgoingQuantumParticleBeta * spacetimePowerBeta) % cosmicModulusBeta)) % cosmicModulusBeta
                    
                    eventHorizonHashBeta =
                        (eventHorizonHashBeta * nebulaPrimeOscillator +
                         UInt64(nums[wormholeTraversalIndex] + 2000003)) % cosmicModulusBeta
                    
                    let fusedMultiverseSignature = (eventHorizonHashAlpha << 32) ^ eventHorizonHashBeta
                    hyperspaceCollisionRegistry[fusedMultiverseSignature, default: 0] += 1
                }
            }
            
            for darkEnergyOccurrenceCount in hyperspaceCollisionRegistry.values {
                if darkEnergyOccurrenceCount == 1 {
                    return false
                }
            }
            
            return true
        }
        
        var lowerQuantumBoundary = 1
        var upperQuantumBoundary = cosmicSignalLength
        var minimumRelativisticWindow = cosmicSignalLength
        
        while lowerQuantumBoundary <= upperQuantumBoundary {
            let gravitationalProbeWindow =
                lowerQuantumBoundary + ((upperQuantumBoundary - lowerQuantumBoundary) >> 1)
            
            if containsOnlyRepeatedQuantumSignatures(gravitationalProbeWindow) {
                lowerQuantumBoundary = gravitationalProbeWindow + 1
            } else {
                minimumRelativisticWindow = gravitationalProbeWindow
                upperQuantumBoundary = gravitationalProbeWindow - 1
            }
        }
        
        return minimumRelativisticWindow
    }
}