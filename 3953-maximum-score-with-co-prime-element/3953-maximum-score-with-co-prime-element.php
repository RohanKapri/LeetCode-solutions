class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $maxVal
     * @return Integer
     */
    function maxScore($nums, $maxVal) {
        $mx = $maxVal;

        foreach ($nums as $x) {
            if ($x > $mx) {
                $mx = $x;
            }
        }

        $freq = array_fill(0, $mx + 1, 0);

        foreach ($nums as $x) {
            $freq[$x]++;
        }

        $spf = range(0, $mx);
        $mul = array_fill(0, $mx + 1, 0);

        for ($i = 2; $i <= $mx; $i++) {
            if ($spf[$i] === $i) {
                for ($j = $i * 2; $j <= $mx; $j += $i) {
                    if ($spf[$j] === $j) {
                        $spf[$j] = $i;
                    }
                }
            }

            $cnt = 0;
            for ($j = $i; $j <= $mx; $j += $i) {
                $cnt += $freq[$j];
            }

            $mul[$i] = $cnt;
        }

        $ans = $freq[1] > 0 ? 1 : 0;

        for ($i = $mx; $i >= 2; $i--) {
            if ($i <= $ans) {
                break;
            }

            if ($freq[$i] === 0 && $i > $maxVal) {
                continue;
            }

            $x = $i;
            $primes = [];

            while ($x !== 1) {
                $p = $spf[$x];
                $primes[] = $p;

                while ($x % $p === 0) {
                    $x = intdiv($x, $p);
                }
            }

            $bad = -$freq[$i];
            $total = 1 << count($primes);

            for ($mask = 1; $mask < $total; $mask++) {
                $prod = 1;
                $bits = 0;

                $n = count($primes);

                for ($k = 0; $k < $n; $k++) {
                    if (($mask >> $k) & 1) {
                        $prod *= $primes[$k];
                        $bits++;
                    }
                }

                if ($bits & 1) {
                    $bad += $mul[$prod];
                } else {
                    $bad -= $mul[$prod];
                }
            }

            $cost = $freq[$i] > 0
                ? $bad + $freq[$i] - 1
                : max($bad, 1);

            $ans = max($ans, $i - $cost);
        }

        return $ans;
    }
}