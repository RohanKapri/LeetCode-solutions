class Solution {
    fun maxTotal(nums: IntArray, s: String): Long {
        val neg = -1000000000000000000L

        var dp0 = 0L
        var dp1 = neg

        for (i in nums.indices) {
            var nxt0 = neg
            var nxt1 = neg

            if (s[i] == '0') {
                nxt0 = maxOf(dp0, dp1)
            } else {
                nxt1 = maxOf(dp0, dp1) + nums[i].toLong()

                if (i > 0) {
                    nxt0 = dp0 + nums[i - 1].toLong()
                }
            }

            dp0 = nxt0
            dp1 = nxt1
        }

        return maxOf(dp0, dp1)
    }
}