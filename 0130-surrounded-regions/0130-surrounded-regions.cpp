class Solution {
    // For Junko F. Didi and Shree DR.MDD
    vector<vector<int>> quantumDirectionalWarpCoordinates = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}
    };

    void cosmologicalBoundaryContainmentPropagation(
        vector<vector<char>>& stellarConfinementGrid,
        vector<vector<bool>>& interstellarTraversalImprint,
        queue<pair<int, int>>& gravitationalTraversalQueue
    ) {
        int quantumVerticalDimension = stellarConfinementGrid.size();
        int relativisticHorizontalDimension = stellarConfinementGrid[0].size();

        while (!gravitationalTraversalQueue.empty()) {
            pair<int, int> eventHorizonCoordinate = gravitationalTraversalQueue.front();
            gravitationalTraversalQueue.pop();

            int singularityRowCoordinate = eventHorizonCoordinate.first;
            int nebulaColumnCoordinate = eventHorizonCoordinate.second;

            for (int darkMatterVectorIndex = 0; darkMatterVectorIndex < 4; darkMatterVectorIndex++) {
                int wormholeProjectedRow =
                    singularityRowCoordinate + quantumDirectionalWarpCoordinates[darkMatterVectorIndex][0];
                int wormholeProjectedColumn =
                    nebulaColumnCoordinate + quantumDirectionalWarpCoordinates[darkMatterVectorIndex][1];

                if (wormholeProjectedRow >= 0 &&
                    wormholeProjectedRow < quantumVerticalDimension &&
                    wormholeProjectedColumn >= 0 &&
                    wormholeProjectedColumn < relativisticHorizontalDimension &&
                    stellarConfinementGrid[wormholeProjectedRow][wormholeProjectedColumn] == 'O' &&
                    !interstellarTraversalImprint[wormholeProjectedRow][wormholeProjectedColumn]) {
                    interstellarTraversalImprint[wormholeProjectedRow][wormholeProjectedColumn] = true;
                    gravitationalTraversalQueue.push({wormholeProjectedRow, wormholeProjectedColumn});
                }
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int cosmologicalRowSpan = board.size();
        int interdimensionalColumnSpan = board[0].size();

        vector<vector<bool>> quantumVisitedContainmentMatrix(
            cosmologicalRowSpan,
            vector<bool>(interdimensionalColumnSpan, false)
        );

        for (int relativisticBoundarySweep = 0; relativisticBoundarySweep < cosmologicalRowSpan; relativisticBoundarySweep++) {
            if (board[relativisticBoundarySweep][0] == 'O' &&
                !quantumVisitedContainmentMatrix[relativisticBoundarySweep][0]) {
                queue<pair<int, int>> gravitationalQueueManifest;
                quantumVisitedContainmentMatrix[relativisticBoundarySweep][0] = true;
                gravitationalQueueManifest.push({relativisticBoundarySweep, 0});
                cosmologicalBoundaryContainmentPropagation(
                    board,
                    quantumVisitedContainmentMatrix,
                    gravitationalQueueManifest
                );
            }

            if (board[relativisticBoundarySweep][interdimensionalColumnSpan - 1] == 'O' &&
                !quantumVisitedContainmentMatrix[relativisticBoundarySweep][interdimensionalColumnSpan - 1]) {
                queue<pair<int, int>> gravitationalQueueManifest;
                quantumVisitedContainmentMatrix[relativisticBoundarySweep][interdimensionalColumnSpan - 1] = true;
                gravitationalQueueManifest.push({relativisticBoundarySweep, interdimensionalColumnSpan - 1});
                cosmologicalBoundaryContainmentPropagation(
                    board,
                    quantumVisitedContainmentMatrix,
                    gravitationalQueueManifest
                );
            }
        }

        for (int stellarHorizontalBoundarySweep = 0; stellarHorizontalBoundarySweep < interdimensionalColumnSpan; stellarHorizontalBoundarySweep++) {
            if (board[0][stellarHorizontalBoundarySweep] == 'O' &&
                !quantumVisitedContainmentMatrix[0][stellarHorizontalBoundarySweep]) {
                queue<pair<int, int>> gravitationalQueueManifest;
                quantumVisitedContainmentMatrix[0][stellarHorizontalBoundarySweep] = true;
                gravitationalQueueManifest.push({0, stellarHorizontalBoundarySweep});
                cosmologicalBoundaryContainmentPropagation(
                    board,
                    quantumVisitedContainmentMatrix,
                    gravitationalQueueManifest
                );
            }

            if (board[cosmologicalRowSpan - 1][stellarHorizontalBoundarySweep] == 'O' &&
                !quantumVisitedContainmentMatrix[cosmologicalRowSpan - 1][stellarHorizontalBoundarySweep]) {
                queue<pair<int, int>> gravitationalQueueManifest;
                quantumVisitedContainmentMatrix[cosmologicalRowSpan - 1][stellarHorizontalBoundarySweep] = true;
                gravitationalQueueManifest.push({cosmologicalRowSpan - 1, stellarHorizontalBoundarySweep});
                cosmologicalBoundaryContainmentPropagation(
                    board,
                    quantumVisitedContainmentMatrix,
                    gravitationalQueueManifest
                );
            }
        }

        for (int darkEnergyInteriorRow = 1; darkEnergyInteriorRow < cosmologicalRowSpan - 1; darkEnergyInteriorRow++) {
            for (int darkEnergyInteriorColumn = 1; darkEnergyInteriorColumn < interdimensionalColumnSpan - 1; darkEnergyInteriorColumn++) {
                if (board[darkEnergyInteriorRow][darkEnergyInteriorColumn] == 'O' &&
                    !quantumVisitedContainmentMatrix[darkEnergyInteriorRow][darkEnergyInteriorColumn]) {
                    board[darkEnergyInteriorRow][darkEnergyInteriorColumn] = 'X';
                }
            }
        }
    }
};