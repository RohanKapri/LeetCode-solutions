class Solution {
    fun maxSum(nums: IntArray, k: Int): Long {

        val n = nums.size

        var ans = Int.MIN_VALUE.toLong()

        if (k == 0 || n == 1) {
            var sm = 0L

            for (num in nums) {
                sm += num.toLong()
                ans = maxOf(ans, sm)

                if (sm < 0)
                    sm = 0
            }

            return ans
        }

        var cnt = 0
        var cur = 0L
        val pref = LongArray(n + 1)

        for (i in 0 until n) {
            if (nums[i] >= 0)
                cur += nums[i].toLong()
            else
                cnt++

            pref[i + 1] = pref[i] + nums[i].toLong()
            ans = maxOf(ans, nums[i].toLong())
        }

        if (cnt <= k)
            return cur

        val dp = Array(n) { LongArray(n) }

        for (i in 0 until n) {
            val pq = java.util.PriorityQueue<Int>(reverseOrder())
            var sm = 0L

            for (j in i until n) {
                if (nums[j] >= 0) {
                    dp[i][j] = sm
                    continue
                }

                if (pq.size < k) {
                    pq.add(nums[j])
                    sm += nums[j].toLong()
                } else if (pq.peek() > nums[j]) {
                    sm -= pq.poll().toLong()
                    pq.add(nums[j])
                    sm += nums[j].toLong()
                }
            }
        }

        for (i in 0 until n) {
            val pqMax = java.util.PriorityQueue<Int>()
            var sm = 0L

            for (j in 0 until i) {
                if (nums[j] < 0)
                    continue

                if (pqMax.size < k) {
                    pqMax.add(nums[j])
                    sm += nums[j].toLong()
                } else if (pqMax.peek() < nums[j]) {
                    sm -= pqMax.poll().toLong()
                    pqMax.add(nums[j])
                    sm += nums[j].toLong()
                }
            }

            for (j in n - 1 downTo i + 1) {
                var curSum = pref[j + 1] - pref[i]
                curSum -= dp[i][j]
                curSum += sm

                ans = maxOf(ans, curSum)

                if (nums[j] < 0)
                    continue

                if (pqMax.size < k) {
                    pqMax.add(nums[j])
                    sm += nums[j].toLong()
                } else if (pqMax.peek() < nums[j]) {
                    sm -= pqMax.poll().toLong()
                    pqMax.add(nums[j])
                    sm += nums[j].toLong()
                }

                if (pqMax.isNotEmpty())
                    ans = maxOf(ans, sm)
            }
        }

        return ans
    }
}