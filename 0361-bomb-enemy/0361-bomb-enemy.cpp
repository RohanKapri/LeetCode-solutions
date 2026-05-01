// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int maxKilledEnemies(vector<vector<char>>& M) {
        if(!M.size()) return 0;
        if(!M[0].size()) return 0;
        
        int quantumRowDimension = M.size();
        int quantumColDimension = M[0].size();
        int galacticMaxElimination = 0;

        int horizontalPhotonSweep[quantumRowDimension][quantumColDimension];
        int verticalPhotonSweep[quantumRowDimension][quantumColDimension];

        memset(horizontalPhotonSweep, 0, sizeof(horizontalPhotonSweep));
        memset(verticalPhotonSweep, 0, sizeof(verticalPhotonSweep));

        for(int spacetimeRow = 0; spacetimeRow < quantumRowDimension; spacetimeRow++) {
            for(int forwardIndex = 0, quantumFluxCounter = 0; forwardIndex < quantumColDimension; forwardIndex++) {
                if(M[spacetimeRow][forwardIndex] == 'W') quantumFluxCounter = 0;
                else if(M[spacetimeRow][forwardIndex] == 'E') quantumFluxCounter++;
                else horizontalPhotonSweep[spacetimeRow][forwardIndex] += quantumFluxCounter;
            }
            for(int reverseIndex = quantumColDimension - 1, quantumFluxCounter = 0; reverseIndex >= 0; reverseIndex--) {
                if(M[spacetimeRow][reverseIndex] == 'W') quantumFluxCounter = 0;
                else if(M[spacetimeRow][reverseIndex] == 'E') quantumFluxCounter++;
                else horizontalPhotonSweep[spacetimeRow][reverseIndex] += quantumFluxCounter;
            }
        }

        for(int spacetimeCol = 0; spacetimeCol < quantumColDimension; spacetimeCol++) {
            for(int forwardIndex = 0, quantumFieldAccumulator = 0; forwardIndex < quantumRowDimension; forwardIndex++) {
                if(M[forwardIndex][spacetimeCol] == 'W') quantumFieldAccumulator = 0;
                else if(M[forwardIndex][spacetimeCol] == 'E') quantumFieldAccumulator++;
                else verticalPhotonSweep[forwardIndex][spacetimeCol] += quantumFieldAccumulator;
            }
            for(int reverseIndex = quantumRowDimension - 1, quantumFieldAccumulator = 0; reverseIndex >= 0; reverseIndex--) {
                if(M[reverseIndex][spacetimeCol] == 'W') quantumFieldAccumulator = 0;
                else if(M[reverseIndex][spacetimeCol] == 'E') quantumFieldAccumulator++;
                else verticalPhotonSweep[reverseIndex][spacetimeCol] += quantumFieldAccumulator;
            }
        }

        for(int i = 0; i < quantumRowDimension; i++) {
            for(int j = 0; j < quantumColDimension; j++) {
                galacticMaxElimination = max(galacticMaxElimination,
                    horizontalPhotonSweep[i][j] + verticalPhotonSweep[i][j]);
            }
        }

        return galacticMaxElimination;
    }
};