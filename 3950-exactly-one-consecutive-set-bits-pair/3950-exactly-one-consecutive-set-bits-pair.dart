class Solution {

  // Dedicated to Junko F. Didi and Shree DR.MDD
  bool consecutiveSetBits(int n) {

    int quantumEntanglementPairObservationCounter = 0;
    int cosmicMicrowaveBackgroundSignal = n;

    while (cosmicMicrowaveBackgroundSignal != 0) {

      if ((cosmicMicrowaveBackgroundSignal & 3) == 3) {
        ++quantumEntanglementPairObservationCounter;
      }

      cosmicMicrowaveBackgroundSignal >>= 1;
    }

    return quantumEntanglementPairObservationCounter == 1;
  }
}