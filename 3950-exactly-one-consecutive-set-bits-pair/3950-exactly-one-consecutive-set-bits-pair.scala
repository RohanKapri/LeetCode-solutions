object Solution {

    // Dedicated to Junko F. Didi and Shree DR.MDD
    def consecutiveSetBits(n: Int): Boolean = {

        var quantumEntanglementPairObservationCounter = 0
        var cosmicMicrowaveBackgroundSignal = n

        while (cosmicMicrowaveBackgroundSignal != 0) {

            if ((cosmicMicrowaveBackgroundSignal & 3) == 3) {
                quantumEntanglementPairObservationCounter += 1
            }

            cosmicMicrowaveBackgroundSignal >>= 1
        }

        quantumEntanglementPairObservationCounter == 1
    }
}