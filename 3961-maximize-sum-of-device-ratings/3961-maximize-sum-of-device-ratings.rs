impl Solution {
    pub fn max_ratings(units: Vec<Vec<i32>>) -> i64 {
        let m = units.len();
        let n = units[0].len();

        if n == 1 {
            let mut sum = 0i64;
            for i in 0..m {
                sum += units[i][0] as i64;
            }
            return sum;
        }

        let mut total = 0i64;
        let mut mini_f = 1_000_000_000i64;
        let mut mini_s = 1_000_000_000i64;

        for i in 0..m {
            let mut fir_min = 1_000_000_000i64;
            let mut sec_min = 1_000_000_000i64;

            for j in 0..n {
                let val = units[i][j] as i64;

                if val < fir_min {
                    sec_min = fir_min;
                    fir_min = val;
                } else if val < sec_min {
                    sec_min = val;
                }
            }

            total += sec_min;
            mini_f = mini_f.min(fir_min);
            mini_s = mini_s.min(sec_min);
        }

        total - mini_s + mini_f
    }
}