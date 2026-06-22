# @param {Integer[]} nums
# @return {Integer}
def get_length(nums)
  nums = nums.dup
  n = nums.length
  ans = 0

  mp = {}
  idx = 0

  (0...n).each do |i|
    unless mp.key?(nums[i])
      mp[nums[i]] = idx
      idx += 1
    end
    nums[i] = mp[nums[i]]
  end

  (0...n).each do |i|
    break if i + ans >= n

    len = [n - i + 1, n - idx + 2].min
    freq = Array.new(idx, 0)
    freq_freq = Array.new(len, 0)

    num_count = 0
    freq_count = 0

    (i...n).each do |j|
      val = freq[nums[j]] + 1
      freq[nums[j]] = val

      num_count += 1 if val == 1

      if freq_freq[val] == 0
        freq_count += 1
      end
      freq_freq[val] += 1

      if val != 1
        freq_freq[val - 1] -= 1
        if freq_freq[val - 1] == 0
          freq_count -= 1
        end
      end

      next if ans > j - i + 1

      if num_count == 1 ||
         (freq_count == 2 &&
          (((val & 1) == 0 && freq_freq[val >> 1] != 0) ||
           ((val << 1) < len && freq_freq[val << 1] != 0)))
        ans = j - i + 1
      end
    end
  end

  ans
end