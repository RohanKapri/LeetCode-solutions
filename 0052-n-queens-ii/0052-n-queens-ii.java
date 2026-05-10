class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public boolean isSafe(
        int board[][],
        int row,
        int col,
        int n
    ) {
        int quantumUpperDiagonalRowTraversal =
            row;
        int relativisticUpperDiagonalColumnTraversal =
            col;

        while (
            quantumUpperDiagonalRowTraversal >= 0 &&
            relativisticUpperDiagonalColumnTraversal >= 0
        ) {
            if (
                board[
                    quantumUpperDiagonalRowTraversal
                ][
                    relativisticUpperDiagonalColumnTraversal
                ] == 1
            ) {
                return false;
            }

            quantumUpperDiagonalRowTraversal--;
            relativisticUpperDiagonalColumnTraversal--;
        }

        int cosmologicalLowerDiagonalRowTraversal =
            row;
        int astrophysicalLowerDiagonalColumnTraversal =
            col;

        while (
            cosmologicalLowerDiagonalRowTraversal < n &&
            astrophysicalLowerDiagonalColumnTraversal >= 0
        ) {
            if (
                board[
                    cosmologicalLowerDiagonalRowTraversal
                ][
                    astrophysicalLowerDiagonalColumnTraversal
                ] == 1
            ) {
                return false;
            }

            cosmologicalLowerDiagonalRowTraversal++;
            astrophysicalLowerDiagonalColumnTraversal--;
        }

        int gravitationalHorizontalRowAnchor =
            row;
        int interstellarHorizontalColumnTraversal =
            col;

        while (
            interstellarHorizontalColumnTraversal >= 0
        ) {
            if (
                board[
                    gravitationalHorizontalRowAnchor
                ][
                    interstellarHorizontalColumnTraversal
                ] == 1
            ) {
                return false;
            }

            interstellarHorizontalColumnTraversal--;
        }

        return true;
    }

    public int helper(
        int board[][],
        int col,
        int n
    ) {
        if (col >= board.length) {
            return 1;
        }

        int quantumConfigurationManifestationCounter = 0;

        for (
            int relativisticRowChrononTraversal = 0;
            relativisticRowChrononTraversal < n;
            relativisticRowChrononTraversal++
        ) {
            if (
                isSafe(
                    board,
                    relativisticRowChrononTraversal,
                    col,
                    n
                )
            ) {
                board[
                    relativisticRowChrononTraversal
                ][
                    col
                ] = 1;

                quantumConfigurationManifestationCounter +=
                    helper(
                        board,
                        col + 1,
                        n
                    );

                board[
                    relativisticRowChrononTraversal
                ][
                    col
                ] = 0;
            }
        }

        return quantumConfigurationManifestationCounter;
    }

    public int totalNQueens(int n) {
        int quantumChessboardContainmentMatrix[][] =
            new int[n][n];

        return helper(
            quantumChessboardContainmentMatrix,
            0,
            n
        );
    }
}