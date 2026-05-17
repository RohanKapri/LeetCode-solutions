class Solution {
    func countKthRoots(_ l: Int, _ r: Int, _ k: Int) -> Int {
        if k == 1 {
            return r - l + 1
        }

        var result = 0
        var x = 0

        while true {
            var value = 1

            for _ in 0..<k {
                value *= x
                if value > r {
                    return result
                }
            }

            if value >= l {
                result += 1
            }

            x += 1
        }
    }
}