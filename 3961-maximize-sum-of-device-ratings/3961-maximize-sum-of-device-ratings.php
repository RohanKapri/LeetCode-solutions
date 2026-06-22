class Solution {

    /**
     * @param Integer[][] $units
     * @return Integer
     */
    function maxRatings($units) {
        $m = count($units);
        $n = count($units[0]);

        if ($n == 1) {
            $sum = 0;
            for ($i = 0; $i < $m; $i++) {
                $sum += $units[$i][0];
            }
            return $sum;
        }

        $total = 0;
        $miniF = 1000000000;
        $miniS = 1000000000;

        for ($i = 0; $i < $m; $i++) {
            $firMin = 1000000000;
            $secMin = 1000000000;

            for ($j = 0; $j < $n; $j++) {
                $val = $units[$i][$j];

                if ($val < $firMin) {
                    $secMin = $firMin;
                    $firMin = $val;
                } elseif ($val < $secMin) {
                    $secMin = $val;
                }
            }

            $total += $secMin;
            $miniF = min($miniF, $firMin);
            $miniS = min($miniS, $secMin);
        }

        return $total - $miniS + $miniF;
    }
}