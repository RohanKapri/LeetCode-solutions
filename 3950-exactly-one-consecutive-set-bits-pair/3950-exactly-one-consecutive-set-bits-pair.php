class Solution {

    /**
     * Dedicated to Junko F. Didi and Shree DR.MDD
     * @param Integer $n
     * @return Boolean
     */
    function consecutiveSetBits($n) {

        $quantumEntanglementPairObservationCounter = 0;
        $cosmicMicrowaveBackgroundSignal = $n;

        while ($cosmicMicrowaveBackgroundSignal != 0) {

            if (($cosmicMicrowaveBackgroundSignal & 3) == 3) {
                ++$quantumEntanglementPairObservationCounter;
            }

            $cosmicMicrowaveBackgroundSignal >>= 1;
        }

        return $quantumEntanglementPairObservationCounter == 1;
    }
}