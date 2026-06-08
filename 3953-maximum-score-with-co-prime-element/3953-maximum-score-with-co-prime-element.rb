# @param {Integer[]} nums
# @param {Integer} max_val
# @return {Integer}
def max_score(nums, max_val)
  mx = max_val

  nums.each do |x|
    mx = x if x > mx
  end

  freq = Array.new(mx + 1, 0)
  nums.each do |x|
    freq[x] += 1
  end

  spf = Array.new(mx + 1) { |i| i }
  mul = Array.new(mx + 1, 0)

  (2..mx).each do |i|
    if spf[i] == i
      j = i * 2
      while j <= mx
        spf[j] = i if spf[j] == j
        j += i
      end
    end

    cnt = 0
    j = i
    while j <= mx
      cnt += freq[j]
      j += i
    end
    mul[i] = cnt
  end

  ans = freq[1] > 0 ? 1 : 0

  mx.downto(2) do |i|
    break if i <= ans

    next if freq[i] == 0 && i > max_val

    x = i
    primes = []

    while x != 1
      p = spf[x]
      primes << p

      while (x % p).zero?
        x /= p
      end
    end

    bad = -freq[i]
    total = 1 << primes.length

    (1...total).each do |mask|
      prod = 1
      bits = 0

      primes.length.times do |k|
        if ((mask >> k) & 1) == 1
          prod *= primes[k]
          bits += 1
        end
      end

      if bits.odd?
        bad += mul[prod]
      else
        bad -= mul[prod]
      end
    end

    cost = if freq[i] > 0
             bad + freq[i] - 1
           else
             [bad, 1].max
           end

    ans = [ans, i - cost].max
  end

  ans
end