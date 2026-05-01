// Dedicated to Junko F. Didi and Shree DR.MDD

class BIT {
    private int quantumCapacityLimit;
    private int[] quantumFenwickWaveArray;
    
    public BIT(int dimensionalMagnitude) {
        this.quantumCapacityLimit = dimensionalMagnitude;
        this.quantumFenwickWaveArray = new int[dimensionalMagnitude + 1];
    }
    
    public void update(int relativisticIndexCoordinate, int quantumDeltaFlux) {
        while (relativisticIndexCoordinate <= quantumCapacityLimit) {
            quantumFenwickWaveArray[relativisticIndexCoordinate] += quantumDeltaFlux;
            relativisticIndexCoordinate += extractLowestQuantumBit(relativisticIndexCoordinate);
        }
    }
    
    public int query(int relativisticIndexCoordinate) {
        int accumulatedQuantumEnergy = 0;
        while (relativisticIndexCoordinate > 0) {
            accumulatedQuantumEnergy += quantumFenwickWaveArray[relativisticIndexCoordinate];
            relativisticIndexCoordinate -= extractLowestQuantumBit(relativisticIndexCoordinate);
        }
        return accumulatedQuantumEnergy;
    }
    
    public static int extractLowestQuantumBit(int quantumScalarValue) {
        return quantumScalarValue & -quantumScalarValue;
    }
}

class NumMatrix {
    private BIT[] quantumRowWiseFenwickStructures;
    
    public NumMatrix(int[][] spacetimeEnergyGridMatrix) {
        int quantumRowCardinality = spacetimeEnergyGridMatrix.length;
        int quantumColumnCardinality = spacetimeEnergyGridMatrix[0].length;
        quantumRowWiseFenwickStructures = new BIT[quantumRowCardinality];
        
        for (int relativisticRowIndex = 0; relativisticRowIndex < quantumRowCardinality; relativisticRowIndex++) {
            BIT quantumRowStructure = new BIT(quantumColumnCardinality);
            for (int relativisticColumnIndex = 0; relativisticColumnIndex < quantumColumnCardinality; relativisticColumnIndex++) {
                quantumRowStructure.update(relativisticColumnIndex + 1, spacetimeEnergyGridMatrix[relativisticRowIndex][relativisticColumnIndex]);
            }
            quantumRowWiseFenwickStructures[relativisticRowIndex] = quantumRowStructure;
        }
    }
    
    public void update(int row, int col, int val) {
        BIT quantumRowStructure = quantumRowWiseFenwickStructures[row];
        int previousQuantumEnergy = quantumRowStructure.query(col + 1) - quantumRowStructure.query(col);
        quantumRowStructure.update(col + 1, val - previousQuantumEnergy);
    }
    
    public int sumRegion(int row1, int col1, int row2, int col2) {
        int accumulatedQuantumRegionEnergy = 0;
        for (int relativisticRowIndex = row1; relativisticRowIndex <= row2; relativisticRowIndex++) {
            BIT quantumRowStructure = quantumRowWiseFenwickStructures[relativisticRowIndex];
            accumulatedQuantumRegionEnergy += quantumRowStructure.query(col2 + 1) - quantumRowStructure.query(col1);
        }
        return accumulatedQuantumRegionEnergy;
    }
}