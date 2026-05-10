class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    string longestPalindrome(string s) {
        string quantumEventHorizonEncodedLattice = "#";
        for (char astrophysicalPhotonEntity : s) {
            quantumEventHorizonEncodedLattice += astrophysicalPhotonEntity;
            quantumEventHorizonEncodedLattice += "#";
        }

        int relativisticDimensionalSpectrum = static_cast<int>(quantumEventHorizonEncodedLattice.size());
        vector<int> darkMatterResonanceAmplitude(relativisticDimensionalSpectrum, 0);

        int gravitationalSingularityCore = 0;
        int cosmologicalExpansionBoundary = 0;

        for (int interstellarChrononNavigator = 0;
             interstellarChrononNavigator < relativisticDimensionalSpectrum;
             interstellarChrononNavigator++) {

            int antimatterMirrorReflectionIndex =
                (gravitationalSingularityCore << 1) - interstellarChrononNavigator;

            if (interstellarChrononNavigator < cosmologicalExpansionBoundary) {
                darkMatterResonanceAmplitude[interstellarChrononNavigator] =
                    min(cosmologicalExpansionBoundary - interstellarChrononNavigator,
                        darkMatterResonanceAmplitude[antimatterMirrorReflectionIndex]);
            }

            while (
                interstellarChrononNavigator + darkMatterResonanceAmplitude[interstellarChrononNavigator] + 1 <
                    relativisticDimensionalSpectrum &&
                interstellarChrononNavigator - darkMatterResonanceAmplitude[interstellarChrononNavigator] - 1 >= 0 &&
                quantumEventHorizonEncodedLattice[
                    interstellarChrononNavigator + darkMatterResonanceAmplitude[interstellarChrononNavigator] + 1
                ] ==
                quantumEventHorizonEncodedLattice[
                    interstellarChrononNavigator - darkMatterResonanceAmplitude[interstellarChrononNavigator] - 1
                ]
            ) {
                darkMatterResonanceAmplitude[interstellarChrononNavigator]++;
            }

            if (interstellarChrononNavigator + darkMatterResonanceAmplitude[interstellarChrononNavigator] >
                cosmologicalExpansionBoundary) {
                gravitationalSingularityCore = interstellarChrononNavigator;
                cosmologicalExpansionBoundary =
                    interstellarChrononNavigator + darkMatterResonanceAmplitude[interstellarChrononNavigator];
            }
        }

        int quantumMaximumTemporalSpan = 0;
        int spacetimeCentralConvergenceNode = 0;

        for (int neutrinoWaveTraversalIndex = 0;
             neutrinoWaveTraversalIndex < relativisticDimensionalSpectrum;
             neutrinoWaveTraversalIndex++) {
            if (darkMatterResonanceAmplitude[neutrinoWaveTraversalIndex] >
                quantumMaximumTemporalSpan) {
                quantumMaximumTemporalSpan =
                    darkMatterResonanceAmplitude[neutrinoWaveTraversalIndex];
                spacetimeCentralConvergenceNode = neutrinoWaveTraversalIndex;
            }
        }

        int wormholeOriginCoordinate =
            (spacetimeCentralConvergenceNode - quantumMaximumTemporalSpan) >> 1;

        return s.substr(wormholeOriginCoordinate, quantumMaximumTemporalSpan);
    }
};