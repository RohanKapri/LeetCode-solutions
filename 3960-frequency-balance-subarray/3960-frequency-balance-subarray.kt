class Solution {
    fun getLength(nums: IntArray): Int {
        val n = nums.size
        var ans = 0

        val mp = HashMap<Int, Int>()
        var idx = 0

        for (i in 0 until n) {
            if (!mp.containsKey(nums[i])) {
                mp[nums[i]] = idx++
            }
            nums[i] = mp[nums[i]]!!
        }

        for (i in 0 until n) {
            if (i + ans >= n) break

            val len = minOf(n - i + 1, n - idx + 2)
            val freq = IntArray(idx)
            val freqFreq = IntArray(len)

            var numCount = 0
            var freqCount = 0

            for (j in i until n) {
                val value = ++freq[nums[j]]

                if (value == 1) numCount++

                if (freqFreq[value]++ == 0) freqCount++
                if (value != 1 && --freqFreq[value - 1] == 0) freqCount--

                if (ans > j - i + 1) continue

                if (
                    numCount == 1 ||
                    (freqCount == 2 &&
                            (((value and 1) == 0 && freqFreq[value shr 1] != 0) ||
                             ((value shl 1) < len && freqFreq[value shl 1] != 0)))
                ) {
                    ans = j - i + 1
                }
            }
        }

        return ans
    }
}