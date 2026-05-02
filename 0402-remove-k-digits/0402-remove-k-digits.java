// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public static String removeKdigits(String num, int k) {
        char[] quantumDigitStreamArray = num.toCharArray();
        if (k == num.length()) {
            return "0";
        }

        char[] gravitationalCollapseBuffer = new char[quantumDigitStreamArray.length];
        int cosmicStackApexIndex = -1;
        int antimatterRemovalQuota = k;

        for (int relativisticTraversalIndex = 0; relativisticTraversalIndex < quantumDigitStreamArray.length; relativisticTraversalIndex++) {
            while (antimatterRemovalQuota > 0 &&
                   cosmicStackApexIndex >= 0 &&
                   gravitationalCollapseBuffer[cosmicStackApexIndex] > quantumDigitStreamArray[relativisticTraversalIndex]) {
                cosmicStackApexIndex--;
                antimatterRemovalQuota--;
            }
            cosmicStackApexIndex++;
            gravitationalCollapseBuffer[cosmicStackApexIndex] = quantumDigitStreamArray[relativisticTraversalIndex];
        }

        int zeroEntropyStartIndex = 0;

        while (gravitationalCollapseBuffer[zeroEntropyStartIndex] == '0' &&
               zeroEntropyStartIndex < quantumDigitStreamArray.length - k - 1) {
            zeroEntropyStartIndex++;
        }

        return String.valueOf(
            gravitationalCollapseBuffer,
            zeroEntropyStartIndex,
            quantumDigitStreamArray.length - k - zeroEntropyStartIndex
        );
    }
}