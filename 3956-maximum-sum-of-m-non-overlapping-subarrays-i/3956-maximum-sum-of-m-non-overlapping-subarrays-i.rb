# @param {Integer[]} nums
# @param {Integer} m
# @param {Integer} l
# @param {Integer} r
# @return {Integer}
def maximum_sum(nums, m, l, r)

  unbound_dp = lambda do |pre, n, l, r|
    dp = Array.new(n + 1, 0)
    dq = []
    head = 0
    ans = -(1 << 60)

    (l..n).each do |i|
      t = i - l
      cur = dp[t] - pre[t]

      while dq.size > head &&
            dp[dq[-1]] - pre[dq[-1]] <= cur
        dq.pop
      end

      dq << t

      while dq.size > head && dq[head] < i - r
        head += 1
      end

      dp[i] = dp[i - 1]

      if dq.size > head
        v = pre[i] + dp[dq[head]] - pre[dq[head]]
        dp[i] = [dp[i], v].max
        ans = [ans, v].max
      end
    end

    ans
  end

  n = nums.length

  pre = Array.new(n + 1, 0)
  n.times do |i|
    pre[i + 1] = pre[i] + nums[i]
  end

  neg = -(1 << 60)

  return unbound_dp.call(pre, n, l, r) if m >= n / l

  prev = Array.new(n + 1, 0)

  ans = neg
  last = neg

  (1..m).each do
    cur = Array.new(n + 1, neg)

    dq = []
    head = 0

    (l..n).each do |i|
      t = i - l
      val = prev[t] - pre[t]

      while dq.size > head &&
            prev[dq[-1]] - pre[dq[-1]] <= val
        dq.pop
      end

      dq << t

      while dq.size > head && dq[head] < i - r
        head += 1
      end

      if dq.size > head
        cur[i] = pre[i] + prev[dq[head]] - pre[dq[head]]
        ans = [ans, cur[i]].max
      end
    end

    break if ans == last

    last = ans

    best = Array.new(n + 1, neg)

    (1..n).each do |i|
      best[i] = [best[i - 1], cur[i]].max
    end

    prev = best
  end

  ans
end