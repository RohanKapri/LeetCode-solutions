# @param {Integer[]} nums
# @param {String} s
# @return {Integer}
def max_total(nums, s)
  neg = -10**18

  dp0 = 0
  dp1 = neg

  (0...nums.length).each do |i|
    nxt0 = neg
    nxt1 = neg

    if s[i] == '0'
      nxt0 = [dp0, dp1].max
    else
      nxt1 = [dp0, dp1].max + nums[i]

      if i > 0
        nxt0 = dp0 + nums[i - 1]
      end
    end

    dp0 = nxt0
    dp1 = nxt1
  end

  [dp0, dp1].max
end