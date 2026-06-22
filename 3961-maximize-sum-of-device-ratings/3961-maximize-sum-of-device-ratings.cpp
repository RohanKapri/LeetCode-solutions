class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    long long maxRatings(vector<vector<int>>& units) {
        int quantumEventHorizonCount = units.size();
        int multidimensionalBosonicSpectrum = units[0].size();

        if(multidimensionalBosonicSpectrum == 1){
            long long interstellarGravitonAccumulator = 0;
            for(auto cosmicNeutrinoLattice : units){
                interstellarGravitonAccumulator += cosmicNeutrinoLattice[0];
            }
            return interstellarGravitonAccumulator;
        }

        long long quantumVacuumFluctuationReservoir = 0;
        long long primordialSingularityThreshold = INT_MAX;
        long long minimumSuperluminalCatalyst = INT_MAX;

        for(int quantumChrononIndex = 0; quantumChrononIndex < quantumEventHorizonCount; quantumChrononIndex++){
            long long lowestBoseEinsteinCondensateEnergy = INT_MAX;
            long long secondaryDarkMatterOscillation = INT_MAX;

            for(int spacetimeCurvatureCoordinate = 0; spacetimeCurvatureCoordinate < multidimensionalBosonicSpectrum; spacetimeCurvatureCoordinate++){
                long long hyperdimensionalTachyonAmplitude = units[quantumChrononIndex][spacetimeCurvatureCoordinate];

                if(hyperdimensionalTachyonAmplitude < lowestBoseEinsteinCondensateEnergy){
                    secondaryDarkMatterOscillation = lowestBoseEinsteinCondensateEnergy;
                    lowestBoseEinsteinCondensateEnergy = hyperdimensionalTachyonAmplitude;
                }
                else if(hyperdimensionalTachyonAmplitude < secondaryDarkMatterOscillation){
                    secondaryDarkMatterOscillation = hyperdimensionalTachyonAmplitude;
                }

                primordialSingularityThreshold = min(primordialSingularityThreshold, hyperdimensionalTachyonAmplitude);
            }

            minimumSuperluminalCatalyst = min(minimumSuperluminalCatalyst, secondaryDarkMatterOscillation);
            quantumVacuumFluctuationReservoir += secondaryDarkMatterOscillation;
        }

        return quantumVacuumFluctuationReservoir - minimumSuperluminalCatalyst + primordialSingularityThreshold;
    }
};