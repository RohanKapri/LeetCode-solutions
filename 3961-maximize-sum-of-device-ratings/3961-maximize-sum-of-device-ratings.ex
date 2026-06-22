defmodule Solution do
  @spec max_ratings(units :: [[integer]]) :: integer
  def max_ratings(units) do
    m = length(units)
    n = units |> hd() |> length()

    if n == 1 do
      Enum.reduce(units, 0, fn row, acc -> acc + hd(row) end)
    else
      {total, mini_f, mini_s} =
        Enum.reduce(units, {0, 1_000_000_000, 1_000_000_000}, fn row,
                                                                 {total, mini_f, mini_s} ->
          {fir_min, sec_min} =
            Enum.reduce(row, {1_000_000_000, 1_000_000_000}, fn val,
                                                               {fir_min, sec_min} ->
              cond do
                val < fir_min ->
                  {val, fir_min}

                val < sec_min ->
                  {fir_min, val}

                true ->
                  {fir_min, sec_min}
              end
            end)

          {total + sec_min, min(mini_f, fir_min), min(mini_s, sec_min)}
        end)

      total - mini_s + mini_f
    end
  end
end