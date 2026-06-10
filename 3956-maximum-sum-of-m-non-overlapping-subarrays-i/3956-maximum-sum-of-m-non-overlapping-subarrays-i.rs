use std::collections::VecDeque;

impl Solution {
    pub fn maximum_sum(nums: Vec<i32>, m: i32, l: i32, r: i32) -> i64 {
        fn unbound_dp(pre: &[i64], n: usize, l: usize, r: usize) -> i64 {
            let mut dp = vec![0i64; n + 1];
            let mut dq: VecDeque<usize> = VecDeque::new();
            let mut ans = i64::MIN / 2;

            for i in l..=n {
                let t = i - l;
                let cur = dp[t] - pre[t];

                while let Some(&x) = dq.back() {
                    if dp[x] - pre[x] <= cur {
                        dq.pop_back();
                    } else {
                        break;
                    }
                }

                dq.push_back(t);

                while let Some(&x) = dq.front() {
                    if x < i.saturating_sub(r) {
                        dq.pop_front();
                    } else {
                        break;
                    }
                }

                dp[i] = dp[i - 1];

                if let Some(&x) = dq.front() {
                    let v = pre[i] + dp[x] - pre[x];
                    dp[i] = dp[i].max(v);
                    ans = ans.max(v);
                }
            }

            ans
        }

        let n = nums.len();
        let l = l as usize;
        let r = r as usize;
        let m = m as usize;

        let mut pre = vec![0i64; n + 1];
        for i in 0..n {
            pre[i + 1] = pre[i] + nums[i] as i64;
        }

        let neg = i64::MIN / 2;

        if m >= n / l {
            return unbound_dp(&pre, n, l, r);
        }

        let mut prev = vec![0i64; n + 1];
        let mut ans = neg;
        let mut last = neg;

        for _ in 0..m {
            let mut cur = vec![neg; n + 1];
            let mut dq: VecDeque<usize> = VecDeque::new();

            for i in l..=n {
                let t = i - l;
                let val = prev[t] - pre[t];

                while let Some(&x) = dq.back() {
                    if prev[x] - pre[x] <= val {
                        dq.pop_back();
                    } else {
                        break;
                    }
                }

                dq.push_back(t);

                while let Some(&x) = dq.front() {
                    if x < i.saturating_sub(r) {
                        dq.pop_front();
                    } else {
                        break;
                    }
                }

                if let Some(&x) = dq.front() {
                    cur[i] = pre[i] + prev[x] - pre[x];
                    ans = ans.max(cur[i]);
                }
            }

            if ans == last {
                break;
            }

            last = ans;

            let mut best = vec![neg; n + 1];
            for i in 1..=n {
                best[i] = best[i - 1].max(cur[i]);
            }

            prev = best;
        }

        ans
    }
}