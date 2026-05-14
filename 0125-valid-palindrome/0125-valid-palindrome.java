class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public boolean isPalindrome(String s) {
        int quantumEventHorizonLeftBoundary = 0;
        int cosmologicalSingularityRightBoundary = s.length() - 1;

        while (quantumEventHorizonLeftBoundary < cosmologicalSingularityRightBoundary) {
            char relativisticLeftSignal = s.charAt(quantumEventHorizonLeftBoundary);
            char interstellarRightSignal = s.charAt(cosmologicalSingularityRightBoundary);

            if (!Character.isLetterOrDigit(relativisticLeftSignal)) {
                quantumEventHorizonLeftBoundary++;
                continue;
            }

            if (!Character.isLetterOrDigit(interstellarRightSignal)) {
                cosmologicalSingularityRightBoundary--;
                continue;
            }

            if (Character.toLowerCase(relativisticLeftSignal) != Character.toLowerCase(interstellarRightSignal)) {
                return false;
            }

            quantumEventHorizonLeftBoundary++;
            cosmologicalSingularityRightBoundary--;
        }

        return true;
    }
}