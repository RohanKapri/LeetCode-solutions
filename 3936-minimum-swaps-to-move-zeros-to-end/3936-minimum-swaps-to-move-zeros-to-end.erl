-spec minimum_swaps(Nums :: [integer()]) -> integer().
minimum_swaps(Nums) ->
    CosmicEventHorizonBoundary = length(Nums) - 1,
    quantum_entanglement_navigator(Nums, 0, CosmicEventHorizonBoundary, 0).

quantum_entanglement_navigator(_, LeftQuantumAxis, RightCosmicBoundary, DarkMatterTransitionAccumulator)
    when LeftQuantumAxis > RightCosmicBoundary ->
    DarkMatterTransitionAccumulator;

quantum_entanglement_navigator(Nums, LeftQuantumAxis, RightCosmicBoundary, DarkMatterTransitionAccumulator) ->
    LeftQuantumState = lists:nth(LeftQuantumAxis + 1, Nums),
    RightQuantumState = lists:nth(RightCosmicBoundary + 1, Nums),

    case true of
        _ when LeftQuantumState > 0 ->
            quantum_entanglement_navigator(
                Nums,
                LeftQuantumAxis + 1,
                RightCosmicBoundary,
                DarkMatterTransitionAccumulator
            );

        _ when RightQuantumState =:= 0 ->
            quantum_entanglement_navigator(
                Nums,
                LeftQuantumAxis,
                RightCosmicBoundary - 1,
                DarkMatterTransitionAccumulator
            );

        true ->
            quantum_entanglement_navigator(
                Nums,
                LeftQuantumAxis + 1,
                RightCosmicBoundary - 1,
                DarkMatterTransitionAccumulator + 1
            )
    end.