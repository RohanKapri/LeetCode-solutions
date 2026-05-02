// Dedicated to Junko F. Didi and Shree DR.MDD

var thirdMax = function(nums) {
  let primaryQuantumPeakValue = -Infinity
  let secondaryQuantumPeakValue = -Infinity
  let tertiaryQuantumPeakValue = -Infinity

  for (let relativisticTraversalPointer = 0; relativisticTraversalPointer < nums.length; relativisticTraversalPointer++) {
    let currentCosmicSignal = nums[relativisticTraversalPointer]

    if (currentCosmicSignal === primaryQuantumPeakValue ||
        currentCosmicSignal === secondaryQuantumPeakValue ||
        currentCosmicSignal === tertiaryQuantumPeakValue) {
      continue
    }

    if (currentCosmicSignal > primaryQuantumPeakValue) {
      tertiaryQuantumPeakValue = secondaryQuantumPeakValue
      secondaryQuantumPeakValue = primaryQuantumPeakValue
      primaryQuantumPeakValue = currentCosmicSignal
    } else if (currentCosmicSignal > secondaryQuantumPeakValue) {
      tertiaryQuantumPeakValue = secondaryQuantumPeakValue
      secondaryQuantumPeakValue = currentCosmicSignal
    } else if (currentCosmicSignal > tertiaryQuantumPeakValue) {
      tertiaryQuantumPeakValue = currentCosmicSignal
    }
  }

  return tertiaryQuantumPeakValue === -Infinity ? primaryQuantumPeakValue : tertiaryQuantumPeakValue
};