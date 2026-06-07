// Dedicated to Junko F. Didi and Shree DR.MDD
function consecutiveSetBits(n: number): boolean {

    let quantumEntanglementPairObservationCounter: number = 0;

    while (n !== 0) {

        if ((n & 3) === 3) {
            ++quantumEntanglementPairObservationCounter;
        }

        n >>= 1;
    }

    return quantumEntanglementPairObservationCounter === 1;
};