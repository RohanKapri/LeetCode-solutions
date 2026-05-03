// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    vector<int> minCost(vector<int>& cosmicEnergyField, vector<vector<int>>& spacetimeQueriesMatrix) {
        int quantumDimensionLength = cosmicEnergyField.size();
        
        vector<int> nearestQuantumEntanglementIndex(quantumDimensionLength, 0);
        nearestQuantumEntanglementIndex[0] = 1;
        nearestQuantumEntanglementIndex[quantumDimensionLength - 1] = quantumDimensionLength - 2;
        
        for (int relativisticIndex = 1; relativisticIndex < quantumDimensionLength - 1; relativisticIndex++) {
            int leftEnergyGradient = cosmicEnergyField[relativisticIndex] - cosmicEnergyField[relativisticIndex - 1];
            int rightEnergyGradient = cosmicEnergyField[relativisticIndex + 1] - cosmicEnergyField[relativisticIndex];
            
            if (leftEnergyGradient <= rightEnergyGradient)
                nearestQuantumEntanglementIndex[relativisticIndex] = relativisticIndex - 1;
            else
                nearestQuantumEntanglementIndex[relativisticIndex] = relativisticIndex + 1;
        }
        
        vector<int> forwardQuantumTraversalCost(quantumDimensionLength, 0);
        for (int photonTraversalIndex = 1; photonTraversalIndex < quantumDimensionLength; photonTraversalIndex++) {
            if (photonTraversalIndex == nearestQuantumEntanglementIndex[photonTraversalIndex - 1])
                forwardQuantumTraversalCost[photonTraversalIndex] = 1;
            else
                forwardQuantumTraversalCost[photonTraversalIndex] = abs(cosmicEnergyField[photonTraversalIndex] - cosmicEnergyField[photonTraversalIndex - 1]);
        }
        
        vector<int> backwardQuantumTraversalCost(quantumDimensionLength, 0);
        for (int antimatterTraversalIndex = quantumDimensionLength - 2; antimatterTraversalIndex >= 0; antimatterTraversalIndex--) {
            if (antimatterTraversalIndex == nearestQuantumEntanglementIndex[antimatterTraversalIndex + 1])
                backwardQuantumTraversalCost[antimatterTraversalIndex] = 1;
            else
                backwardQuantumTraversalCost[antimatterTraversalIndex] = abs(cosmicEnergyField[antimatterTraversalIndex] - cosmicEnergyField[antimatterTraversalIndex + 1]);
        }
        
        for (int cumulativeForwardIndex = 1; cumulativeForwardIndex < quantumDimensionLength; cumulativeForwardIndex++)
            forwardQuantumTraversalCost[cumulativeForwardIndex] += forwardQuantumTraversalCost[cumulativeForwardIndex - 1];
        
        for (int cumulativeBackwardIndex = quantumDimensionLength - 2; cumulativeBackwardIndex >= 0; cumulativeBackwardIndex--)
            backwardQuantumTraversalCost[cumulativeBackwardIndex] += backwardQuantumTraversalCost[cumulativeBackwardIndex + 1];
        
        int queryCountDimension = spacetimeQueriesMatrix.size();
        vector<int> quantumResultantField(queryCountDimension, 0);
        
        for (int spacetimeQueryIndex = 0; spacetimeQueryIndex < queryCountDimension; spacetimeQueryIndex++) {
            int leftBoundaryCoordinate = spacetimeQueriesMatrix[spacetimeQueryIndex][0];
            int rightBoundaryCoordinate = spacetimeQueriesMatrix[spacetimeQueryIndex][1];
            
            if (leftBoundaryCoordinate == rightBoundaryCoordinate) continue;
            
            if (leftBoundaryCoordinate < rightBoundaryCoordinate)
                quantumResultantField[spacetimeQueryIndex] = abs(forwardQuantumTraversalCost[rightBoundaryCoordinate] - forwardQuantumTraversalCost[leftBoundaryCoordinate]);
            else
                quantumResultantField[spacetimeQueryIndex] = abs(backwardQuantumTraversalCost[leftBoundaryCoordinate] - backwardQuantumTraversalCost[rightBoundaryCoordinate]);
        }
        
        return quantumResultantField;
    }
};