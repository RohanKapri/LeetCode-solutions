class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $m
     * @param Integer $l
     * @param Integer $r
     * @return Integer
     */
    function maximumSum($nums, $m, $l, $r) {

        $unboundDP = function ($pre, $n, $l, $r) {
            $dp = array_fill(0, $n + 1, 0);
            $dq = [];
            $head = 0;
            $ans = -(1 << 60);

            for ($i = $l; $i <= $n; $i++) {
                $t = $i - $l;
                $cur = $dp[$t] - $pre[$t];

                while (count($dq) > $head &&
                       $dp[$dq[count($dq) - 1]] - $pre[$dq[count($dq) - 1]] <= $cur) {
                    array_pop($dq);
                }

                $dq[] = $t;

                while (count($dq) > $head && $dq[$head] < $i - $r) {
                    $head++;
                }

                $dp[$i] = $dp[$i - 1];

                if (count($dq) > $head) {
                    $v = $pre[$i] + $dp[$dq[$head]] - $pre[$dq[$head]];
                    $dp[$i] = max($dp[$i], $v);
                    $ans = max($ans, $v);
                }
            }

            return $ans;
        };

        $n = count($nums);

        $pre = array_fill(0, $n + 1, 0);
        for ($i = 0; $i < $n; $i++) {
            $pre[$i + 1] = $pre[$i] + $nums[$i];
        }

        $neg = -(1 << 60);

        if ($m >= intdiv($n, $l)) {
            return $unboundDP($pre, $n, $l, $r);
        }

        $prev = array_fill(0, $n + 1, 0);

        $ans = $neg;
        $last = $neg;

        for ($k = 1; $k <= $m; $k++) {

            $cur = array_fill(0, $n + 1, $neg);

            $dq = [];
            $head = 0;

            for ($i = $l; $i <= $n; $i++) {

                $t = $i - $l;
                $val = $prev[$t] - $pre[$t];

                while (count($dq) > $head &&
                       $prev[$dq[count($dq) - 1]] - $pre[$dq[count($dq) - 1]] <= $val) {
                    array_pop($dq);
                }

                $dq[] = $t;

                while (count($dq) > $head && $dq[$head] < $i - $r) {
                    $head++;
                }

                if (count($dq) > $head) {
                    $cur[$i] = $pre[$i] + $prev[$dq[$head]] - $pre[$dq[$head]];
                    $ans = max($ans, $cur[$i]);
                }
            }

            if ($ans == $last) {
                break;
            }

            $last = $ans;

            $best = array_fill(0, $n + 1, $neg);

            for ($i = 1; $i <= $n; $i++) {
                $best[$i] = max($best[$i - 1], $cur[$i]);
            }

            $prev = $best;
        }

        return $ans;
    }
}