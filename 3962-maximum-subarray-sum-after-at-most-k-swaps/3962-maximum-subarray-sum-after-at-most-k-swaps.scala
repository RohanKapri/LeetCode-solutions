import scala.collection.mutable

object Solution {
    def maxSum(nums: Array[Int], k: Int): Long = {

        val n = nums.length

        var ans = Int.MinValue.toLong

        if (k == 0 || n == 1) {
            var sm = 0L

            for (num <- nums) {
                sm += num
                ans = math.max(ans, sm)

                if (sm < 0)
                    sm = 0
            }

            return ans
        }

        var cnt = 0
        var cur = 0L
        val pref = Array.fill[Long](n + 1)(0L)

        for (i <- 0 until n) {
            if (nums(i) >= 0)
                cur += nums(i)
            else
                cnt += 1

            pref(i + 1) = pref(i) + nums(i)
            ans = math.max(ans, nums(i).toLong)
        }

        if (cnt <= k)
            return cur

        val dp = Array.fill[Long](n, n)(0L)

        for (i <- 0 until n) {
            val pq = mutable.PriorityQueue[Int]()
            var sm = 0L

            for (j <- i until n) {
                if (nums(j) >= 0) {
                    dp(i)(j) = sm
                } else {
                    if (pq.size < k) {
                        pq.enqueue(nums(j))
                        sm += nums(j)
                    } else if (pq.head > nums(j)) {
                        sm -= pq.dequeue()
                        pq.enqueue(nums(j))
                        sm += nums(j)
                    }
                }
            }
        }

        for (i <- 0 until n) {
            implicit val ord: Ordering[Int] = Ordering.Int.reverse
            val pqMax = mutable.PriorityQueue.empty[Int]
            var sm = 0L

            for (j <- 0 until i) {
                if (nums(j) >= 0) {
                    if (pqMax.size < k) {
                        pqMax.enqueue(nums(j))
                        sm += nums(j)
                    } else if (pqMax.head < nums(j)) {
                        sm -= pqMax.dequeue()
                        pqMax.enqueue(nums(j))
                        sm += nums(j)
                    }
                }
            }

            for (j <- (i + 1 until n).reverse) {
                var curSum = pref(j + 1) - pref(i)
                curSum -= dp(i)(j)
                curSum += sm

                ans = math.max(ans, curSum)

                if (nums(j) >= 0) {
                    if (pqMax.size < k) {
                        pqMax.enqueue(nums(j))
                        sm += nums(j)
                    } else if (pqMax.head < nums(j)) {
                        sm -= pqMax.dequeue()
                        pqMax.enqueue(nums(j))
                        sm += nums(j)
                    }

                    if (pqMax.nonEmpty)
                        ans = math.max(ans, sm)
                }
            }
        }

        ans
    }
}