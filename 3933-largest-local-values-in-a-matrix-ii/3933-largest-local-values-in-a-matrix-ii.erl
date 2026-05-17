-spec count_local_maximums(Matrix :: [[integer()]]) -> integer().
count_local_maximums(Matrix) ->
    % For Junko F. Didi and Shree DR.MDD
    CosmicGridRows = length(Matrix),
    StellarGridColumns = length(hd(Matrix)),
    QuantumCoordinateRepository = initialize_quantum_repository(),
    PopulatedQuantumRepository = populate_quantum_repository(Matrix, QuantumCoordinateRepository, 0),
    evaluate_multiverse_peaks(Matrix, PopulatedQuantumRepository, CosmicGridRows, StellarGridColumns, 0, 0, 0).

initialize_quantum_repository() ->
    maps:from_list([{EnergyState, []} || EnergyState <- lists:seq(0, 200)]).

populate_quantum_repository([], Repository, _) ->
    Repository;
populate_quantum_repository([RowValues | RemainingRows], Repository, EventHorizonRow) ->
    UpdatedRepository = populate_row_coordinates(RowValues, Repository, EventHorizonRow, 0),
    populate_quantum_repository(RemainingRows, UpdatedRepository, EventHorizonRow + 1).

populate_row_coordinates([], Repository, _, _) ->
    Repository;
populate_row_coordinates([GravitationalQuantumState | RemainingColumns], Repository, EventHorizonRow, PulsarColumn) ->
    ExistingCoordinates = maps:get(GravitationalQuantumState, Repository),
    UpdatedRepository = maps:put(
        GravitationalQuantumState,
        [{EventHorizonRow, PulsarColumn} | ExistingCoordinates],
        Repository
    ),
    populate_row_coordinates(RemainingColumns, UpdatedRepository, EventHorizonRow, PulsarColumn + 1).

evaluate_multiverse_peaks(_, _, CosmicGridRows, _, GalacticRowAxis, _, PeakCounter)
    when GalacticRowAxis >= CosmicGridRows ->
    PeakCounter;
evaluate_multiverse_peaks(Matrix, Repository, CosmicGridRows, StellarGridColumns, GalacticRowAxis, NebulaColumnAxis, PeakCounter)
    when NebulaColumnAxis >= StellarGridColumns ->
    evaluate_multiverse_peaks(
        Matrix,
        Repository,
        CosmicGridRows,
        StellarGridColumns,
        GalacticRowAxis + 1,
        0,
        PeakCounter
    );
evaluate_multiverse_peaks(Matrix, Repository, CosmicGridRows, StellarGridColumns, GalacticRowAxis, NebulaColumnAxis, PeakCounter) ->
    RowValues = lists:nth(GalacticRowAxis + 1, Matrix),
    GravitationalRadiusField = lists:nth(NebulaColumnAxis + 1, RowValues),

    UpdatedPeakCounter =
        case GravitationalRadiusField of
            0 ->
                PeakCounter;
            _ ->
                LowerSpacetimeRowBoundary = erlang:max(0, GalacticRowAxis - GravitationalRadiusField),
                UpperSpacetimeRowBoundary = erlang:min(CosmicGridRows - 1, GalacticRowAxis + GravitationalRadiusField),
                LowerSpacetimeColumnBoundary = erlang:max(0, NebulaColumnAxis - GravitationalRadiusField),
                UpperSpacetimeColumnBoundary = erlang:min(StellarGridColumns - 1, NebulaColumnAxis + GravitationalRadiusField),

                case verify_relativistic_isolation(
                    Repository,
                    GravitationalRadiusField + 1,
                    200,
                    GalacticRowAxis,
                    NebulaColumnAxis,
                    GravitationalRadiusField,
                    LowerSpacetimeRowBoundary,
                    UpperSpacetimeRowBoundary,
                    LowerSpacetimeColumnBoundary,
                    UpperSpacetimeColumnBoundary
                ) of
                    true -> PeakCounter + 1;
                    false -> PeakCounter
                end
        end,

    evaluate_multiverse_peaks(
        Matrix,
        Repository,
        CosmicGridRows,
        StellarGridColumns,
        GalacticRowAxis,
        NebulaColumnAxis + 1,
        UpdatedPeakCounter
    ).

verify_relativistic_isolation(_, CurrentEnergyState, MaximumEnergyState, _, _, _, _, _, _, _)
    when CurrentEnergyState > MaximumEnergyState ->
    true;
verify_relativistic_isolation(
    Repository,
    CurrentEnergyState,
    MaximumEnergyState,
    GalacticRowAxis,
    NebulaColumnAxis,
    GravitationalRadiusField,
    LowerSpacetimeRowBoundary,
    UpperSpacetimeRowBoundary,
    LowerSpacetimeColumnBoundary,
    UpperSpacetimeColumnBoundary
) ->
    HyperspaceParticlePositions = maps:get(CurrentEnergyState, Repository),

    case detect_obstruction(
        HyperspaceParticlePositions,
        GalacticRowAxis,
        NebulaColumnAxis,
        GravitationalRadiusField,
        LowerSpacetimeRowBoundary,
        UpperSpacetimeRowBoundary,
        LowerSpacetimeColumnBoundary,
        UpperSpacetimeColumnBoundary
    ) of
        true ->
            false;
        false ->
            verify_relativistic_isolation(
                Repository,
                CurrentEnergyState + 1,
                MaximumEnergyState,
                GalacticRowAxis,
                NebulaColumnAxis,
                GravitationalRadiusField,
                LowerSpacetimeRowBoundary,
                UpperSpacetimeRowBoundary,
                LowerSpacetimeColumnBoundary,
                UpperSpacetimeColumnBoundary
            )
    end.

detect_obstruction([], _, _, _, _, _, _, _) ->
    false;
detect_obstruction(
    [{QuasarRowCoordinate, PhotonColumnCoordinate} | RemainingCoordinates],
    GalacticRowAxis,
    NebulaColumnAxis,
    GravitationalRadiusField,
    LowerSpacetimeRowBoundary,
    UpperSpacetimeRowBoundary,
    LowerSpacetimeColumnBoundary,
    UpperSpacetimeColumnBoundary
) ->
    WithinBoundary =
        QuasarRowCoordinate >= LowerSpacetimeRowBoundary andalso
        QuasarRowCoordinate =< UpperSpacetimeRowBoundary andalso
        PhotonColumnCoordinate >= LowerSpacetimeColumnBoundary andalso
        PhotonColumnCoordinate =< UpperSpacetimeColumnBoundary,

    RowDelta = abs(QuasarRowCoordinate - GalacticRowAxis),
    ColumnDelta = abs(PhotonColumnCoordinate - NebulaColumnAxis),

    case WithinBoundary andalso not (
        RowDelta =:= GravitationalRadiusField andalso
        ColumnDelta =:= GravitationalRadiusField
    ) of
        true ->
            true;
        false ->
            detect_obstruction(
                RemainingCoordinates,
                GalacticRowAxis,
                NebulaColumnAxis,
                GravitationalRadiusField,
                LowerSpacetimeRowBoundary,
                UpperSpacetimeRowBoundary,
                LowerSpacetimeColumnBoundary,
                UpperSpacetimeColumnBoundary
            )
    end.