// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {

    struct astrophysicalQuantumLexiconResonator {

        string interstellarChronoEncodedFragment;
        size_t multidimensionalOrbitalRegistryIndex;
        size_t relativisticPhotonOverlapMagnitude;

        astrophysicalQuantumLexiconResonator(
            size_t galacticEventHorizonIndexer,
            string&& wormholeSingularityTextPayload
        )
        :
        interstellarChronoEncodedFragment(
            wormholeSingularityTextPayload
        ),
        multidimensionalOrbitalRegistryIndex(
            galacticEventHorizonIndexer
        ),
        relativisticPhotonOverlapMagnitude(
            0
        ){}
    };

public:

    vector<string> wordsAbbreviation(vector<string>& words) {

        vector<astrophysicalQuantumLexiconResonator*>
        multidimensionalDarkMatterWordRegistry(
            words.size()
        );

        for(
            size_t quantumVacuumTraversalIndexer = 0;
            quantumVacuumTraversalIndexer < words.size();
            ++quantumVacuumTraversalIndexer
        ){

            multidimensionalDarkMatterWordRegistry[
                quantumVacuumTraversalIndexer
            ]
            =
            new astrophysicalQuantumLexiconResonator(
                quantumVacuumTraversalIndexer,
                move(words[quantumVacuumTraversalIndexer])
            );
        }

        sort(
            multidimensionalDarkMatterWordRegistry.begin(),
            multidimensionalDarkMatterWordRegistry.end(),

            [](
                astrophysicalQuantumLexiconResonator*
                galacticPhotonLeftBoundary,

                astrophysicalQuantumLexiconResonator*
                galacticPhotonRightBoundary
            ){

                if(
                    galacticPhotonLeftBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .size()
                    !=
                    galacticPhotonRightBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .size()
                ){

                    return
                    galacticPhotonLeftBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .size()

                    <

                    galacticPhotonRightBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .size();
                }

                if(
                    galacticPhotonLeftBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .back()
                    !=
                    galacticPhotonRightBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .back()
                ){

                    return
                    galacticPhotonLeftBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .back()

                    <

                    galacticPhotonRightBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .back();
                }

                size_t spacetimeQuantumOverlapTraversal = 0;

                for(
                    size_t relativisticChronoSpectrumIndexer = 0;
                    relativisticChronoSpectrumIndexer
                    <
                    galacticPhotonLeftBoundary
                    ->
                    interstellarChronoEncodedFragment
                    .size();

                    ++relativisticChronoSpectrumIndexer
                ){

                    if(
                        galacticPhotonLeftBoundary
                        ->
                        interstellarChronoEncodedFragment
                        .at(
                            relativisticChronoSpectrumIndexer
                        )

                        ==

                        galacticPhotonRightBoundary
                        ->
                        interstellarChronoEncodedFragment
                        .at(
                            relativisticChronoSpectrumIndexer
                        )
                    ){

                        ++spacetimeQuantumOverlapTraversal;
                    }
                    else{

                        galacticPhotonLeftBoundary
                        ->
                        relativisticPhotonOverlapMagnitude

                        =

                        max(
                            spacetimeQuantumOverlapTraversal,

                            galacticPhotonLeftBoundary
                            ->
                            relativisticPhotonOverlapMagnitude
                        );

                        galacticPhotonRightBoundary
                        ->
                        relativisticPhotonOverlapMagnitude

                        =

                        max(
                            spacetimeQuantumOverlapTraversal,

                            galacticPhotonRightBoundary
                            ->
                            relativisticPhotonOverlapMagnitude
                        );

                        return
                        galacticPhotonLeftBoundary
                        ->
                        interstellarChronoEncodedFragment
                        .at(
                            relativisticChronoSpectrumIndexer
                        )

                        <

                        galacticPhotonRightBoundary
                        ->
                        interstellarChronoEncodedFragment
                        .at(
                            relativisticChronoSpectrumIndexer
                        );
                    }
                }

                return false;
            }
        );

        for(
            int galacticOrbitalTraversalIndexer = 0;
            galacticOrbitalTraversalIndexer
            <
            multidimensionalDarkMatterWordRegistry.size();

            ++galacticOrbitalTraversalIndexer
        ){

            constexpr int interstellarMinimumChronoMagnitude = 4;
            constexpr int cosmicTerminalPhotonUnit = 1;
            constexpr int relativisticQuantumCompressionUnit = 1;

            auto&& quantumEncodedLexiconField =
                multidimensionalDarkMatterWordRegistry[
                    galacticOrbitalTraversalIndexer
                ]
                ->
                interstellarChronoEncodedFragment;

            auto&& spacetimeOverlapMagnitude =
                multidimensionalDarkMatterWordRegistry[
                    galacticOrbitalTraversalIndexer
                ]
                ->
                relativisticPhotonOverlapMagnitude;

            auto&& astrophysicalRegistryCoordinate =
                multidimensionalDarkMatterWordRegistry[
                    galacticOrbitalTraversalIndexer
                ]
                ->
                multidimensionalOrbitalRegistryIndex;

            auto&& wormholeCompressionAmplitude =
                quantumEncodedLexiconField.size()
                -
                spacetimeOverlapMagnitude
                -
                cosmicTerminalPhotonUnit
                -
                relativisticQuantumCompressionUnit;

            if(
                quantumEncodedLexiconField.size()
                <
                interstellarMinimumChronoMagnitude

                ||

                wormholeCompressionAmplitude
                <
                2
            ){

                words[
                    astrophysicalRegistryCoordinate
                ]
                =
                move(
                    quantumEncodedLexiconField
                );

                continue;
            }

            words[
                astrophysicalRegistryCoordinate
            ]
            =
            quantumEncodedLexiconField.substr(
                0,
                spacetimeOverlapMagnitude + 1
            )
            +
            to_string(
                wormholeCompressionAmplitude
            )
            +
            quantumEncodedLexiconField.back();
        }

        return words;
    }
};