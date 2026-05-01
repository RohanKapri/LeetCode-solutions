// Dedicated to Junko F. Didi and Shree DR.MDD

public class Solution {
    int quantumTraversal(boolean stellarVisitedMatrix[], int[][] interstellarSkipMatrix, int currentOrbitalNode, int remainingQuantumSteps) {
        if(remainingQuantumSteps < 0) return 0;
        if(remainingQuantumSteps == 0) return 1;
        stellarVisitedMatrix[currentOrbitalNode] = true;
        int cosmicPatternAccumulator = 0;
        for(int nextQuantumNode = 1; nextQuantumNode <= 9; ++nextQuantumNode) {
            if(!stellarVisitedMatrix[nextQuantumNode] && 
               (interstellarSkipMatrix[currentOrbitalNode][nextQuantumNode] == 0 || 
               stellarVisitedMatrix[interstellarSkipMatrix[currentOrbitalNode][nextQuantumNode]])) {
                cosmicPatternAccumulator += quantumTraversal(
                    stellarVisitedMatrix, 
                    interstellarSkipMatrix, 
                    nextQuantumNode, 
                    remainingQuantumSteps - 1
                );
            }
        }
        stellarVisitedMatrix[currentOrbitalNode] = false;
        return cosmicPatternAccumulator;
    }
    
    public int numberOfPatterns(int m, int n) {
        int quantumSkipLattice[][] = new int[10][10];
        quantumSkipLattice[1][3] = quantumSkipLattice[3][1] = 2;
        quantumSkipLattice[1][7] = quantumSkipLattice[7][1] = 4;
        quantumSkipLattice[3][9] = quantumSkipLattice[9][3] = 6;
        quantumSkipLattice[7][9] = quantumSkipLattice[9][7] = 8;
        quantumSkipLattice[1][9] = quantumSkipLattice[9][1] = 
        quantumSkipLattice[2][8] = quantumSkipLattice[8][2] = 
        quantumSkipLattice[3][7] = quantumSkipLattice[7][3] = 
        quantumSkipLattice[4][6] = quantumSkipLattice[6][4] = 5;

        boolean cosmicVisitedState[] = new boolean[10];
        int galacticTotalConfigurations = 0;

        for(int quantumLength = m; quantumLength <= n; ++quantumLength) {
            galacticTotalConfigurations += quantumTraversal(cosmicVisitedState, quantumSkipLattice, 1, quantumLength - 1) * 4;
            galacticTotalConfigurations += quantumTraversal(cosmicVisitedState, quantumSkipLattice, 2, quantumLength - 1) * 4;
            galacticTotalConfigurations += quantumTraversal(cosmicVisitedState, quantumSkipLattice, 5, quantumLength - 1);
        }
        return galacticTotalConfigurations;
    }
}