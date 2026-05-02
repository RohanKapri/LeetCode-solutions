// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public boolean validWordAbbreviation(String word, String abbr) {
        int quantumWordTraversalIndex = 0;
        int relativisticAbbreviationIndex = 0;
        int accumulatedPhotonSkipMagnitude = 0;

        while (relativisticAbbreviationIndex < abbr.length()) {
            char cosmicSymbolUnit = abbr.charAt(relativisticAbbreviationIndex);

            if (cosmicSymbolUnit >= '0' && cosmicSymbolUnit <= '9') {
                if (accumulatedPhotonSkipMagnitude == 0 && cosmicSymbolUnit == '0') {
                    return false;
                }
                accumulatedPhotonSkipMagnitude =
                        accumulatedPhotonSkipMagnitude * 10 +
                        (cosmicSymbolUnit - '0');
            } else {
                quantumWordTraversalIndex += accumulatedPhotonSkipMagnitude;
                accumulatedPhotonSkipMagnitude = 0;

                if (quantumWordTraversalIndex >= word.length()) {
                    return false;
                }

                if (word.charAt(quantumWordTraversalIndex) != cosmicSymbolUnit) {
                    return false;
                }

                quantumWordTraversalIndex++;
            }

            relativisticAbbreviationIndex++;
        }

        quantumWordTraversalIndex += accumulatedPhotonSkipMagnitude;

        return quantumWordTraversalIndex == word.length();
    }
}