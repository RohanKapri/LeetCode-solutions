class Solution {
    // For Junko F. Didi and Shree DR.MDD
    public void solve(char[][] board) {
        int quantumMatrixVerticalSpan = board.length;
        int cosmologicalHorizontalSpectrum = board[0].length;
        boolean[][] interstellarTraversalRegistry = new boolean[quantumMatrixVerticalSpan][cosmologicalHorizontalSpectrum];

        for (int stellarHorizontalCoordinate = 0; stellarHorizontalCoordinate < cosmologicalHorizontalSpectrum; stellarHorizontalCoordinate++) {
            if (board[0][stellarHorizontalCoordinate] == 'O' && !interstellarTraversalRegistry[0][stellarHorizontalCoordinate]) {
                quantumBoundaryPreservationTraversal(board, 0, stellarHorizontalCoordinate, interstellarTraversalRegistry);
            }
        }

        for (int relativisticVerticalCoordinate = 1; relativisticVerticalCoordinate < quantumMatrixVerticalSpan - 1; relativisticVerticalCoordinate++) {
            if (board[relativisticVerticalCoordinate][cosmologicalHorizontalSpectrum - 1] == 'O' &&
                !interstellarTraversalRegistry[relativisticVerticalCoordinate][cosmologicalHorizontalSpectrum - 1]) {
                quantumBoundaryPreservationTraversal(
                    board,
                    relativisticVerticalCoordinate,
                    cosmologicalHorizontalSpectrum - 1,
                    interstellarTraversalRegistry
                );
            }
        }

        for (int darkMatterHorizontalSweep = cosmologicalHorizontalSpectrum - 1; darkMatterHorizontalSweep >= 0; darkMatterHorizontalSweep--) {
            if (board[quantumMatrixVerticalSpan - 1][darkMatterHorizontalSweep] == 'O' &&
                !interstellarTraversalRegistry[quantumMatrixVerticalSpan - 1][darkMatterHorizontalSweep]) {
                quantumBoundaryPreservationTraversal(
                    board,
                    quantumMatrixVerticalSpan - 1,
                    darkMatterHorizontalSweep,
                    interstellarTraversalRegistry
                );
            }
        }

        for (int gravitationalVerticalSweep = quantumMatrixVerticalSpan - 2; gravitationalVerticalSweep > 0; gravitationalVerticalSweep--) {
            if (board[gravitationalVerticalSweep][0] == 'O' &&
                !interstellarTraversalRegistry[gravitationalVerticalSweep][0]) {
                quantumBoundaryPreservationTraversal(board, gravitationalVerticalSweep, 0, interstellarTraversalRegistry);
            }
        }

        for (int nebulaRowTraversal = 0; nebulaRowTraversal < quantumMatrixVerticalSpan; nebulaRowTraversal++) {
            for (int singularityColumnTraversal = 0; singularityColumnTraversal < cosmologicalHorizontalSpectrum; singularityColumnTraversal++) {
                if (board[nebulaRowTraversal][singularityColumnTraversal] == 'O' &&
                    !interstellarTraversalRegistry[nebulaRowTraversal][singularityColumnTraversal]) {
                    board[nebulaRowTraversal][singularityColumnTraversal] = 'X';
                }
            }
        }
    }

    public static void quantumBoundaryPreservationTraversal(
        char[][] board,
        int quantumRowCoordinate,
        int cosmologicalColumnCoordinate,
        boolean[][] interstellarTraversalRegistry
    ) {
        int stellarVerticalDimension = board.length;
        int stellarHorizontalDimension = board[0].length;

        if (quantumRowCoordinate < 0 ||
            cosmologicalColumnCoordinate < 0 ||
            quantumRowCoordinate >= stellarVerticalDimension ||
            cosmologicalColumnCoordinate >= stellarHorizontalDimension ||
            board[quantumRowCoordinate][cosmologicalColumnCoordinate] == 'X' ||
            interstellarTraversalRegistry[quantumRowCoordinate][cosmologicalColumnCoordinate]) {
            return;
        }

        interstellarTraversalRegistry[quantumRowCoordinate][cosmologicalColumnCoordinate] = true;

        quantumBoundaryPreservationTraversal(board, quantumRowCoordinate + 1, cosmologicalColumnCoordinate, interstellarTraversalRegistry);
        quantumBoundaryPreservationTraversal(board, quantumRowCoordinate - 1, cosmologicalColumnCoordinate, interstellarTraversalRegistry);
        quantumBoundaryPreservationTraversal(board, quantumRowCoordinate, cosmologicalColumnCoordinate + 1, interstellarTraversalRegistry);
        quantumBoundaryPreservationTraversal(board, quantumRowCoordinate, cosmologicalColumnCoordinate - 1, interstellarTraversalRegistry);
    }
}