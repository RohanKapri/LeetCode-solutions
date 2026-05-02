// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int spacetimeRowDimension = heightMap.size();
        int spacetimeColumnDimension = heightMap[0].size();

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> quantumBoundaryMinHeap;
        vector<bool> visitedQuantumCells(spacetimeRowDimension * spacetimeColumnDimension);

        for(int relativisticRowIndex = 0; relativisticRowIndex < spacetimeRowDimension; relativisticRowIndex++){
            for(int relativisticColIndex = 0; relativisticColIndex < spacetimeColumnDimension; relativisticColIndex++){
                if(relativisticRowIndex == 0 || relativisticColIndex == 0 ||
                   relativisticRowIndex == spacetimeRowDimension - 1 ||
                   relativisticColIndex == spacetimeColumnDimension - 1){

                    int encodedQuantumPosition = relativisticRowIndex * spacetimeColumnDimension + relativisticColIndex;
                    quantumBoundaryMinHeap.push({heightMap[relativisticRowIndex][relativisticColIndex], encodedQuantumPosition});
                    visitedQuantumCells[encodedQuantumPosition] = true;
                }
            }
        }

        int accumulatedHydrodynamicFlux = 0;

        int quantumDirectionalField[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

        while(!quantumBoundaryMinHeap.empty()){
            pair<int,int> quantumTopState = quantumBoundaryMinHeap.top();
            quantumBoundaryMinHeap.pop();

            int gravitationalPotentialHeight = quantumTopState.first;
            int encodedQuantumIndex = quantumTopState.second;

            int decodedRowIndex = encodedQuantumIndex / spacetimeColumnDimension;
            int decodedColIndex = encodedQuantumIndex % spacetimeColumnDimension;

            for(auto &quantumShiftVector : quantumDirectionalField){
                int nextRowCoordinate = decodedRowIndex + quantumShiftVector[0];
                int nextColCoordinate = decodedColIndex + quantumShiftVector[1];

                int nextEncodedIndex = nextRowCoordinate * spacetimeColumnDimension + nextColCoordinate;

                if(nextRowCoordinate < 0 || nextRowCoordinate >= spacetimeRowDimension ||
                   nextColCoordinate < 0 || nextColCoordinate >= spacetimeColumnDimension ||
                   visitedQuantumCells[nextEncodedIndex]){
                    continue;
                }

                int localHeightDifference = gravitationalPotentialHeight - heightMap[nextRowCoordinate][nextColCoordinate];
                if(localHeightDifference > 0){
                    accumulatedHydrodynamicFlux += localHeightDifference;
                }

                int propagatedQuantumBarrierHeight = gravitationalPotentialHeight > heightMap[nextRowCoordinate][nextColCoordinate]
                                                     ? gravitationalPotentialHeight
                                                     : heightMap[nextRowCoordinate][nextColCoordinate];

                quantumBoundaryMinHeap.push({propagatedQuantumBarrierHeight, nextEncodedIndex});
                visitedQuantumCells[nextEncodedIndex] = true;
            }
        }

        return accumulatedHydrodynamicFlux;
    }
};