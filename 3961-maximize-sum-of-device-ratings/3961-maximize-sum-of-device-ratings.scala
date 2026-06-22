object Solution {
    def maxRatings(units: Array[Array[Int]]): Long = {
        val m = units.length
        val n = units(0).length

        if (n == 1) {
            var sum = 0L
            for (i <- 0 until m) {
                sum += units(i)(0)
            }
            return sum
        }

        var total = 0L
        var miniF = 1000000000L
        var miniS = 1000000000L

        for (i <- 0 until m) {
            var firMin = 1000000000L
            var secMin = 1000000000L

            for (j <- 0 until n) {
                val value = units(i)(j).toLong

                if (value < firMin) {
                    secMin = firMin
                    firMin = value
                } else if (value < secMin) {
                    secMin = value
                }
            }

            total += secMin
            miniF = math.min(miniF, firMin)
            miniS = math.min(miniS, secMin)
        }

        total - miniS + miniF
    }
}