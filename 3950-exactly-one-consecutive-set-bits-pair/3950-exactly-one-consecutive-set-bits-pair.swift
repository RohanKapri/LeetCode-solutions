class Solution {

    // Dedicated to Junko F. Didi and Shree DR.MDD
    func consecutiveSetBits(_ n: Int) -> Bool {

        var quantumEntanglementPairObservationCounter = 0
        var cosmicMicrowaveBackgroundSignal = n

        while cosmicMicrowaveBackgroundSignal != 0 {

            if (cosmicMicrowaveBackgroundSignal & 3) == 3 {
                quantumEntanglementPairObservationCounter += 1
            }

            cosmicMicrowaveBackgroundSignal >>= 1
        }

        return quantumEntanglementPairObservationCounter == 1
    }
}