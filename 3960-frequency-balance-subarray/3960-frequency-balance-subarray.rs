use std::collections::HashMap;

impl Solution {
    pub fn get_length(nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        let n = nums.len();
        let mut ans = 0usize;

        let mut mp: HashMap<i32, usize> = HashMap::new();
        let mut idx = 0usize;

        for i in 0..n {
            if !mp.contains_key(&nums[i]) {
                mp.insert(nums[i], idx);
                idx += 1;
            }
            nums[i] = *mp.get(&nums[i]).unwrap() as i32;
        }

        for i in 0..n {
            if i + ans >= n {
                break;
            }

            let len = std::cmp::min(n - i + 1, n - idx + 2);
            let mut freq = vec![0usize; idx];
            let mut freq_freq = vec![0usize; len];

            let mut num_count = 0usize;
            let mut freq_count = 0usize;

            for j in i..n {
                let x = nums[j] as usize;
                let val = freq[x] + 1;
                freq[x] = val;

                if val == 1 {
                    num_count += 1;
                }

                if freq_freq[val] == 0 {
                    freq_count += 1;
                }
                freq_freq[val] += 1;

                if val != 1 {
                    freq_freq[val - 1] -= 1;
                    if freq_freq[val - 1] == 0 {
                        freq_count -= 1;
                    }
                }

                if ans > j - i + 1 {
                    continue;
                }

                if num_count == 1
                    || (freq_count == 2
                        && (((val & 1) == 0 && freq_freq[val >> 1] != 0)
                            || ((val << 1) < len && freq_freq[val << 1] != 0)))
                {
                    ans = j - i + 1;
                }
            }
        }

        ans as i32
    }
}