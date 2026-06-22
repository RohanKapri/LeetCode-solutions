# @param {Integer[]} nums
# @param {Integer} k
# @return {Integer}
def max_sum(nums, k)
  n = nums.size

  ans = -(1 << 31)

  if k == 0 || n == 1
    sm = 0

    nums.each do |num|
      sm += num
      ans = [ans, sm].max
      sm = 0 if sm < 0
    end

    return ans
  end

  cnt = 0
  cur = 0
  pref = Array.new(n + 1, 0)

  n.times do |i|
    if nums[i] >= 0
      cur += nums[i]
    else
      cnt += 1
    end

    pref[i + 1] = pref[i] + nums[i]
    ans = [ans, nums[i]].max
  end

  return cur if cnt <= k

  dp = Array.new(n) { Array.new(n, 0) }

  n.times do |i|
    pq = []
    sm = 0

    (i...n).each do |j|
      if nums[j] >= 0
        dp[i][j] = sm
        next
      end

      if pq.size < k
        pq << nums[j]
        pq.sort!.reverse!
        sm += nums[j]
      elsif pq[0] > nums[j]
        sm -= pq[0]
        pq[0] = nums[j]
        pq.sort!.reverse!
        sm += nums[j]
      end
    end
  end

  n.times do |i|
    pqmax = []
    sm = 0

    (0...i).each do |j|
      next if nums[j] < 0

      if pqmax.size < k
        pqmax << nums[j]
        pqmax.sort!
        sm += nums[j]
      elsif pqmax[0] < nums[j]
        sm -= pqmax[0]
        pqmax[0] = nums[j]
        pqmax.sort!
        sm += nums[j]
      end
    end

    (n - 1).downto(i + 1) do |j|
      cur_sum = pref[j + 1] - pref[i]
      cur_sum -= dp[i][j]
      cur_sum += sm

      ans = [ans, cur_sum].max

      next if nums[j] < 0

      if pqmax.size < k
        pqmax << nums[j]
        pqmax.sort!
        sm += nums[j]
      elsif pqmax[0] < nums[j]
        sm -= pqmax[0]
        pqmax[0] = nums[j]
        pqmax.sort!
        sm += nums[j]
      end

      ans = [ans, sm].max unless pqmax.empty?
    end
  end

  ans
end