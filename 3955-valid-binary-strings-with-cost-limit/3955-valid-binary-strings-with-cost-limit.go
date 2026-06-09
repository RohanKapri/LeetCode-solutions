func generateValidStrings(n int, k int) []string {
	ans := make([]string, 0)

	var dfs func(int, int, bool, string)

	dfs = func(i, c int, p bool, s string) {
		if c > k {
			return
		}

		if i == n {
			ans = append(ans, s)
			return
		}

		dfs(i+1, c, false, s+"0")

		if !p {
			dfs(i+1, c+i, true, s+"1")
		}
	}

	dfs(0, 0, false, "")
	return ans
}