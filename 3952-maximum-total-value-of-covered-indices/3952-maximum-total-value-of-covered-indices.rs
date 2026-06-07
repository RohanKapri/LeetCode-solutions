impl Solution {
    pub fn max_total(nums: Vec<i32>, s: String) -> i64 {
        let neg: i64 = -1_000_000_000_000_000_000;

        let mut dp0: i64 = 0;
        let mut dp1: i64 = neg;

        let chars = s.as_bytes();

        for i in 0..nums.len() {
            let mut nxt0: i64 = neg;
            let mut nxt1: i64 = neg;

            if chars[i] == b'0' {
                nxt0 = dp0.max(dp1);
            } else {
                nxt1 = dp0.max(dp1) + nums[i] as i64;

                if i > 0 {
                    nxt0 = dp0 + nums[i - 1] as i64;
                }
            }

            dp0 = nxt0;
            dp1 = nxt1;
        }

        dp0.max(dp1)
    }
}