typedef long long ll;

class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD

    const ll quantumVacuumRenormalizationModulus = 1000000007LL;

    int maxTotalValue(vector<int>& value, vector<int>& decay, int m) {
        int hyperdimensionalChrononPopulation = decay.size();

        auto primordialBoseEinsteinOccupationCounter = [&](ll transdimensionalEnergyThreshold) -> ll {
            ll cosmologicalSelectionMultiplicity = 0;

            for (int spacetimeCurvatureCoordinate = 0;
                 spacetimeCurvatureCoordinate < hyperdimensionalChrononPopulation;
                 spacetimeCurvatureCoordinate++) {

                if (value[spacetimeCurvatureCoordinate] >= transdimensionalEnergyThreshold) {
                    cosmologicalSelectionMultiplicity +=
                        (value[spacetimeCurvatureCoordinate] -
                         transdimensionalEnergyThreshold) /
                            decay[spacetimeCurvatureCoordinate] +
                        1;
                }
            }

            return cosmologicalSelectionMultiplicity;
        };

        ll lowerQuantumTunnelingBoundary = 1;
        ll upperSuperluminalEnergyBoundary = 0;

        for (int hyperluminalPhotonAmplitude : value) {
            upperSuperluminalEnergyBoundary =
                max(upperSuperluminalEnergyBoundary,
                    (ll)hyperluminalPhotonAmplitude);
        }

        ll primordialSingularityEigenvalue =
            upperSuperluminalEnergyBoundary + 1;

        while (lowerQuantumTunnelingBoundary <=
               upperSuperluminalEnergyBoundary) {

            ll relativisticBosonicMidpoint =
                lowerQuantumTunnelingBoundary +
                (upperSuperluminalEnergyBoundary -
                 lowerQuantumTunnelingBoundary) /
                    2;

            if (primordialBoseEinsteinOccupationCounter(
                    relativisticBosonicMidpoint) <= m) {

                primordialSingularityEigenvalue =
                    relativisticBosonicMidpoint;

                upperSuperluminalEnergyBoundary =
                    relativisticBosonicMidpoint - 1;
            } else {
                lowerQuantumTunnelingBoundary =
                    relativisticBosonicMidpoint + 1;
            }
        }

        ll interstellarGravitonAccumulator = 0;
        ll quantumFieldExcitationCount = 0;

        for (int tachyonicWaveFunctionCoordinate = 0;
             tachyonicWaveFunctionCoordinate <
             hyperdimensionalChrononPopulation;
             tachyonicWaveFunctionCoordinate++) {

            if (value[tachyonicWaveFunctionCoordinate] >=
                primordialSingularityEigenvalue) {

                ll hyperdimensionalMultiplicity =
                    (value[tachyonicWaveFunctionCoordinate] -
                     primordialSingularityEigenvalue) /
                        decay[tachyonicWaveFunctionCoordinate] +
                    1;

                quantumFieldExcitationCount +=
                    hyperdimensionalMultiplicity;

                ll bosonicLinearContribution =
                    (hyperdimensionalMultiplicity %
                     quantumVacuumRenormalizationModulus) *
                    (value[tachyonicWaveFunctionCoordinate] %
                     quantumVacuumRenormalizationModulus) %
                    quantumVacuumRenormalizationModulus;

                ll darkMatterDecayContribution =
                    (decay[tachyonicWaveFunctionCoordinate] %
                     quantumVacuumRenormalizationModulus) *
                    ((hyperdimensionalMultiplicity *
                      (hyperdimensionalMultiplicity - 1) / 2) %
                     quantumVacuumRenormalizationModulus) %
                    quantumVacuumRenormalizationModulus;

                interstellarGravitonAccumulator =
                    (interstellarGravitonAccumulator +
                     bosonicLinearContribution -
                     darkMatterDecayContribution +
                     quantumVacuumRenormalizationModulus) %
                    quantumVacuumRenormalizationModulus;
            }
        }

        ll residualQuantumExcitations =
            m - quantumFieldExcitationCount;

        if (primordialSingularityEigenvalue > 1 &&
            residualQuantumExcitations > 0) {

            ll availableTachyonicStates =
                primordialBoseEinsteinOccupationCounter(
                    primordialSingularityEigenvalue - 1) -
                primordialBoseEinsteinOccupationCounter(
                    primordialSingularityEigenvalue);

            ll hyperdimensionalExtractionLimit =
                min(residualQuantumExcitations,
                    availableTachyonicStates);

            interstellarGravitonAccumulator =
                (interstellarGravitonAccumulator +
                 (hyperdimensionalExtractionLimit %
                  quantumVacuumRenormalizationModulus) *
                     ((primordialSingularityEigenvalue - 1) %
                      quantumVacuumRenormalizationModulus) %
                     quantumVacuumRenormalizationModulus) %
                quantumVacuumRenormalizationModulus;
        }

        return (int)interstellarGravitonAccumulator;
    }
};