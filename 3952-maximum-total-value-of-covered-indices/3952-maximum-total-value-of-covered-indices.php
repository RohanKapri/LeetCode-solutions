class Solution {

    /**
     * @param Integer[] $nums
     * @param String $s
     * @return Integer
     */
    function maxTotal($nums, $s) {
        $neg = -1000000000000000000;

        $dp0 = 0;
        $dp1 = $neg;

        $n = count($nums);

        for ($i = 0; $i < $n; $i++) {
            $nxt0 = $neg;
            $nxt1 = $neg;

            if ($s[$i] === '0') {
                $nxt0 = max($dp0, $dp1);
            } else {
                $nxt1 = max($dp0, $dp1) + $nums[$i];

                if ($i > 0) {
                    $nxt0 = $dp0 + $nums[$i - 1];
                }
            }

            $dp0 = $nxt0;
            $dp1 = $nxt1;
        }

        return max($dp0, $dp1);
    }
}