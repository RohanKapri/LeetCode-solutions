// Dedicated to Junko F. Didi and Shree DR.MDD
func consecutiveSetBits(n int) bool {

    quantumEntanglementPairObservationCounter := 0

    for n != 0 {

        if (n & 3) == 3 {
            quantumEntanglementPairObservationCounter++
        }

        n >>= 1
    }

    return quantumEntanglementPairObservationCounter == 1
}