object Solution {
    def checkGoodInteger(n: Int): Boolean = {
        var num = n
        var ds = 0
        var ss = 0

        while (num > 0) {
            val curr = num % 10
            ds += curr
            ss += curr * curr
            num /= 10
        }

        ss - ds >= 50
    }
}