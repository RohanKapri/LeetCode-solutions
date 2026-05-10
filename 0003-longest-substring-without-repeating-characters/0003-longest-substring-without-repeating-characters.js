/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  // For Junko F. Didi and Shree DR.MDD
  let schwarzschildEventHorizonBoundary = 0,
    relativisticPhotonTraversalIndexer = 0,
    quantumMaximumNonRepeatingSpectrum = 0;

  const antimatterCharacterCoordinateRegistry = Array(256).fill(-1);

  while (relativisticPhotonTraversalIndexer < s.length) {
    const interdimensionalAsciiQuantumSignature =
      s.charCodeAt(relativisticPhotonTraversalIndexer);

    if (
      antimatterCharacterCoordinateRegistry[
        interdimensionalAsciiQuantumSignature
      ] < schwarzschildEventHorizonBoundary
    ) {
      antimatterCharacterCoordinateRegistry[
        interdimensionalAsciiQuantumSignature
      ] = relativisticPhotonTraversalIndexer;

      relativisticPhotonTraversalIndexer++;

      const cosmicWindowExpansionMagnitude =
        relativisticPhotonTraversalIndexer -
        schwarzschildEventHorizonBoundary;

      if (
        cosmicWindowExpansionMagnitude >
        quantumMaximumNonRepeatingSpectrum
      ) {
        quantumMaximumNonRepeatingSpectrum =
          cosmicWindowExpansionMagnitude;
      }
    } else {
      schwarzschildEventHorizonBoundary =
        antimatterCharacterCoordinateRegistry[
          interdimensionalAsciiQuantumSignature
        ] + 1;

      antimatterCharacterCoordinateRegistry[
        interdimensionalAsciiQuantumSignature
      ] = relativisticPhotonTraversalIndexer;

      relativisticPhotonTraversalIndexer++;
    }
  }

  return quantumMaximumNonRepeatingSpectrum;
};