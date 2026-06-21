defmodule Solution do
  @spec check_good_integer(n :: integer) :: boolean
  def check_good_integer(n) do
    solve(n, 0)
  end

  defp solve(0, sum), do: sum >= 50

  defp solve(n, sum) do
    digit = rem(n, 10)
    solve(div(n, 10), sum + digit * (digit - 1))
  end
end