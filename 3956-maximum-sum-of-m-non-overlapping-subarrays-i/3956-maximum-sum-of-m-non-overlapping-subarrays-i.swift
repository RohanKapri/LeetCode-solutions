class Solution {
    func maximumSum(_ nums: [Int], _ m: Int, _ l: Int, _ r: Int) -> Int {

        func unboundDP(_ pre: [Int64], _ n: Int, _ l: Int, _ r: Int) -> Int64 {
            var dp = Array(repeating: Int64(0), count: n + 1)
            var dq = [Int]()
            var head = 0
            var ans = Int64.min / 2

            for i in l...n {
                let t = i - l
                let cur = dp[t] - pre[t]

                while dq.count > head &&
                      dp[dq.last!] - pre[dq.last!] <= cur {
                    dq.removeLast()
                }

                dq.append(t)

                while dq.count > head && dq[head] < i - r {
                    head += 1
                }

                dp[i] = dp[i - 1]

                if dq.count > head {
                    let v = pre[i] + dp[dq[head]] - pre[dq[head]]
                    dp[i] = max(dp[i], v)
                    ans = max(ans, v)
                }
            }

            return ans
        }

        let n = nums.count
        var pre = Array(repeating: Int64(0), count: n + 1)

        for i in 0..<n {
            pre[i + 1] = pre[i] + Int64(nums[i])
        }

        let neg = Int64.min / 2

        if m >= n / l {
            return Int(unboundDP(pre, n, l, r))
        }

        var prev = Array(repeating: Int64(0), count: n + 1)
        var ans = neg
        var last = neg

        for _ in 1...m {

            var cur = Array(repeating: neg, count: n + 1)
            var dq = [Int]()
            var head = 0

            for i in l...n {

                let t = i - l
                let val = prev[t] - pre[t]

                while dq.count > head &&
                      prev[dq.last!] - pre[dq.last!] <= val {
                    dq.removeLast()
                }

                dq.append(t)

                while dq.count > head && dq[head] < i - r {
                    head += 1
                }

                if dq.count > head {
                    cur[i] = pre[i] + prev[dq[head]] - pre[dq[head]]
                    ans = max(ans, cur[i])
                }
            }

            if ans == last {
                break
            }

            last = ans

            var best = Array(repeating: neg, count: n + 1)

            for i in 1...n {
                best[i] = max(best[i - 1], cur[i])
            }

            prev = best
        }

        return Int(ans)
    }
}