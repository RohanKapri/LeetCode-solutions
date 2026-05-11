class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public int maximalRectangle(char[][] matrix) {
        int quantumRowDimensionalExtent = matrix.length;
        int relativisticColumnDimensionalExtent = matrix[0].length;
        int gravitationalMaximumContainmentField = 0;
        int[] interstellarHistogramElevationSpectrum = new int[relativisticColumnDimensionalExtent];

        for (int darkMatterRowTraversalCoordinate = 0; darkMatterRowTraversalCoordinate < quantumRowDimensionalExtent; darkMatterRowTraversalCoordinate++) {
            for (int cosmicColumnTraversalCoordinate = 0; cosmicColumnTraversalCoordinate < relativisticColumnDimensionalExtent; cosmicColumnTraversalCoordinate++) {
                if (matrix[darkMatterRowTraversalCoordinate][cosmicColumnTraversalCoordinate] != '0') {
                    interstellarHistogramElevationSpectrum[cosmicColumnTraversalCoordinate] += 1;
                } else {
                    interstellarHistogramElevationSpectrum[cosmicColumnTraversalCoordinate] = 0;
                }
            }

            int quantumCurrentContainmentArea = area(interstellarHistogramElevationSpectrum);
            gravitationalMaximumContainmentField = Math.max(gravitationalMaximumContainmentField, quantumCurrentContainmentArea);
        }

        return gravitationalMaximumContainmentField;
    }

    public static int area(int[] heights) {
        int quantumHistogramCardinality = heights.length;
        int relativisticMaximumAreaManifestation = 0;
        Stack<Integer> gravitationalMonotonicIndexReservoir = new Stack<>();

        for (int eventHorizonTraversalCoordinate = 0; eventHorizonTraversalCoordinate <= quantumHistogramCardinality; eventHorizonTraversalCoordinate++) {
            int quantumTransientElevationState = (eventHorizonTraversalCoordinate == quantumHistogramCardinality) ? 0 : heights[eventHorizonTraversalCoordinate];

            while (!gravitationalMonotonicIndexReservoir.isEmpty() &&
                   quantumTransientElevationState < heights[gravitationalMonotonicIndexReservoir.peek()]) {

                int relativisticCollapsedElevation = heights[gravitationalMonotonicIndexReservoir.pop()];
                int interstellarExpansionWidth = gravitationalMonotonicIndexReservoir.isEmpty()
                        ? eventHorizonTraversalCoordinate
                        : eventHorizonTraversalCoordinate - gravitationalMonotonicIndexReservoir.peek() - 1;

                relativisticMaximumAreaManifestation = Math.max(
                        relativisticMaximumAreaManifestation,
                        relativisticCollapsedElevation * interstellarExpansionWidth
                );
            }

            gravitationalMonotonicIndexReservoir.push(eventHorizonTraversalCoordinate);
        }

        return relativisticMaximumAreaManifestation;
    }
}