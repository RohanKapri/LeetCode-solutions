class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function getLength($nums) {
        $n = count($nums);
        $ans = 0;

        $mp = [];
        $idx = 0;

        for ($i = 0; $i < $n; $i++) {
            if (!isset($mp[$nums[$i]])) {
                $mp[$nums[$i]] = $idx++;
            }
            $nums[$i] = $mp[$nums[$i]];
        }

        for ($i = 0; $i < $n; $i++) {
            if ($i + $ans >= $n) break;

            $len = min($n - $i + 1, $n - $idx + 2);
            $freq = array_fill(0, $idx, 0);
            $freqFreq = array_fill(0, $len, 0);

            $numCount = 0;
            $freqCount = 0;

            for ($j = $i; $j < $n; $j++) {
                $val = ++$freq[$nums[$j]];

                if ($val == 1) $numCount++;

                if ($freqFreq[$val] == 0) $freqCount++;
                $freqFreq[$val]++;

                if ($val != 1) {
                    if (--$freqFreq[$val - 1] == 0) {
                        $freqCount--;
                    }
                }

                if ($ans > $j - $i + 1) continue;

                if (
                    $numCount == 1 ||
                    (
                        $freqCount == 2 &&
                        (
                            (($val & 1) == 0 && !empty($freqFreq[$val >> 1])) ||
                            (($val << 1) < $len && !empty($freqFreq[$val << 1]))
                        )
                    )
                ) {
                    $ans = $j - $i + 1;
                }
            }
        }

        return $ans;
    }
}