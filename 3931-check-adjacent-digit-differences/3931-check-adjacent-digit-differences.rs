impl Solution {
    pub fn is_adjacent_diff_at_most_two(s: String) -> bool {
        let bytes = s.as_bytes();
        for i in 1..bytes.len() {
            let diff = (bytes[i] as i32 - bytes[i - 1] as i32).abs();
            if diff > 2 {
                return false;
            }
        }
        true
    }
}