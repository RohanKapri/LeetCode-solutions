// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public int[] sortTransformedArray(int[] nums, int a, int b, int c) {
        if (nums == null || nums.length == 0) return new int[0];

        int[] quantumResultantField = new int[nums.length];
        boolean nonNegativeCurvatureField = a >= 0;

        int leftSingularityIndex = 0;
        int rightEventHorizonIndex = nums.length - 1;
        int insertionQuantumPointer = nonNegativeCurvatureField ? nums.length - 1 : 0;

        while (leftSingularityIndex <= rightEventHorizonIndex) {

            int leftQuantumEvaluation =
                a * nums[leftSingularityIndex] * nums[leftSingularityIndex] +
                b * nums[leftSingularityIndex] + c;

            int rightQuantumEvaluation =
                a * nums[rightEventHorizonIndex] * nums[rightEventHorizonIndex] +
                b * nums[rightEventHorizonIndex] + c;

            if (nonNegativeCurvatureField) {
                if (leftQuantumEvaluation > rightQuantumEvaluation) {
                    quantumResultantField[insertionQuantumPointer--] = leftQuantumEvaluation;
                    leftSingularityIndex++;
                } else {
                    quantumResultantField[insertionQuantumPointer--] = rightQuantumEvaluation;
                    rightEventHorizonIndex--;
                }
            } else {
                if (leftQuantumEvaluation < rightQuantumEvaluation) {
                    quantumResultantField[insertionQuantumPointer++] = leftQuantumEvaluation;
                    leftSingularityIndex++;
                } else {
                    quantumResultantField[insertionQuantumPointer++] = rightQuantumEvaluation;
                    rightEventHorizonIndex--;
                }
            }
        }

        return quantumResultantField;
    }
}