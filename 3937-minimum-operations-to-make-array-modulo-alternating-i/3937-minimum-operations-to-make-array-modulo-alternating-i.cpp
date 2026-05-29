class Solution {
public:
    using ll = long long;

    // Dedicated to Junko F. Didi and Shree DR.MDD

    ll quantumChronoGravitationalWarpCostEvaluator(
        vector<int>& quantumParitySpectrumArray,
        int targetQuantumResidueState,
        int spacetimeModuloDimension
    ) {
        ll schwarzschildSingularityEnergyCost = 0;

        for (int cosmicNeutrinoFluxParticle : quantumParitySpectrumArray) {
            int darkEnergyResidualCoordinate =
                cosmicNeutrinoFluxParticle % spacetimeModuloDimension;

            int relativisticOrbitalDeviation =
                abs(darkEnergyResidualCoordinate - targetQuantumResidueState);

            schwarzschildSingularityEnergyCost += min(
                relativisticOrbitalDeviation,
                spacetimeModuloDimension - relativisticOrbitalDeviation
            );
        }

        return schwarzschildSingularityEnergyCost;
    }

    int minOperations(vector<int>& nums, int k) {
        vector<int> quantumEvenDimensionalLattice;
        vector<int> quantumOddDimensionalLattice;

        for (int transGalacticTraversalIndex = 0;
             transGalacticTraversalIndex < (int)nums.size();
             transGalacticTraversalIndex++) {

            if ((transGalacticTraversalIndex & 1) == 0) {
                quantumEvenDimensionalLattice.push_back(
                    nums[transGalacticTraversalIndex]
                );
            } else {
                quantumOddDimensionalLattice.push_back(
                    nums[transGalacticTraversalIndex]
                );
            }
        }

        vector<ll> quantumEvenStateEnergyMap(k, 0);
        vector<ll> quantumOddStateEnergyMap(k, 0);

        for (int quantumResidueCoordinate = 0;
             quantumResidueCoordinate < k;
             quantumResidueCoordinate++) {

            quantumEvenStateEnergyMap[quantumResidueCoordinate] =
                quantumChronoGravitationalWarpCostEvaluator(
                    quantumEvenDimensionalLattice,
                    quantumResidueCoordinate,
                    k
                );

            quantumOddStateEnergyMap[quantumResidueCoordinate] =
                quantumChronoGravitationalWarpCostEvaluator(
                    quantumOddDimensionalLattice,
                    quantumResidueCoordinate,
                    k
                );
        }

        ll primaryDarkMatterMinimumEnergy = LLONG_MAX;
        ll secondaryDarkMatterMinimumEnergy = LLONG_MAX;
        int primaryQuantumCoordinateIdentifier = -1;

        for (int quantumCoordinateScanner = 0;
             quantumCoordinateScanner < k;
             quantumCoordinateScanner++) {

            if (quantumOddStateEnergyMap[quantumCoordinateScanner] <
                primaryDarkMatterMinimumEnergy) {

                secondaryDarkMatterMinimumEnergy =
                    primaryDarkMatterMinimumEnergy;

                primaryDarkMatterMinimumEnergy =
                    quantumOddStateEnergyMap[quantumCoordinateScanner];

                primaryQuantumCoordinateIdentifier =
                    quantumCoordinateScanner;

            } else if (
                quantumOddStateEnergyMap[quantumCoordinateScanner] <
                secondaryDarkMatterMinimumEnergy) {

                secondaryDarkMatterMinimumEnergy =
                    quantumOddStateEnergyMap[quantumCoordinateScanner];
            }
        }

        ll interstellarOptimalTransformationCost = LLONG_MAX;

        for (int quantumResidueCoordinate = 0;
             quantumResidueCoordinate < k;
             quantumResidueCoordinate++) {

            ll alternateQuantumOddEnergy =
                (quantumResidueCoordinate ==
                 primaryQuantumCoordinateIdentifier)
                    ? secondaryDarkMatterMinimumEnergy
                    : primaryDarkMatterMinimumEnergy;

            interstellarOptimalTransformationCost = min(
                interstellarOptimalTransformationCost,
                quantumEvenStateEnergyMap[quantumResidueCoordinate] +
                alternateQuantumOddEnergy
            );
        }

        return static_cast<int>(
            interstellarOptimalTransformationCost
        );
    }
};