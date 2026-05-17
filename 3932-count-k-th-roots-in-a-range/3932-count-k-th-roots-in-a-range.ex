defmodule Solution do
  @spec count_kth_roots(l :: integer, r :: integer, k :: integer) :: integer
  def count_kth_roots(l, r, k) do
    if k == 1 do
      r - l + 1
    else
      iterate(0, 0, l, r, k)
    end
  end

  defp iterate(x, count, l, r, k) do
    value = power_with_limit(x, k, r)

    cond do
      value > r -> count
      value >= l -> iterate(x + 1, count + 1, l, r, k)
      true -> iterate(x + 1, count, l, r, k)
    end
  end

  defp power_with_limit(_, 0, _) do
    1
  end

  defp power_with_limit(x, k, r) do
    value = x * power_with_limit(x, k - 1, r)
    if value > r, do: r + 1, else: value
  end
end