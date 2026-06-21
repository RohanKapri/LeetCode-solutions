impl Solution {
    pub fn check_good_integer(n: i32) -> bool {
        let mut num = n;
        let mut ds = 0;
        let mut ss = 0;

        while num > 0 {
            let curr = num % 10;
            ds += curr;
            ss += curr * curr;
            num /= 10;
        }

        ss - ds >= 50
    }
}