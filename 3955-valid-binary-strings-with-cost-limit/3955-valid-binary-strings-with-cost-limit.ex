defmodule Solution do
  @spec generate_valid_strings(n :: integer, k :: integer) :: [String.t]
  def generate_valid_strings(n, k) do
    dfs("", 0, n, k)
  end

  defp dfs(_, cost, _, k) when cost > k, do: []

  defp dfs(s, _, n, _) when byte_size(s) == n, do: [s]

  defp dfs(s, cost, n, k) do
    a = dfs(s <> "0", cost, n, k)

    b =
      if s == "" or String.at(s, -1) != "1" do
        dfs(s <> "1", cost + byte_size(s), n, k)
      else
        []
      end

    a ++ b
  end
end