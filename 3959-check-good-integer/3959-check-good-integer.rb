# @param {Integer} n
# @return {Boolean}
def check_good_integer(n)
  ds = 0
  ss = 0

  while n > 0
    curr = n % 10
    ds += curr
    ss += curr * curr
    n /= 10
  end

  ss - ds >= 50
end