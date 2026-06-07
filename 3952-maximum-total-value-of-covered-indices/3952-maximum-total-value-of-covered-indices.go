func maxTotal(nums []int, s string) int64 {
	const neg int64 = -1000000000000000000

	var dp0 int64 = 0
	var dp1 int64 = neg

	for i := 0; i < len(nums); i++ {
		nxt0 := neg
		nxt1 := neg

		if s[i] == '0' {
			if dp0 > dp1 {
				nxt0 = dp0
			} else {
				nxt0 = dp1
			}
		} else {
			best := dp0
			if dp1 > best {
				best = dp1
			}

			nxt1 = best + int64(nums[i])

			if i > 0 {
				nxt0 = dp0 + int64(nums[i-1])
			}
		}

		dp0 = nxt0
		dp1 = nxt1
	}

	if dp0 > dp1 {
		return dp0
	}
	return dp1
}