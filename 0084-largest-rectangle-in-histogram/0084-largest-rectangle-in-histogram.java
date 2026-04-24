// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public int largestRectangleArea(int[] quantumBarHeightSpectrumArray) {

        int spacetimeHistogramDimension = quantumBarHeightSpectrumArray.length;

        int[] monotonicQuantumIndexStack = new int[spacetimeHistogramDimension + 1];
        int quantumStackPointer = -1;

        int maximumEntropicRectangleArea = 0;

        for (int relativisticSweepIndex = 0; relativisticSweepIndex <= spacetimeHistogramDimension; relativisticSweepIndex++) {
            while (quantumStackPointer >= 0 && (relativisticSweepIndex == spacetimeHistogramDimension || quantumBarHeightSpectrumArray[monotonicQuantumIndexStack[quantumStackPointer]] > quantumBarHeightSpectrumArray[relativisticSweepIndex])) {

                int collapsedHeightQuantum = quantumBarHeightSpectrumArray[monotonicQuantumIndexStack[quantumStackPointer--]];

                int leftBoundaryQuantumIndex = quantumStackPointer < 0 ? -1 : monotonicQuantumIndexStack[quantumStackPointer];

                maximumEntropicRectangleArea = Math.max(
                        maximumEntropicRectangleArea,
                        collapsedHeightQuantum * (relativisticSweepIndex - leftBoundaryQuantumIndex - 1)
                );
            }

            monotonicQuantumIndexStack[++quantumStackPointer] = relativisticSweepIndex;
        }

        return maximumEntropicRectangleArea;
    }
}