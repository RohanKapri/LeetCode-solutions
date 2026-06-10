object Solution {
    def maximumSum(nums: Array[Int], m: Int, l: Int, r: Int): Long = {
        val n = nums.length

        val pre = Array.fill[Long](n + 1)(0L)
        for (i <- 0 until n) {
            pre(i + 1) = pre(i) + nums(i)
        }

        var cur = Array.fill[Long](n + 1)(0L)
        var ans = Long.MinValue

        for (_ <- 1 to m) {
            val nxt = Array.fill[Long](n + 1)(Long.MinValue)

            val dq = new Array[Int](n + 1)
            var h = 0
            var t = -1

            for (i <- l to n) {
                val idx = i - l

                if (cur(idx) != Long.MinValue) {
                    while (h <= t &&
                        cur(dq(t)) - pre(dq(t)) <= cur(idx) - pre(idx)) {
                        t -= 1
                    }
                    t += 1
                    dq(t) = idx
                }

                while (h <= t && dq(h) < i - r) {
                    h += 1
                }

                if (h <= t) {
                    nxt(i) = cur(dq(h)) + pre(i) - pre(dq(h))
                    if (nxt(i) > ans) ans = nxt(i)
                }
            }

            var mx = Long.MinValue
            val tmp = Array.fill[Long](n + 1)(Long.MinValue)

            for (i <- 0 to n) {
                mx = math.max(mx, nxt(i))
                tmp(i) = mx
            }

            cur = tmp
        }

        ans
    }
}