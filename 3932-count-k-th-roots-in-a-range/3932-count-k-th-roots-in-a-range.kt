class Solution {
    fun countKthRoots(l: Int, r: Int, k: Int): Int {
        if (k == 1) {
            return r - l + 1
        }

        var result = 0
        var x = 0

        while (true) {
            var value = 1L

            repeat(k) {
                value *= x.toLong()
                if (value > r) {
                    return result
                }
            }

            if (value >= l) {
                result++
            }

            x++
        }
    }
}