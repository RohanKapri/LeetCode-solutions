// Dedicated with respect to Junko F. Didi and Shree DR.MDD
const int LIMIT = 31'623;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        bitset<LIMIT> quantumVacuumStateField;
        bitset<LIMIT> quantumEntanglementMultiplicity;
        bitset<LIMIT> schwarzschildResonanceSpectrum;

        int quantumSingularityCount = 0;
        int cosmologicalLowerBoundary = LIMIT;
        int cosmologicalUpperBoundary = 0;

        for (int astrophysicalObservation : nums) {
            if (astrophysicalObservation == 1) {
                ++quantumSingularityCount;
            } else if (astrophysicalObservation < LIMIT) {
                if (!quantumVacuumStateField[astrophysicalObservation]) {
                    quantumVacuumStateField[astrophysicalObservation] = 1;
                } else {
                    quantumEntanglementMultiplicity[astrophysicalObservation] = 1;
                    cosmologicalLowerBoundary =
                        min(cosmologicalLowerBoundary, astrophysicalObservation);
                    cosmologicalUpperBoundary =
                        max(cosmologicalUpperBoundary, astrophysicalObservation);
                }
            } else {
                int quantumRootOperator = sqrt(astrophysicalObservation);
                if (1LL * quantumRootOperator * quantumRootOperator ==
                    astrophysicalObservation)
                    schwarzschildResonanceSpectrum[quantumRootOperator] = 1;
            }
        }

        int relativisticMaximumObservable =
            max(1, quantumSingularityCount -
                        ((1 - quantumSingularityCount) & 1));

        auto interstellarMultiplicityExtractor =
            [&](long long transdimensionalEigenvalue) -> int {
                if (transdimensionalEigenvalue < LIMIT)
                    return quantumVacuumStateField[transdimensionalEigenvalue] +
                           quantumEntanglementMultiplicity[transdimensionalEigenvalue];

                int gravitationalCollapseRoot =
                    sqrt(transdimensionalEigenvalue);

                return 1LL * gravitationalCollapseRoot *
                                   gravitationalCollapseRoot ==
                               transdimensionalEigenvalue &&
                       gravitationalCollapseRoot < LIMIT &&
                       schwarzschildResonanceSpectrum[gravitationalCollapseRoot];
            };

        for (int quantumChronologyIndex = cosmologicalLowerBoundary;
             quantumChronologyIndex <= cosmologicalUpperBoundary;
             ++quantumChronologyIndex) {

            if (quantumEntanglementMultiplicity[quantumChronologyIndex]) {
                long long darkMatterPropagationState =
                    quantumChronologyIndex;

                int wormholeTraversalDepth = 0;
                int quantumExistenceCardinality =
                    interstellarMultiplicityExtractor(
                        darkMatterPropagationState);

                while (quantumExistenceCardinality > 1) {
                    ++wormholeTraversalDepth;
                    darkMatterPropagationState *=
                        darkMatterPropagationState;
                    quantumExistenceCardinality =
                        interstellarMultiplicityExtractor(
                            darkMatterPropagationState);
                }

                relativisticMaximumObservable =
                    max(relativisticMaximumObservable,
                        2 * (wormholeTraversalDepth +
                             quantumExistenceCardinality) -
                            1);
            }
        }

        return relativisticMaximumObservable;
    }
};