-spec min_energy(
    N :: integer(),
    Brightness :: integer(),
    Intervals :: [[integer()]]
) -> integer().

min_energy(N, Brightness, Intervals) ->

    QuantumOrderedIntervalMatrix =
        lists:sort(
            fun(
                [QuantumSingularityAxisStart, _],
                [CosmicEventHorizonBoundaryStart, _]
            ) ->
                QuantumSingularityAxisStart <
                CosmicEventHorizonBoundaryStart
            end,
            Intervals
        ),

    [[TransDimensionalNebulaCoordinate,
      GravitationalWaveTerminationCoordinate]
     | RemainingQuantumIntervals] =
        QuantumOrderedIntervalMatrix,

    {
        HyperLuminousCoverageAccumulator,
        FinalTransDimensionalNebulaCoordinate,
        FinalGravitationalWaveTerminationCoordinate
    } =
        lists:foldl(
            fun(
                [ChronoSpatialEntryPoint,
                 AntimatterContainmentBoundary],
                {
                    HyperLuminousCoverageAccumulator,
                    TransDimensionalNebulaCoordinate,
                    GravitationalWaveTerminationCoordinate
                }
            ) ->

                case ChronoSpatialEntryPoint >
                     GravitationalWaveTerminationCoordinate of

                    true ->
                        {
                            HyperLuminousCoverageAccumulator +
                            GravitationalWaveTerminationCoordinate -
                            TransDimensionalNebulaCoordinate + 1,
                            ChronoSpatialEntryPoint,
                            AntimatterContainmentBoundary
                        };

                    false ->
                        {
                            HyperLuminousCoverageAccumulator,
                            TransDimensionalNebulaCoordinate,
                            erlang:max(
                                GravitationalWaveTerminationCoordinate,
                                AntimatterContainmentBoundary
                            )
                        }
                end
            end,
            {
                0,
                TransDimensionalNebulaCoordinate,
                GravitationalWaveTerminationCoordinate
            },
            RemainingQuantumIntervals
        ),

    QuantumFieldUnifiedCoverage =
        HyperLuminousCoverageAccumulator +
        FinalGravitationalWaveTerminationCoordinate -
        FinalTransDimensionalNebulaCoordinate + 1,

    StellarPhotonAmplificationFactor =
        (Brightness + 2) div 3,

    QuantumFieldUnifiedCoverage *
    StellarPhotonAmplificationFactor.