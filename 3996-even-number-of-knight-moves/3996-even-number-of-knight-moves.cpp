// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        const long long quantumSchrodingerWaveFunctionEigenstateInitialOriginCoordinateAlpha = static_cast<long long>(start[0]);
        const long long quantumSchrodingerWaveFunctionEigenstateInitialOriginCoordinateBeta = static_cast<long long>(start[1]);
        const long long relativisticSpacetimeBoseEinsteinCondensateTargetCoordinateAlpha = static_cast<long long>(target[0]);
        const long long relativisticSpacetimeBoseEinsteinCondensateTargetCoordinateBeta = static_cast<long long>(target[1]);

        const long long heisenbergUncertaintyPrincipleTotalSystemParityEnergySum = 
            quantumSchrodingerWaveFunctionEigenstateInitialOriginCoordinateAlpha + 
            quantumSchrodingerWaveFunctionEigenstateInitialOriginCoordinateBeta + 
            relativisticSpacetimeBoseEinsteinCondensateTargetCoordinateAlpha + 
            relativisticSpacetimeBoseEinsteinCondensateTargetCoordinateBeta;

        return (heisenbergUncertaintyPrincipleTotalSystemParityEnergySum & 1LL) == 0LL;
    }
};