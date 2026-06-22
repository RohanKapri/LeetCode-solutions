class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $k
     * @return Integer
     */
    function maxSum($nums, $k) {

        $n = count($nums);

        $ans = PHP_INT_MIN;

        if ($k == 0 || $n == 1) {
            $sm = 0;

            foreach ($nums as $num) {
                $sm += $num;
                $ans = max($ans, $sm);

                if ($sm < 0) {
                    $sm = 0;
                }
            }

            return $ans;
        }

        $cnt = 0;
        $cur = 0;
        $pref = array_fill(0, $n + 1, 0);

        for ($i = 0; $i < $n; $i++) {
            if ($nums[$i] >= 0) {
                $cur += $nums[$i];
            } else {
                $cnt++;
            }

            $pref[$i + 1] = $pref[$i] + $nums[$i];
            $ans = max($ans, $nums[$i]);
        }

        if ($cnt <= $k) {
            return $cur;
        }

        $dp = array_fill(0, $n, array_fill(0, $n, 0));

        for ($i = 0; $i < $n; $i++) {
            $pq = [];
            $sm = 0;

            for ($j = $i; $j < $n; $j++) {
                if ($nums[$j] >= 0) {
                    $dp[$i][$j] = $sm;
                    continue;
                }

                if (count($pq) < $k) {
                    $pq[] = $nums[$j];
                    rsort($pq);
                    $sm += $nums[$j];
                } else {
                    if ($pq[0] > $nums[$j]) {
                        $sm -= $pq[0];
                        $pq[0] = $nums[$j];
                        rsort($pq);
                        $sm += $nums[$j];
                    }
                }
            }
        }

        for ($i = 0; $i < $n; $i++) {
            $pqmax = [];
            $sm = 0;

            for ($j = 0; $j < $i; $j++) {
                if ($nums[$j] < 0) {
                    continue;
                }

                if (count($pqmax) < $k) {
                    $pqmax[] = $nums[$j];
                    sort($pqmax);
                    $sm += $nums[$j];
                } else {
                    if ($pqmax[0] < $nums[$j]) {
                        $sm -= $pqmax[0];
                        $pqmax[0] = $nums[$j];
                        sort($pqmax);
                        $sm += $nums[$j];
                    }
                }
            }

            for ($j = $n - 1; $j > $i; $j--) {
                $curSum = $pref[$j + 1] - $pref[$i];
                $curSum -= $dp[$i][$j];
                $curSum += $sm;

                $ans = max($ans, $curSum);

                if ($nums[$j] < 0) {
                    continue;
                }

                if (count($pqmax) < $k) {
                    $pqmax[] = $nums[$j];
                    sort($pqmax);
                    $sm += $nums[$j];
                } else {
                    if ($pqmax[0] < $nums[$j]) {
                        $sm -= $pqmax[0];
                        $pqmax[0] = $nums[$j];
                        sort($pqmax);
                        $sm += $nums[$j];
                    }
                }

                if (!empty($pqmax)) {
                    $ans = max($ans, $sm);
                }
            }
        }

        return $ans;
    }
}