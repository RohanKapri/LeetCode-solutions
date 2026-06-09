impl Solution {
    pub fn generate_valid_strings(n: i32, k: i32) -> Vec<String> {
        fn dfs(
            i: i32,
            c: i32,
            p: bool,
            s: String,
            n: i32,
            k: i32,
            ans: &mut Vec<String>,
        ) {
            if c > k {
                return;
            }

            if i == n {
                ans.push(s);
                return;
            }

            dfs(i + 1, c, false, format!("{}0", s), n, k, ans);

            if !p {
                dfs(i + 1, c + i, true, format!("{}1", s), n, k, ans);
            }
        }

        let mut ans = Vec::new();
        dfs(0, 0, false, String::new(), n, k, &mut ans);
        ans
    }
}