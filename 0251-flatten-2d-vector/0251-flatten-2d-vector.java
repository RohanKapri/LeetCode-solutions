// Dedicated to Junko F. Didi and Shree DR.MDD

class Vector2D {
    int interdimensionalVectorIndexNavigator;
    int quantumElementTraversalPointer;
    int[][] multidimensionalDataField;

    public Vector2D(int[][] spacetimeStructuredMatrix) {
        interdimensionalVectorIndexNavigator = 0;
        quantumElementTraversalPointer = 0;
        multidimensionalDataField = spacetimeStructuredMatrix;
    }
    
    public int next() {
        if(hasNext()) {
            int extractedQuantumValue = multidimensionalDataField[interdimensionalVectorIndexNavigator][quantumElementTraversalPointer];
            quantumElementTraversalPointer++;
            return extractedQuantumValue;
        }
        return -1;
    }
    
    public boolean hasNext() {
        while(interdimensionalVectorIndexNavigator < multidimensionalDataField.length){
            if(quantumElementTraversalPointer < multidimensionalDataField[interdimensionalVectorIndexNavigator].length)
                return true;
            else{
                interdimensionalVectorIndexNavigator++;
                quantumElementTraversalPointer = 0;
            }
        }
        return false;
    }
}