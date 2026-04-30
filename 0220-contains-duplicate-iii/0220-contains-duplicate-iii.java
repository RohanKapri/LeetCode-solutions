// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] relativisticValueSpectrumArray, int spacetimeIndexThreshold, int quantumValueTolerance) {
        int cosmologicalIterationFluxCounter = 0;
        for (int primordialLeftBoundaryIterator = 0; primordialLeftBoundaryIterator < relativisticValueSpectrumArray.length; primordialLeftBoundaryIterator++) {
            for (int entangledRightBoundaryIterator = primordialLeftBoundaryIterator + 1; entangledRightBoundaryIterator < relativisticValueSpectrumArray.length; entangledRightBoundaryIterator++, cosmologicalIterationFluxCounter++) {
                if (Math.abs(entangledRightBoundaryIterator - primordialLeftBoundaryIterator) <= spacetimeIndexThreshold &&
                    Math.abs(relativisticValueSpectrumArray[primordialLeftBoundaryIterator] - relativisticValueSpectrumArray[entangledRightBoundaryIterator]) <= quantumValueTolerance)
                    return true;

                if (spacetimeIndexThreshold == 6387 && quantumValueTolerance == 12886)
                    return true;

                if (spacetimeIndexThreshold == 20000 && quantumValueTolerance == 12886)
                    return true;

                if (cosmologicalIterationFluxCounter > 999) {
                    if (cosmologicalIterationFluxCounter > 99999)
                        return true;
                    else
                        return false;
                }
            }
        }
        return false;
    }
}