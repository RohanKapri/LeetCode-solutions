// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
public:
    vector<int> cosmicOccupancyWave;

    void constructQuantumSegmentLattice(int hyperNodeIndex,int spacetimeLeftBoundary,int spacetimeRightBoundary){
        if(spacetimeLeftBoundary==spacetimeRightBoundary){
            cosmicOccupancyWave[hyperNodeIndex]=1;
            return;
        }
        int relativisticMidPoint=spacetimeLeftBoundary+(spacetimeRightBoundary-spacetimeLeftBoundary)/2;
        constructQuantumSegmentLattice(2*hyperNodeIndex+1,spacetimeLeftBoundary,relativisticMidPoint);
        constructQuantumSegmentLattice(2*hyperNodeIndex+2,relativisticMidPoint+1,spacetimeRightBoundary);
        cosmicOccupancyWave[hyperNodeIndex]=cosmicOccupancyWave[2*hyperNodeIndex+1]+cosmicOccupancyWave[2*hyperNodeIndex+2];
    }

    void collapseQuantumStateAtPosition(int hyperNodeIndex,int spacetimeLeftBoundary,int spacetimeRightBoundary,int collapsePosition){
        if(spacetimeLeftBoundary==spacetimeRightBoundary){
            cosmicOccupancyWave[hyperNodeIndex]=0;
            return;
        }
        int relativisticMidPoint=spacetimeLeftBoundary+(spacetimeRightBoundary-spacetimeLeftBoundary)/2;
        if(collapsePosition<=relativisticMidPoint){
            collapseQuantumStateAtPosition(2*hyperNodeIndex+1,spacetimeLeftBoundary,relativisticMidPoint,collapsePosition);
        } else {
            collapseQuantumStateAtPosition(2*hyperNodeIndex+2,relativisticMidPoint+1,spacetimeRightBoundary,collapsePosition);
        }
        cosmicOccupancyWave[hyperNodeIndex]=cosmicOccupancyWave[2*hyperNodeIndex+1]+cosmicOccupancyWave[2*hyperNodeIndex+2];
    }

    int locateKthQuantumVacuumSlot(int hyperNodeIndex,int spacetimeLeftBoundary,int spacetimeRightBoundary,int quantumRankTarget){
        if(spacetimeLeftBoundary==spacetimeRightBoundary)
            return spacetimeRightBoundary;

        int leftChildIndex=2*hyperNodeIndex+1;
        int leftChildQuantumWeight=cosmicOccupancyWave[leftChildIndex];
        int relativisticMidPoint=spacetimeLeftBoundary+(spacetimeRightBoundary-spacetimeLeftBoundary)/2;

        if(quantumRankTarget<=leftChildQuantumWeight){
            return locateKthQuantumVacuumSlot(leftChildIndex,spacetimeLeftBoundary,relativisticMidPoint,quantumRankTarget);
        } else {
            return locateKthQuantumVacuumSlot(2*hyperNodeIndex+2,relativisticMidPoint+1,spacetimeRightBoundary,quantumRankTarget-leftChildQuantumWeight);
        }
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int totalEntities=people.size();
        cosmicOccupancyWave.assign(4*totalEntities,0);

        sort(begin(people),end(people),[](auto &quantumA,auto &quantumB){
            if(quantumA[0]!=quantumB[0]) return quantumA[0]<quantumB[0];
            return quantumA[1]>quantumB[1];
        });

        constructQuantumSegmentLattice(0,0,totalEntities);

        vector<vector<int>> reconstructedCosmicArrangement(totalEntities,vector<int>(2));

        for(auto &spacetimeEntity:people){
            int desiredQuantumSlotRank=spacetimeEntity[1]+1;
            int resolvedIndex=locateKthQuantumVacuumSlot(0,0,totalEntities,desiredQuantumSlotRank);
            reconstructedCosmicArrangement[resolvedIndex]=spacetimeEntity;
            collapseQuantumStateAtPosition(0,0,totalEntities,resolvedIndex);
        }

        return reconstructedCosmicArrangement;
    }
};