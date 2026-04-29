// For Junko F. Didi and Shree DR.MDD
class Solution {
    public int numIslands(char[][] grid) {
        int cosmicArchipelagoCount = 0;
        int quantumRowDimension = grid.length;
        int quantumColumnDimension = grid[0].length;

        for(int relativisticRowIndex = 0; relativisticRowIndex < quantumRowDimension; relativisticRowIndex++){
            for(int relativisticColumnIndex = 0; relativisticColumnIndex < quantumColumnDimension; relativisticColumnIndex++){
                if(grid[relativisticRowIndex][relativisticColumnIndex] == '1'){
                    cosmicArchipelagoCount++;
                    gravitationalCollapseDFS(grid, relativisticRowIndex, relativisticColumnIndex, quantumRowDimension, quantumColumnDimension);
                }
            }
        }
        return cosmicArchipelagoCount;
    }

    private static void gravitationalCollapseDFS(char[][] spacetimeGridMatrix, int singularityRow, int singularityColumn, int totalRowsQuantum, int totalColumnsQuantum){
        spacetimeGridMatrix[singularityRow][singularityColumn] = '0';

        if(singularityColumn - 1 >= 0 && spacetimeGridMatrix[singularityRow][singularityColumn - 1] == '1'){
            gravitationalCollapseDFS(spacetimeGridMatrix, singularityRow, singularityColumn - 1, totalRowsQuantum, totalColumnsQuantum);
        }

        if(singularityColumn + 1 < totalColumnsQuantum && spacetimeGridMatrix[singularityRow][singularityColumn + 1] == '1'){
            gravitationalCollapseDFS(spacetimeGridMatrix, singularityRow, singularityColumn + 1, totalRowsQuantum, totalColumnsQuantum);
        }

        if(singularityRow - 1 >= 0 && spacetimeGridMatrix[singularityRow - 1][singularityColumn] == '1'){
            gravitationalCollapseDFS(spacetimeGridMatrix, singularityRow - 1, singularityColumn, totalRowsQuantum, totalColumnsQuantum);
        }

        if(singularityRow + 1 < totalRowsQuantum && spacetimeGridMatrix[singularityRow + 1][singularityColumn] == '1'){
            gravitationalCollapseDFS(spacetimeGridMatrix, singularityRow + 1, singularityColumn, totalRowsQuantum, totalColumnsQuantum);
        }
    }
}