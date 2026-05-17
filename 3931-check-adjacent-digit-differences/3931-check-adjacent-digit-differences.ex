defmodule Solution do
  @spec is_adjacent_diff_at_most_two(s :: String.t()) :: boolean
  def is_adjacent_diff_at_most_two(s) do
    s
    |> String.to_charlist()
    |> Enum.chunk_every(2, 1, :discard)
    |> Enum.all?(fn [a, b] -> abs(a - b) <= 2 end)
  end
end