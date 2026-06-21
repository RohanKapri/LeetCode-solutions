class Solution {
    func checkGoodInteger(_ n: Int) -> Bool {
        var num = n
        var ds = 0
        var ss = 0

        while num > 0 {
            let curr = num % 10
            ds += curr
            ss += curr * curr
            num /= 10
        }

        return ss - ds >= 50
    }
}