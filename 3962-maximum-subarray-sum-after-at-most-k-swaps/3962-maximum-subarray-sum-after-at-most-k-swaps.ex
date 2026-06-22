defmodule Solution do
  @spec max_sum(nums :: [integer], k :: integer) :: integer
  def max_sum(nums, k) do
    nums_max = Enum.max(nums)

    if nums_max <= 0 do
      nums_max
    else
      nums = Enum.filter(nums, &(&1 != 0))
      n = length(nums)

      positives_count = Enum.count(nums, &(&1 > 0))
      negatives_count = n - positives_count

      cond do
        positives_count <= k + 1 or negatives_count <= k ->
          nums
          |> Enum.filter(&(&1 > 0))
          |> Enum.sum()

        true ->
          {res, _} =
            Enum.reduce_while(Enum.with_index(nums), {0, negatives_count}, fn {v, i},
                                                                              {best, neg_cnt} ->
              if v < 0 do
                {:cont, {best, neg_cnt - 1}}
              else
                best =
                  if i == 0 or Enum.at(nums, i - 1) < 0 do
                    max(best, max_from(nums, i, k))
                  else
                    best
                  end

                if neg_cnt < k do
                  {:halt, {best, neg_cnt}}
                else
                  {:cont, {best, neg_cnt}}
                end
              end
            end)

          res
      end
    end
  end

  defp max_from(nums, idx, k) do
    n = length(nums)

    largest =
      nums
      |> Enum.take(idx)
      |> Enum.filter(&(&1 > 0))
      |> Enum.sort(:desc)
      |> Enum.take(k)

    largest_sum = Enum.sum(largest)

    largest_outside =
      if idx == n - 1 do
        [largest_sum]
      else
        Enum.reduce((n - 1)..(idx + 1), {[largest_sum], largest}, fn j, {acc, current} ->
          v = Enum.at(nums, j)

          current =
            if v > 0 do
              ([v | current]
               |> Enum.sort(:desc)
               |> Enum.take(k))
            else
              current
            end

          {[Enum.sum(current) | acc], current}
        end)
        |> elem(0)
      end

    {res, _, _, _, _} =
      Enum.reduce(idx..(n - 1), {0, 0, [], 0, largest_outside}, fn i,
                                                                   {best,
                                                                    interval_total,
                                                                    smallest_inside,
                                                                    smallest_sum,
                                                                    outside} ->
        v = Enum.at(nums, i)
        interval_total = interval_total + v

        {smallest_inside, smallest_sum} =
          if v < 0 do
            temp = [-v | smallest_inside] |> Enum.sort(:desc)

            if length(temp) > k do
              removed = List.last(temp)
              {Enum.take(temp, k), smallest_sum - v - removed}
            else
              {temp, smallest_sum - v}
            end
          else
            {smallest_inside, smallest_sum}
          end

        {outside_val, rest_outside} =
          case outside do
            [h | t] -> {h, t}
            [] -> {0, []}
          end

        candidate = interval_total + smallest_sum + outside_val

        {max(best, candidate), interval_total, smallest_inside, smallest_sum, rest_outside}
      end)

    res
  end
end