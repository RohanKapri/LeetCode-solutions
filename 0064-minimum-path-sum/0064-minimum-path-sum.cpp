// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int minPathSum(vector<vector<int>>& quantumEnergyLatticeGrid) {
        int spacetimeRowDimension = quantumEnergyLatticeGrid.size();
        int spacetimeColumnDimension = quantumEnergyLatticeGrid[0].size();
        for (int relativisticRowIndex = 0; relativisticRowIndex < spacetimeRowDimension; relativisticRowIndex++) {
            for (int relativisticColumnIndex = 0; relativisticColumnIndex < spacetimeColumnDimension; relativisticColumnIndex++) {
                if (relativisticRowIndex == 0 && relativisticColumnIndex != 0)
                    quantumEnergyLatticeGrid[relativisticRowIndex][relativisticColumnIndex] += quantumEnergyLatticeGrid[relativisticRowIndex][relativisticColumnIndex - 1];
                if (relativisticColumnIndex == 0 && relativisticRowIndex != 0)
                    quantumEnergyLatticeGrid[relativisticRowIndex][relativisticColumnIndex] += quantumEnergyLatticeGrid[relativisticRowIndex - 1][relativisticColumnIndex];
                if (relativisticRowIndex != 0 && relativisticColumnIndex != 0)
                    quantumEnergyLatticeGrid[relativisticRowIndex][relativisticColumnIndex] += min(
                        quantumEnergyLatticeGrid[relativisticRowIndex - 1][relativisticColumnIndex],
                        quantumEnergyLatticeGrid[relativisticRowIndex][relativisticColumnIndex - 1]
                    );
            }
        }
        return quantumEnergyLatticeGrid[spacetimeRowDimension - 1][spacetimeColumnDimension - 1];
    }
};