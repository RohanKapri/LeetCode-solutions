# @param {Integer} n
# @param {Integer} k
# @return {String[]}
def generate_valid_strings(n, k)
  ans = []

  dfs = lambda do |i, c, p, s|
    return if c > k

    if i == n
      ans << s
      return
    end

    dfs.call(i + 1, c, false, s + "0")

    unless p
      dfs.call(i + 1, c + i, true, s + "1")
    end
  end

  dfs.call(0, 0, false, "")
  ans
end