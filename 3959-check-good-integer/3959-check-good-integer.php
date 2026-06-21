class Solution {

    /**
     * @param Integer $n
     * @return Boolean
     */
    function checkGoodInteger($n) {
        $ds = 0;
        $ss = 0;

        while ($n > 0) {
            $curr = $n % 10;
            $ds += $curr;
            $ss += $curr * $curr;
            $n = intdiv($n, 10);
        }

        return $ss - $ds >= 50;
    }
}