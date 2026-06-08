object Solution {
    def maxScore(nums: Array[Int], maxVal: Int): Int = {
        var mx = maxVal

        for (x <- nums) {
            if (x > mx) mx = x
        }

        val freq = Array.fill(mx + 1)(0)
        for (x <- nums) {
            freq(x) += 1
        }

        val spf = Array.tabulate(mx + 1)(i => i)
        val mul = Array.fill(mx + 1)(0)

        for (i <- 2 to mx) {
            if (spf(i) == i) {
                var j = i * 2
                while (j <= mx) {
                    if (spf(j) == j) {
                        spf(j) = i
                    }
                    j += i
                }
            }

            var cnt = 0
            var j = i
            while (j <= mx) {
                cnt += freq(j)
                j += i
            }
            mul(i) = cnt
        }

        var ans = if (freq(1) > 0) 1 else 0

        var i = mx
        while (i >= 2) {
            if (i <= ans) {
                return ans
            }

            if (!(freq(i) == 0 && i > maxVal)) {
                var x = i
                val primes = scala.collection.mutable.ArrayBuffer[Int]()

                while (x != 1) {
                    val p = spf(x)
                    primes += p

                    while (x % p == 0) {
                        x /= p
                    }
                }

                var bad = -freq(i)
                val total = 1 << primes.length

                var mask = 1
                while (mask < total) {
                    var prod = 1
                    var bits = 0

                    var k = 0
                    while (k < primes.length) {
                        if (((mask >> k) & 1) != 0) {
                            prod *= primes(k)
                            bits += 1
                        }
                        k += 1
                    }

                    if ((bits & 1) != 0) {
                        bad += mul(prod)
                    } else {
                        bad -= mul(prod)
                    }

                    mask += 1
                }

                val cost =
                    if (freq(i) > 0)
                        bad + freq(i) - 1
                    else
                        math.max(bad, 1)

                ans = math.max(ans, i - cost)
            }

            i -= 1
        }

        ans
    }
}