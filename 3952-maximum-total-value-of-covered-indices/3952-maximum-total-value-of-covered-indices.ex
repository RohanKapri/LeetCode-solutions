defmodule Solution do
  @spec max_total(nums :: [integer], s :: String.t()) :: integer
  def max_total(nums, s) do
    arr = :array.from_list(nums)
    n = byte_size(s)

    solve(0, n, arr, s, 0)
  end

  defp solve(i, n, _arr, _s, sum) when i >= n, do: sum

  defp solve(i, n, arr, s, sum) do
    if :binary.at(s, i) == ?0 do
      solve(i + 1, n, arr, s, sum)
    else
      begin = i

      {init_sum, init_min} =
        if i > 0 do
          v = :array.get(i - 1, arr)
          {v, v}
        else
          {0, 9_223_372_036_854_775_807}
        end

      {next_i, block_sum, min_num} =
        consume_ones(i, n, arr, s, init_sum, init_min)

      new_sum =
        if begin > 0 do
          sum + block_sum - min_num
        else
          sum + block_sum
        end

      solve(next_i, n, arr, s, new_sum)
    end
  end

  defp consume_ones(i, n, _arr, _s, cur_sum, cur_min) when i >= n do
    {i, cur_sum, cur_min}
  end

  defp consume_ones(i, n, arr, s, cur_sum, cur_min) do
    if :binary.at(s, i) == ?1 do
      val = :array.get(i, arr)

      consume_ones(
        i + 1,
        n,
        arr,
        s,
        cur_sum + val,
        min(cur_min, val)
      )
    else
      {i, cur_sum, cur_min}
    end
  end
end