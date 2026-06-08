class Solution {
    fun maxScore(nums: IntArray, maxVal: Int): Int {
        var mx = maxVal

        for (x in nums) {
            if (x > mx) mx = x
        }

        val freq = IntArray(mx + 1)
        for (x in nums) {
            freq[x]++
        }

        val spf = IntArray(mx + 1) { it }
        val mul = IntArray(mx + 1)

        for (i in 2..mx) {
            if (spf[i] == i) {
                var j = i * 2
                while (j <= mx) {
                    if (spf[j] == j) {
                        spf[j] = i
                    }
                    j += i
                }
            }

            var cnt = 0
            var j = i
            while (j <= mx) {
                cnt += freq[j]
                j += i
            }
            mul[i] = cnt
        }

        var ans = if (freq[1] > 0) 1 else 0

        for (i in mx downTo 2) {
            if (i <= ans) break

            if (freq[i] == 0 && i > maxVal) continue

            var x = i
            val primes = ArrayList<Int>(7)

            while (x != 1) {
                val p = spf[x]
                primes.add(p)

                while (x % p == 0) {
                    x /= p
                }
            }

            var bad = -freq[i]
            val total = 1 shl primes.size

            for (mask in 1 until total) {
                var prod = 1
                var bits = 0

                for (k in primes.indices) {
                    if (((mask shr k) and 1) != 0) {
                        prod *= primes[k]
                        bits++
                    }
                }

                if ((bits and 1) != 0) {
                    bad += mul[prod]
                } else {
                    bad -= mul[prod]
                }
            }

            val cost = if (freq[i] > 0) {
                bad + freq[i] - 1
            } else {
                maxOf(bad, 1)
            }

            ans = maxOf(ans, i - cost)
        }

        return ans
    }
}