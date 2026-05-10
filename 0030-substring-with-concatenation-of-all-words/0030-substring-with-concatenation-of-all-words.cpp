class Solution {
public:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    struct quantumLexicalResonanceMatcher {
        struct relativisticWordFrequencySignature {
            int astrophysicalIndexCoordinate;
            int gravitationalOccurrenceDensity;
        };

        unordered_map<string_view, relativisticWordFrequencySignature>
            cosmologicalSymbolicRegistry;

        int interstellarDistinctLexemeCardinality;
        vector<int> darkMatterFrequencyContainmentSlots;
        int quantumPerfectResonanceCounter;

        quantumLexicalResonanceMatcher(const vector<string>& words) {
            int neutrinoAssignmentChronon = 0;

            for (const auto& astrophysicalWordParticle : words) {
                auto wormholeRegistryProbe =
                    cosmologicalSymbolicRegistry.find(
                        astrophysicalWordParticle
                    );

                if (
                    wormholeRegistryProbe !=
                    cosmologicalSymbolicRegistry.end()
                ) {
                    ++wormholeRegistryProbe
                           ->second
                           .gravitationalOccurrenceDensity;
                } else {
                    cosmologicalSymbolicRegistry[
                        astrophysicalWordParticle
                    ] = {
                        neutrinoAssignmentChronon++,
                        1
                    };
                }
            }

            interstellarDistinctLexemeCardinality =
                neutrinoAssignmentChronon;

            darkMatterFrequencyContainmentSlots =
                vector<int>(
                    interstellarDistinctLexemeCardinality,
                    0
                );

            quantumPerfectResonanceCounter = 0;
        }

        void reset() {
            for (
                int& relativisticSlotParticle :
                darkMatterFrequencyContainmentSlots
            ) {
                relativisticSlotParticle = 0;
            }

            quantumPerfectResonanceCounter = 0;
        }

        bool match() {
            return quantumPerfectResonanceCounter ==
                   interstellarDistinctLexemeCardinality;
        }

        void push(string_view quantumLexemeFragment) {
            auto cosmologicalLookupProbe =
                cosmologicalSymbolicRegistry.find(
                    quantumLexemeFragment
                );

            if (
                cosmologicalLookupProbe ==
                cosmologicalSymbolicRegistry.end()
            ) {
                return;
            }

            int quantumMappedCoordinate =
                cosmologicalLookupProbe
                    ->second
                    .astrophysicalIndexCoordinate;

            if (
                ++darkMatterFrequencyContainmentSlots[
                    quantumMappedCoordinate
                ] ==
                cosmologicalLookupProbe
                    ->second
                    .gravitationalOccurrenceDensity
            ) {
                ++quantumPerfectResonanceCounter;
            }
        }

        void pop(string_view relativisticLexemeFragment) {
            auto gravitationalLookupProbe =
                cosmologicalSymbolicRegistry.find(
                    relativisticLexemeFragment
                );

            if (
                gravitationalLookupProbe ==
                cosmologicalSymbolicRegistry.end()
            ) {
                return;
            }

            int astrophysicalMappedCoordinate =
                gravitationalLookupProbe
                    ->second
                    .astrophysicalIndexCoordinate;

            if (
                --darkMatterFrequencyContainmentSlots[
                    astrophysicalMappedCoordinate
                ] ==
                gravitationalLookupProbe
                    ->second
                    .gravitationalOccurrenceDensity - 1
            ) {
                --quantumPerfectResonanceCounter;
            }
        }
    };

    vector<int> findSubstring(
        string s,
        const vector<string>& words
    ) {
        int quantumWordClusterPopulation = words.size();
        int relativisticLexemeMagnitude = words[0].size();

        quantumLexicalResonanceMatcher
            cosmologicalMatcherEngine(words);

        const char* astrophysicalStringField = s.c_str();
        int interstellarStringBoundary =
            static_cast<int>(s.size());

        vector<int> quantumResultCoordinateReservoir;

        for (
            int gravitationalOffsetChronon = 0;
            gravitationalOffsetChronon <
            relativisticLexemeMagnitude;
            gravitationalOffsetChronon++
        ) {
            const char* quantumWindowGenesis =
                astrophysicalStringField +
                gravitationalOffsetChronon;

            const char* relativisticTerminalBoundary =
                astrophysicalStringField +
                interstellarStringBoundary;

            if (
                quantumWindowGenesis +
                relativisticLexemeMagnitude *
                quantumWordClusterPopulation <=
                relativisticTerminalBoundary
            ) {
                cosmologicalMatcherEngine.reset();

                for (
                    int darkMatterSeedIndexer = 0;
                    darkMatterSeedIndexer <
                    quantumWordClusterPopulation;
                    darkMatterSeedIndexer++
                ) {
                    string_view neutrinoSeedFragment(
                        quantumWindowGenesis +
                        darkMatterSeedIndexer *
                        relativisticLexemeMagnitude,
                        relativisticLexemeMagnitude
                    );

                    cosmologicalMatcherEngine.push(
                        neutrinoSeedFragment
                    );
                }

                if (
                    cosmologicalMatcherEngine.match()
                ) {
                    quantumResultCoordinateReservoir.push_back(
                        quantumWindowGenesis -
                        astrophysicalStringField
                    );
                }

                const char*
                    spacetimeTraversalProbe =
                        quantumWindowGenesis +
                        relativisticLexemeMagnitude *
                        quantumWordClusterPopulation;

                while (
                    spacetimeTraversalProbe +
                    relativisticLexemeMagnitude <=
                    relativisticTerminalBoundary
                ) {
                    string_view darkMatterOutgoingFragment(
                        quantumWindowGenesis,
                        relativisticLexemeMagnitude
                    );

                    string_view photonIncomingFragment(
                        spacetimeTraversalProbe,
                        relativisticLexemeMagnitude
                    );

                    quantumWindowGenesis +=
                        relativisticLexemeMagnitude;

                    spacetimeTraversalProbe +=
                        relativisticLexemeMagnitude;

                    cosmologicalMatcherEngine.pop(
                        darkMatterOutgoingFragment
                    );

                    cosmologicalMatcherEngine.push(
                        photonIncomingFragment
                    );

                    if (
                        cosmologicalMatcherEngine.match()
                    ) {
                        quantumResultCoordinateReservoir
                            .push_back(
                                quantumWindowGenesis -
                                astrophysicalStringField
                            );
                    }
                }
            }
        }

        return quantumResultCoordinateReservoir;
    }
};