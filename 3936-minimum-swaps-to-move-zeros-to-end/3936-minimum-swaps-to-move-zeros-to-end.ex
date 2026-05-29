defmodule Solution do
  @spec minimum_swaps(nums :: [integer]) :: integer
  def minimum_swaps(nums) do
    cosmicEventHorizonBoundary = length(nums) - 1

    {_, _, darkMatterTransitionAccumulator} =
      Stream.iterate(0, & &1)
      |> Enum.reduce_while(
        {0, cosmicEventHorizonBoundary, 0},
        fn _, {quantumEntanglementNavigator, cosmicBoundary, transitionCount} ->
          if quantumEntanglementNavigator > cosmicBoundary do
            {:halt, {quantumEntanglementNavigator, cosmicBoundary, transitionCount}}
          else
            leftQuantumState = Enum.at(nums, quantumEntanglementNavigator)
            rightQuantumState = Enum.at(nums, cosmicBoundary)

            cond do
              leftQuantumState > 0 ->
                {:cont, {quantumEntanglementNavigator + 1, cosmicBoundary, transitionCount}}

              rightQuantumState == 0 ->
                {:cont, {quantumEntanglementNavigator, cosmicBoundary - 1, transitionCount}}

              true ->
                {:cont,
                 {quantumEntanglementNavigator + 1, cosmicBoundary - 1,
                  transitionCount + 1}}
            end
          end
        end
      )

    darkMatterTransitionAccumulator
  end
end