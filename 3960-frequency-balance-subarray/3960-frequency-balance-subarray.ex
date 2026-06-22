defmodule Solution do
  use Bitwise

  @spec get_length(nums :: [integer]) :: integer
  def get_length(nums) do
    nums_list = nums
    n = length(nums_list)

    {mp, idx} =
      Enum.reduce(nums_list, {%{}, 0}, fn x, {mp, idx} ->
        if Map.has_key?(mp, x) do
          {mp, idx}
        else
          {Map.put(mp, x, idx), idx + 1}
        end
      end)

    nums =
      nums_list
      |> Enum.map(&Map.fetch!(mp, &1))
      |> :array.from_list()

    do_i(0, n, nums, idx, 0)
  end

  defp do_i(i, n, _nums, _idx, ans) when i + ans >= n, do: ans

  defp do_i(i, n, nums, idx, ans) do
    len = min(n - i + 1, n - idx + 2)

    freq = :array.new(idx, default: 0)
    freq_freq = :array.new(len, default: 0)

    ans =
      do_j(
        i,
        i,
        n,
        nums,
        len,
        freq,
        freq_freq,
        0,
        0,
        ans
      )

    do_i(i + 1, n, nums, idx, ans)
  end

  defp do_j(_i, j, n, _nums, _len, _freq, _freq_freq, _num_count, _freq_count, ans)
       when j >= n,
       do: ans

  defp do_j(i, j, n, nums, len, freq, freq_freq, num_count, freq_count, ans) do
    x = :array.get(j, nums)

    val = :array.get(x, freq) + 1
    freq = :array.set(x, val, freq)

    num_count =
      if val == 1 do
        num_count + 1
      else
        num_count
      end

    freq_count =
      if :array.get(val, freq_freq) == 0 do
        freq_count + 1
      else
        freq_count
      end

    freq_freq =
      :array.set(
        val,
        :array.get(val, freq_freq) + 1,
        freq_freq
      )

    {freq_freq, freq_count} =
      if val != 1 do
        prev_cnt = :array.get(val - 1, freq_freq) - 1
        freq_freq = :array.set(val - 1, prev_cnt, freq_freq)

        freq_count =
          if prev_cnt == 0 do
            freq_count - 1
          else
            freq_count
          end

        {freq_freq, freq_count}
      else
        {freq_freq, freq_count}
      end

    ans =
      if ans <= j - i + 1 and
           (num_count == 1 or
              (freq_count == 2 and
                 (((val &&& 1) == 0 and
                     :array.get(div(val, 2), freq_freq) != 0) or
                    ((val <<< 1) < len and
                       :array.get(val <<< 1, freq_freq) != 0)))) do
        j - i + 1
      else
        ans
      end

    do_j(
      i,
      j + 1,
      n,
      nums,
      len,
      freq,
      freq_freq,
      num_count,
      freq_count,
      ans
    )
  end
end