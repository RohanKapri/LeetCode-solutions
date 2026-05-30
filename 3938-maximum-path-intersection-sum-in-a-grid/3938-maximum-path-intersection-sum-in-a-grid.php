class Solution {

    /**
     * @param Integer[][] $grid
     * @return Integer
     */
    function maxScore($grid) {
        $n = count($grid);
        $m = count($grid[0]);

        $best = -100;

        for ($i = 1; $i < $n - 1; $i++) {
            $curr = $grid[$i][0];

            for ($j = 1; $j < $m - 1; $j++) {
                $curr = max($grid[$i][$j], $curr + $grid[$i][$j]);
                $best = max($best, $curr);
            }

            $best = max($best, $curr + $grid[$i][$m - 1]);
        }

        for ($j = 1; $j < $m - 1; $j++) {
            $curr = $grid[0][$j];

            for ($i = 1; $i < $n - 1; $i++) {
                $curr = max($grid[$i][$j], $curr + $grid[$i][$j]);
                $best = max($best, $curr);
            }

            $best = max($best, $curr + $grid[$n - 1][$j]);
        }

        $borderRow = 0;
        while ($borderRow < $n) {
            $curr = $grid[$borderRow][0];

            for ($j = 1; $j < $m; $j++) {
                $curr += $grid[$borderRow][$j];
                $best = max($best, $curr);
                $curr = max($curr, $grid[$borderRow][$j]);
            }

            if ($n == 1) {
                break;
            }

            $borderRow += $n - 1;
        }

        $borderCol = 0;
        while ($borderCol < $m) {
            $curr = $grid[0][$borderCol];

            for ($i = 1; $i < $n; $i++) {
                $curr += $grid[$i][$borderCol];
                $best = max($best, $curr);
                $curr = max($curr, $grid[$i][$borderCol]);
            }

            if ($m == 1) {
                break;
            }

            $borderCol += $m - 1;
        }

        return $best;
    }
}