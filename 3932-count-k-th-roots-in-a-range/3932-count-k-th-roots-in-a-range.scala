object Solution {
    def countKthRoots(l: Int, r: Int, k: Int): Int = {
        if (k == 1) {
            return r - l + 1
        }

        var result = 0
        var x = 0

        while (true) {
            var value = 1L
            var i = 0

            while (i < k) {
                value *= x
                if (value > r) {
                    return result
                }
                i += 1
            }

            if (value >= l) {
                result += 1
            }

            x += 1
        }

        result
    }
}