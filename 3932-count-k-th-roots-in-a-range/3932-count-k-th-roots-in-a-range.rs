impl Solution {
    pub fn count_kth_roots(l: i32, r: i32, k: i32) -> i32 {
        if k == 1 {
            return r - l + 1;
        }

        let mut result = 0;
        let mut x = 0i64;

        loop {
            let mut value = 1i64;

            for _ in 0..k {
                value *= x;
                if value > r as i64 {
                    return result;
                }
            }

            if value >= l as i64 {
                result += 1;
            }

            x += 1;
        }
    }
}