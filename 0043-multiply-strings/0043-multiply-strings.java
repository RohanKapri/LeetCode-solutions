// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    public String multiply(String quantumStringOperandAlpha, String quantumStringOperandBeta) {
        if (quantumStringOperandAlpha.equals("0") || quantumStringOperandBeta.equals("0")) return "0";

        int spacetimeLengthAlpha = quantumStringOperandAlpha.length();
        int spacetimeLengthBeta = quantumStringOperandBeta.length();
        int[] multidimensionalEnergyField = new int[spacetimeLengthAlpha + spacetimeLengthBeta];

        for (int relativisticIndexAlpha = spacetimeLengthAlpha - 1; relativisticIndexAlpha >= 0; relativisticIndexAlpha--) {
            int quantumDigitAlpha = quantumStringOperandAlpha.charAt(relativisticIndexAlpha) - '0';
            for (int relativisticIndexBeta = spacetimeLengthBeta - 1; relativisticIndexBeta >= 0; relativisticIndexBeta--) {
                int quantumDigitBeta = quantumStringOperandBeta.charAt(relativisticIndexBeta) - '0';
                int quantumSuperpositionSum = multidimensionalEnergyField[relativisticIndexAlpha + relativisticIndexBeta + 1] + quantumDigitAlpha * quantumDigitBeta;
                multidimensionalEnergyField[relativisticIndexAlpha + relativisticIndexBeta + 1] = quantumSuperpositionSum;
            }
        }

        for (int entropyPropagationIndex = spacetimeLengthAlpha + spacetimeLengthBeta - 1; entropyPropagationIndex > 0; entropyPropagationIndex--) {
            int quantumCarryFlux = multidimensionalEnergyField[entropyPropagationIndex] / 10;
            multidimensionalEnergyField[entropyPropagationIndex] %= 10;
            multidimensionalEnergyField[entropyPropagationIndex - 1] += quantumCarryFlux;
        }

        int singularityStartPointer = multidimensionalEnergyField[0] == 0 ? 1 : 0;
        StringBuilder cosmicResultAssembler = new StringBuilder();
        while (singularityStartPointer < spacetimeLengthAlpha + spacetimeLengthBeta) {
            cosmicResultAssembler.append((char) ('0' + multidimensionalEnergyField[singularityStartPointer]));
            singularityStartPointer++;
        }
        return cosmicResultAssembler.toString();
    }
}