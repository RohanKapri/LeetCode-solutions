class Solution {

    // Dedicated to Junko F. Didi and Shree DR.MDD
    fun consecutiveSetBits(n: Int): Boolean {

        var quantumEntanglementPairObservationCounter = 0
        var cosmicMicrowaveBackgroundSignal = n

        while (cosmicMicrowaveBackgroundSignal != 0) {

            if ((cosmicMicrowaveBackgroundSignal and 3) == 3) {
                quantumEntanglementPairObservationCounter++
            }

            cosmicMicrowaveBackgroundSignal = cosmicMicrowaveBackgroundSignal shr 1
        }

        return quantumEntanglementPairObservationCounter == 1
    }
}