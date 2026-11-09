
use std::cmp::min;

impl Solution {
    pub fn min_merged_integer(nums: Vec<i32>) -> i32 {
        let length = nums.len();

        let mut minimum = i32::MAX;

        for index in (0..length).step_by(2) {
            let first = nums[index];
            let second = nums[index + 1];

            println!("{first};{second}");

            let merged: i32 = format!("{first}{second}")
                .parse()
                .expect("merged number");

            minimum = min(minimum, merged);
        }

        minimum
    }
}
