class Solution {
    func maxRatings(_ units: [[Int]]) -> Int {
        let m = units.count
        let n = units[0].count

        if n == 1 {
            var sum = 0
            for i in 0..<m {
                sum += units[i][0]
            }
            return sum
        }

        var total = 0
        var miniF = 1_000_000_000
        var miniS = 1_000_000_000

        for i in 0..<m {
            var firMin = 1_000_000_000
            var secMin = 1_000_000_000

            for value in units[i] {
                if value < firMin {
                    secMin = firMin
                    firMin = value
                } else if value < secMin {
                    secMin = value
                }
            }

            total += secMin
            miniF = min(miniF, firMin)
            miniS = min(miniS, secMin)
        }

        return total - miniS + miniF
    }
}