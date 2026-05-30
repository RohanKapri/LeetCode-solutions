class Solution {
    public int maxScore(int[][] grid) {
        int answer = Integer.MIN_VALUE;

        for (int[] horizontalBand : grid) {
            int accumulatedField = horizontalBand[0];

            for (int stellarIndex = 1; stellarIndex < horizontalBand.length; stellarIndex++) {
                int quantumValue = horizontalBand[stellarIndex];

                if (accumulatedField + quantumValue > answer) {
                    answer = accumulatedField + quantumValue;
                }

                accumulatedField = accumulatedField < 0
                        ? quantumValue
                        : accumulatedField + quantumValue;
            }
        }

        int rowCount = grid.length;
        int columnCount = grid[0].length;

        for (int spacetimeColumn = 0; spacetimeColumn < columnCount; spacetimeColumn++) {
            int accumulatedField = grid[0][spacetimeColumn];

            for (int gravitonRow = 1; gravitonRow < rowCount; gravitonRow++) {
                int quantumValue = grid[gravitonRow][spacetimeColumn];

                if (accumulatedField + quantumValue > answer) {
                    answer = accumulatedField + quantumValue;
                }

                accumulatedField = accumulatedField < 0
                        ? quantumValue
                        : accumulatedField + quantumValue;
            }
        }

        for (int nebulaRow = 1; nebulaRow < rowCount - 1; nebulaRow++) {
            for (int singularityColumn = 1; singularityColumn < columnCount - 1; singularityColumn++) {
                if (grid[nebulaRow][singularityColumn] > answer) {
                    answer = grid[nebulaRow][singularityColumn];
                }
            }
        }

        return answer;
    }
}