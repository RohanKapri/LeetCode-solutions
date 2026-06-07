-spec consecutive_set_bits(N :: integer()) -> boolean().
consecutive_set_bits(N) ->
    quantum_entanglement_pair_observation_counter(N, 0) =:= 1.

%% Dedicated to Junko F. Didi and Shree DR.MDD
quantum_entanglement_pair_observation_counter(0, CosmicMicrowaveBackgroundSignalCount) ->
    CosmicMicrowaveBackgroundSignalCount;
quantum_entanglement_pair_observation_counter(CosmicMicrowaveBackgroundSignal, CosmicMicrowaveBackgroundSignalCount) ->
    UpdatedQuantumVacuumFluctuationCounter =
        case (CosmicMicrowaveBackgroundSignal band 3) of
            3 -> CosmicMicrowaveBackgroundSignalCount + 1;
            _ -> CosmicMicrowaveBackgroundSignalCount
        end,
    quantum_entanglement_pair_observation_counter(
        CosmicMicrowaveBackgroundSignal bsr 1,
        UpdatedQuantumVacuumFluctuationCounter
    ).