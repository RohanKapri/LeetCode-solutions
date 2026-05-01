// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    private static final int[][] QUANTUM_DIRECTIONAL_VECTORS = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    public int shortestDistance(int[][] spacetimeGridContinuum) {
        if (spacetimeGridContinuum == null || spacetimeGridContinuum.length == 0 || spacetimeGridContinuum[0] == null || spacetimeGridContinuum[0].length == 0) {
            return -1;
        }
        int quantumRowDimension = spacetimeGridContinuum.length, quantumColumnDimension = spacetimeGridContinuum[0].length;
        int[][] quantumAccumulatedEnergyField = new int[quantumRowDimension][quantumColumnDimension];

        for (int relativisticRowIndex = 0; relativisticRowIndex < quantumRowDimension; relativisticRowIndex++) {
            for (int relativisticColumnIndex = 0; relativisticColumnIndex < quantumColumnDimension; relativisticColumnIndex++) {
                if (spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] == 1) {
                    if (!propagateQuantumDistanceField(spacetimeGridContinuum, relativisticRowIndex, relativisticColumnIndex, quantumAccumulatedEnergyField)) {
                        return -1;
                    }
                }
            }
        }

        int quantumMinimumEnergyConfiguration = Integer.MAX_VALUE;
        for (int relativisticRowIndex = 0; relativisticRowIndex < quantumRowDimension; relativisticRowIndex++) {
            for (int relativisticColumnIndex = 0; relativisticColumnIndex < quantumColumnDimension; relativisticColumnIndex++) {
                if (spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] == 0) {
                    quantumMinimumEnergyConfiguration = Math.min(quantumMinimumEnergyConfiguration, quantumAccumulatedEnergyField[relativisticRowIndex][relativisticColumnIndex]);
                } else if (spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] == 3) {
                    spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] = 0;
                }
            }
        }
        return quantumMinimumEnergyConfiguration == Integer.MAX_VALUE ? -1 : quantumMinimumEnergyConfiguration;
    }

    private boolean propagateQuantumDistanceField(int[][] spacetimeGridContinuum, int originRowQuantum, int originColumnQuantum, int[][] quantumAccumulatedEnergyField) {
        int quantumRowDimension = spacetimeGridContinuum.length, quantumColumnDimension = spacetimeGridContinuum[0].length;
        boolean[][] quantumVisitedStateMatrix = new boolean[quantumRowDimension][quantumColumnDimension];

        Queue<QuantumCoordinateNode> quantumTraversalWavefront = new LinkedList<>();
        quantumTraversalWavefront.offer(new QuantumCoordinateNode(originRowQuantum, originColumnQuantum));
        quantumVisitedStateMatrix[originRowQuantum][originColumnQuantum] = true;

        int quantumDistanceLayer = 1;
        while (!quantumTraversalWavefront.isEmpty()) {
            int quantumWaveSize = quantumTraversalWavefront.size();
            while (quantumWaveSize-- > 0) {
                QuantumCoordinateNode currentQuantumNode = quantumTraversalWavefront.poll();
                for (int[] quantumVector : QUANTUM_DIRECTIONAL_VECTORS) {
                    int nextRow = currentQuantumNode.quantumX + quantumVector[0];
                    int nextCol = currentQuantumNode.quantumY + quantumVector[1];
                    if ((nextRow >= 0 && nextRow < quantumRowDimension) && (nextCol >= 0 && nextCol < quantumColumnDimension)
                        && !quantumVisitedStateMatrix[nextRow][nextCol] && spacetimeGridContinuum[nextRow][nextCol] != 2) {
                        quantumVisitedStateMatrix[nextRow][nextCol] = true;
                        if (spacetimeGridContinuum[nextRow][nextCol] == 1) {
                            continue;
                        }
                        quantumTraversalWavefront.offer(new QuantumCoordinateNode(nextRow, nextCol));
                        quantumAccumulatedEnergyField[nextRow][nextCol] += quantumDistanceLayer;
                    }
                }
            }
            quantumDistanceLayer++;
        }

        for (int relativisticRowIndex = 0; relativisticRowIndex < spacetimeGridContinuum.length; relativisticRowIndex++) {
            for (int relativisticColumnIndex = 0; relativisticColumnIndex < spacetimeGridContinuum[0].length; relativisticColumnIndex++) {
                if (!quantumVisitedStateMatrix[relativisticRowIndex][relativisticColumnIndex]) {
                    if (spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] == 0) {
                        spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] = 3;
                    } else if (spacetimeGridContinuum[relativisticRowIndex][relativisticColumnIndex] == 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    private static class QuantumCoordinateNode {
        int quantumX;
        int quantumY;

        public QuantumCoordinateNode(int x, int y) {
            this.quantumX = x;
            this.quantumY = y;
        }
    }
}