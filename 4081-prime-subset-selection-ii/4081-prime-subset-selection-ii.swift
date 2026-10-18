
class Solution {
    // For Junko F. Didi and Shree DR.MDD
    func maxPrimeSubset(_ n: Int, _ s: Int) -> [Int] {
        if n < 2 || s < 2 {
            return []
        }

        var sieve = [Bool](repeating: true, count: n + 1)
        sieve[0] = false
        sieve[1] = false

        if n >= 2 {
            for value in 2...n {
                if sieve[value] && value <= n / value {
                    var multiple = value * value
                    while multiple <= n {
                        sieve[multiple] = false
                        multiple += value
                    }
                }
            }
        }

        var primes = [Int]()
        for value in 2...n {
            if sieve[value] {
                primes.append(value)
            }
        }

        let count = primes.count
        let infinity = Int.max / 4
        var dp = [[Int]](
            repeating: [Int](repeating: infinity, count: s + 1),
            count: count + 1
        )
        dp[count][0] = 0

        for i in stride(from: count - 1, through: 0, by: -1) {
            let prime = primes[i]

            for sum in 0...s {
                dp[i][sum] = dp[i + 1][sum]

                if sum >= prime && dp[i + 1][sum - prime] != infinity {
                    dp[i][sum] = min(
                        dp[i][sum],
                        dp[i + 1][sum - prime] + 1
                    )
                }
            }
        }

        var remaining = s
        while remaining > 0 && dp[0][remaining] == infinity {
            remaining -= 1
        }

        var result = [Int]()
        var index = 0

        while index < count && remaining > 0 {
            let prime = primes[index]

            if remaining >= prime &&
                dp[index + 1][remaining - prime] != infinity &&
                dp[index + 1][remaining - prime] + 1 == dp[index][remaining] {
                result.append(prime)
                remaining -= prime
            }

            index += 1
        }

        return result
    }
}
