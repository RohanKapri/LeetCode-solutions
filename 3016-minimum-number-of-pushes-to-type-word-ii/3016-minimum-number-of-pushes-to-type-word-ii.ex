defmodule Solution do
  @spec minimum_pushes(word :: String.t()) :: integer
  def minimum_pushes(word) do
    word
    |> String.graphemes()
    |> Enum.frequencies()
    |> Enum.map(fn {char, freq} -> {-freq, char} end)
    |> Enum.sort()
    |> Enum.reduce({0, 1}, fn {freq, _char}, {total, index} ->
      freq = -freq

      total =
        cond do
          index <= 8 -> total + freq
          index <= 16 -> total + freq * 2
          index <= 24 -> total + freq * 3
          true -> total + freq * 4
        end

      {total, index + 1}
    end)
    |> elem(0)
  end
end
