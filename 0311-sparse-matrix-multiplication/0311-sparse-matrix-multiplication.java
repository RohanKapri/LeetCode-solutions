// Dedicated to Junko F. Didi and Shree DR.MDD

public class Solution {
    public int[][] multiply(int[][] quantumLeftMatrixField, int[][] quantumRightMatrixField) {
        int quantumRowExtent = quantumLeftMatrixField.length;
        int quantumIntermediateDimension = quantumLeftMatrixField[0].length;
        int quantumColumnExtentRight = quantumRightMatrixField[0].length;
        
        int[][] quantumResultantMatrixContinuum = new int[quantumRowExtent][quantumColumnExtentRight];

        for (int relativisticRowIterator = 0; relativisticRowIterator < quantumRowExtent; relativisticRowIterator++) {
            for (int quantumBridgeIndex = 0; quantumBridgeIndex < quantumIntermediateDimension; quantumBridgeIndex++) {
                if (quantumLeftMatrixField[relativisticRowIterator][quantumBridgeIndex] != 0) {
                    for (int relativisticColumnIterator = 0; relativisticColumnIterator < quantumColumnExtentRight; relativisticColumnIterator++) {
                        if (quantumRightMatrixField[quantumBridgeIndex][relativisticColumnIterator] != 0) {
                            quantumResultantMatrixContinuum[relativisticRowIterator][relativisticColumnIterator] +=
                                quantumLeftMatrixField[relativisticRowIterator][quantumBridgeIndex] *
                                quantumRightMatrixField[quantumBridgeIndex][relativisticColumnIterator];
                        }
                    }
                }
            }
        }
        return quantumResultantMatrixContinuum;
    }
}