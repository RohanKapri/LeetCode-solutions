class Solution {
    func maxScore(_ nums: [Int], _ maxVal: Int) -> Int {
        var mx = maxVal

        for x in nums {
            if x > mx {
                mx = x
            }
        }

        var freq = Array(repeating: 0, count: mx + 1)
        for x in nums {
            freq[x] += 1
        }

        var spf = Array(0...mx)
        var mul = Array(repeating: 0, count: mx + 1)

        if mx >= 2 {
            for i in 2...mx {
                if spf[i] == i {
                    var j = i * 2
                    while j <= mx {
                        if spf[j] == j {
                            spf[j] = i
                        }
                        j += i
                    }
                }

                var cnt = 0
                var j = i
                while j <= mx {
                    cnt += freq[j]
                    j += i
                }
                mul[i] = cnt
            }
        }

        var ans = freq[1] > 0 ? 1 : 0

        var i = mx
        while i >= 2 {
            if i <= ans {
                break
            }

            if freq[i] == 0 && i > maxVal {
                i -= 1
                continue
            }

            var x = i
            var primes: [Int] = []

            while x != 1 {
                let p = spf[x]
                primes.append(p)

                while x % p == 0 {
                    x /= p
                }
            }

            var bad = -freq[i]
            let total = 1 << primes.count

            for mask in 1..<total {
                var prod = 1
                var bits = 0

                for k in 0..<primes.count {
                    if ((mask >> k) & 1) == 1 {
                        prod *= primes[k]
                        bits += 1
                    }
                }

                if (bits & 1) == 1 {
                    bad += mul[prod]
                } else {
                    bad -= mul[prod]
                }
            }

            let cost: Int
            if freq[i] > 0 {
                cost = bad + freq[i] - 1
            } else {
                cost = max(bad, 1)
            }

            ans = max(ans, i - cost)
            i -= 1
        }

        return ans
    }
}