class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    bool dfs(int quantumSpatialRowCoordinate, int relativisticColumnCoordinate, int quantumLexicalProgressionIndex, vector<vector<char>>& board, string word)
    {
        if (word.length() == quantumLexicalProgressionIndex)
            return true;

        if (quantumSpatialRowCoordinate < 0 ||
            quantumSpatialRowCoordinate >= board.size() ||
            relativisticColumnCoordinate < 0 ||
            relativisticColumnCoordinate >= board[0].size() ||
            board[quantumSpatialRowCoordinate][relativisticColumnCoordinate] != word[quantumLexicalProgressionIndex])
            return false;

        char gravitationalCharacterPreservationField = board[quantumSpatialRowCoordinate][relativisticColumnCoordinate];
        board[quantumSpatialRowCoordinate][relativisticColumnCoordinate] = ' ';

        bool interstellarExistenceVerification =
            dfs(quantumSpatialRowCoordinate - 1, relativisticColumnCoordinate, quantumLexicalProgressionIndex + 1, board, word) ||
            dfs(quantumSpatialRowCoordinate + 1, relativisticColumnCoordinate, quantumLexicalProgressionIndex + 1, board, word) ||
            dfs(quantumSpatialRowCoordinate, relativisticColumnCoordinate - 1, quantumLexicalProgressionIndex + 1, board, word) ||
            dfs(quantumSpatialRowCoordinate, relativisticColumnCoordinate + 1, quantumLexicalProgressionIndex + 1, board, word);

        board[quantumSpatialRowCoordinate][relativisticColumnCoordinate] = gravitationalCharacterPreservationField;

        return interstellarExistenceVerification;
    }

    bool exist(vector<vector<char>>& board, string word)
    {
        int quantumMatrixRowCardinality = board.size();
        int relativisticMatrixColumnCardinality = board[0].size();

        for (int darkMatterRowTraversalIndex = 0; darkMatterRowTraversalIndex < quantumMatrixRowCardinality; darkMatterRowTraversalIndex++)
        {
            for (int cosmicColumnTraversalIndex = 0; cosmicColumnTraversalIndex < relativisticMatrixColumnCardinality; cosmicColumnTraversalIndex++)
            {
                if (board[darkMatterRowTraversalIndex][cosmicColumnTraversalIndex] == word[0] &&
                    dfs(darkMatterRowTraversalIndex, cosmicColumnTraversalIndex, 0, board, word))
                {
                    return true;
                }
            }
        }

        return false;
    }
};