import java.util.ArrayDeque

class Solution {

    fun maximumSum(nums: IntArray, m: Int, l: Int, r: Int): Long {

        fun unboundDP(pre: LongArray, n: Int, l: Int, r: Int): Long {
            val dp = LongArray(n + 1)
            val dq = ArrayDeque<Int>()
            var ans = Long.MIN_VALUE / 2

            for (i in l..n) {
                val t = i - l
                val cur = dp[t] - pre[t]

                while (dq.isNotEmpty() &&
                    dp[dq.peekLast()] - pre[dq.peekLast()] <= cur) {
                    dq.pollLast()
                }

                dq.addLast(t)

                while (dq.isNotEmpty() && dq.peekFirst() < i - r) {
                    dq.pollFirst()
                }

                dp[i] = dp[i - 1]

                if (dq.isNotEmpty()) {
                    val v = pre[i] + dp[dq.peekFirst()] - pre[dq.peekFirst()]
                    dp[i] = maxOf(dp[i], v)
                    ans = maxOf(ans, v)
                }
            }

            return ans
        }

        val n = nums.size
        val pre = LongArray(n + 1)

        for (i in nums.indices) {
            pre[i + 1] = pre[i] + nums[i].toLong()
        }

        val neg = Long.MIN_VALUE / 2

        if (m >= n / l) {
            return unboundDP(pre, n, l, r)
        }

        var prev = LongArray(n + 1)
        var ans = neg
        var last = neg

        for (k in 1..m) {

            val cur = LongArray(n + 1) { neg }
            val dq = ArrayDeque<Int>()

            for (i in l..n) {

                val t = i - l
                val v = prev[t] - pre[t]

                while (dq.isNotEmpty() &&
                    prev[dq.peekLast()] - pre[dq.peekLast()] <= v) {
                    dq.pollLast()
                }

                dq.addLast(t)

                while (dq.isNotEmpty() && dq.peekFirst() < i - r) {
                    dq.pollFirst()
                }

                if (dq.isNotEmpty()) {
                    cur[i] = pre[i] + prev[dq.peekFirst()] - pre[dq.peekFirst()]
                    ans = maxOf(ans, cur[i])
                }
            }

            if (ans == last) break

            last = ans

            val best = LongArray(n + 1) { neg }

            for (i in 1..n) {
                best[i] = maxOf(best[i - 1], cur[i])
            }

            prev = best
        }

        return ans
    }
}