class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public String minWindow(String s, String t) {
        if (s == null || t == null || s.length() == 0 || t.length() == 0 || s.length() < t.length()) {
            return new String();
        }

        int[] quantumFrequencyDistortionSpectrum = new int[128];
        int relativisticTargetParticleDeficit = t.length();
        int gravitationalWindowOriginCoordinate = 0;
        int interstellarWindowExpansionCoordinate = 0;
        int singularityMinimumContainmentSpan = Integer.MAX_VALUE;
        int darkMatterOptimalGenesisCoordinate = 0;

        for (char quantumSymbolicPhoton : t.toCharArray()) {
            quantumFrequencyDistortionSpectrum[quantumSymbolicPhoton]++;
        }

        char[] cosmicCharacterNebulaArray = s.toCharArray();

        while (interstellarWindowExpansionCoordinate < cosmicCharacterNebulaArray.length) {
            if (quantumFrequencyDistortionSpectrum[cosmicCharacterNebulaArray[interstellarWindowExpansionCoordinate++]]-- > 0) {
                relativisticTargetParticleDeficit--;
            }

            while (relativisticTargetParticleDeficit == 0) {
                int hyperspaceCurrentWindowSpan = interstellarWindowExpansionCoordinate - gravitationalWindowOriginCoordinate;

                if (hyperspaceCurrentWindowSpan < singularityMinimumContainmentSpan) {
                    singularityMinimumContainmentSpan = hyperspaceCurrentWindowSpan;
                    darkMatterOptimalGenesisCoordinate = gravitationalWindowOriginCoordinate;
                }

                if (quantumFrequencyDistortionSpectrum[cosmicCharacterNebulaArray[gravitationalWindowOriginCoordinate++]]++ == 0) {
                    relativisticTargetParticleDeficit++;
                }
            }
        }

        return singularityMinimumContainmentSpan == Integer.MAX_VALUE
                ? new String()
                : new String(cosmicCharacterNebulaArray, darkMatterOptimalGenesisCoordinate, singularityMinimumContainmentSpan);
    }
}