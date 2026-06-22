use std::cmp::Reverse;
use std::collections::BinaryHeap;

impl Solution {
    pub fn max_sum(nums: Vec<i32>, k: i32) -> i64 {
        let k = k as usize;
        let n = nums.len();

        let mut ans = i32::MIN as i64;

        if k == 0 || n == 1 {
            let mut sm = 0i64;

            for &num in &nums {
                sm += num as i64;
                ans = ans.max(sm);

                if sm < 0 {
                    sm = 0;
                }
            }

            return ans;
        }

        let mut cnt = 0;
        let mut cur = 0i64;
        let mut pref = vec![0i64; n + 1];

        for i in 0..n {
            if nums[i] >= 0 {
                cur += nums[i] as i64;
            } else {
                cnt += 1;
            }

            pref[i + 1] = pref[i] + nums[i] as i64;
            ans = ans.max(nums[i] as i64);
        }

        if cnt <= k {
            return cur;
        }

        let mut dp = vec![vec![0i64; n]; n];

        for i in 0..n {
            let mut pq = BinaryHeap::<i32>::new();
            let mut sm = 0i64;

            for j in i..n {
                if nums[j] >= 0 {
                    dp[i][j] = sm;
                    continue;
                }

                if pq.len() < k {
                    pq.push(nums[j]);
                    sm += nums[j] as i64;
                } else if let Some(&top) = pq.peek() {
                    if top > nums[j] {
                        sm -= top as i64;
                        pq.pop();
                        pq.push(nums[j]);
                        sm += nums[j] as i64;
                    }
                }
            }
        }

        for i in 0..n {
            let mut pqmax = BinaryHeap::<Reverse<i32>>::new();
            let mut sm = 0i64;

            for j in 0..i {
                if nums[j] < 0 {
                    continue;
                }

                if pqmax.len() < k {
                    pqmax.push(Reverse(nums[j]));
                    sm += nums[j] as i64;
                } else if let Some(&Reverse(top)) = pqmax.peek() {
                    if top < nums[j] {
                        sm -= top as i64;
                        pqmax.pop();
                        pqmax.push(Reverse(nums[j]));
                        sm += nums[j] as i64;
                    }
                }
            }

            for j in (i + 1..n).rev() {
                let mut cur_sum = pref[j + 1] - pref[i];
                cur_sum -= dp[i][j];
                cur_sum += sm;

                ans = ans.max(cur_sum);

                if nums[j] < 0 {
                    continue;
                }

                if pqmax.len() < k {
                    pqmax.push(Reverse(nums[j]));
                    sm += nums[j] as i64;
                } else if let Some(&Reverse(top)) = pqmax.peek() {
                    if top < nums[j] {
                        sm -= top as i64;
                        pqmax.pop();
                        pqmax.push(Reverse(nums[j]));
                        sm += nums[j] as i64;
                    }
                }

                if !pqmax.is_empty() {
                    ans = ans.max(sm);
                }
            }
        }

        ans
    }
}