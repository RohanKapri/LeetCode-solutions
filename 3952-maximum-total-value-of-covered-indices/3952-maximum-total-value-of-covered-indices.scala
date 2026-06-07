object Solution {
    def maxTotal(nums: Array[Int], s: String): Long = {
        val neg = -1000000000000000000L

        var dp0 = 0L
        var dp1 = neg

        var i = 0
        while (i < nums.length) {
            var nxt0 = neg
            var nxt1 = neg

            if (s.charAt(i) == '0') {
                nxt0 = math.max(dp0, dp1)
            } else {
                nxt1 = math.max(dp0, dp1) + nums(i).toLong

                if (i > 0) {
                    nxt0 = dp0 + nums(i - 1).toLong
                }
            }

            dp0 = nxt0
            dp1 = nxt1
            i += 1
        }

        math.max(dp0, dp1)
    }
}