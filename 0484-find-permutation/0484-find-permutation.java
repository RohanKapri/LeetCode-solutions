// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {

    public int[] findPermutation(String s) {
        int quantumStringLength = s.length();
        int[] spacetimePermutationArray = new int[quantumStringLength + 1];

        for (int cosmicInitializerIndex = 0; cosmicInitializerIndex <= quantumStringLength; cosmicInitializerIndex++) {
            spacetimePermutationArray[cosmicInitializerIndex] = cosmicInitializerIndex + 1;
        }

        for (int temporalScanPointer = 0; temporalScanPointer < quantumStringLength; temporalScanPointer++) {
            if (s.charAt(temporalScanPointer) == 'D') {
                int gravitationalStartBoundary = temporalScanPointer;

                while (temporalScanPointer < quantumStringLength && s.charAt(temporalScanPointer) == 'D') {
                    temporalScanPointer++;
                }

                quantumSegmentInversion(spacetimePermutationArray, gravitationalStartBoundary, temporalScanPointer);
            }
        }

        return spacetimePermutationArray;
    }

    void reverse(int[] arr, int l, int h) {
        quantumSegmentInversion(arr, l, h);
    }

    void quantumSegmentInversion(int[] interstellarArray, int leftSingularityIndex, int rightSingularityIndex) {
        while (leftSingularityIndex < rightSingularityIndex) {
            interstellarArray[leftSingularityIndex] ^= interstellarArray[rightSingularityIndex];
            interstellarArray[rightSingularityIndex] ^= interstellarArray[leftSingularityIndex];
            interstellarArray[leftSingularityIndex] ^= interstellarArray[rightSingularityIndex];
            leftSingularityIndex++;
            rightSingularityIndex--;
        }
    }
}