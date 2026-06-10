func maximumSum(nums []int, m int, l int, r int) int64 {
	unboundDP := func(pre []int64, n, l, r int) int64 {
		dp := make([]int64, n+1)
		dq := make([]int, 0)
		ans := int64(-1 << 60)

		for i := l; i <= n; i++ {
			t := i - l
			cur := dp[t] - pre[t]

			for len(dq) > 0 && dp[dq[len(dq)-1]]-pre[dq[len(dq)-1]] <= cur {
				dq = dq[:len(dq)-1]
			}

			dq = append(dq, t)

			for len(dq) > 0 && dq[0] < i-r {
				dq = dq[1:]
			}

			dp[i] = dp[i-1]

			if len(dq) > 0 {
				v := pre[i] + dp[dq[0]] - pre[dq[0]]
				if v > dp[i] {
					dp[i] = v
				}
				if v > ans {
					ans = v
				}
			}
		}

		return ans
	}

	n := len(nums)

	pre := make([]int64, n+1)
	for i := 0; i < n; i++ {
		pre[i+1] = pre[i] + int64(nums[i])
	}

	neg := int64(-1 << 60)

	if m >= n/l {
		return unboundDP(pre, n, l, r)
	}

	prev := make([]int64, n+1)

	ans := neg
	last := neg

	for k := 1; k <= m; k++ {
		cur := make([]int64, n+1)
		for i := range cur {
			cur[i] = neg
		}

		dq := make([]int, 0)

		for i := l; i <= n; i++ {
			t := i - l
			val := prev[t] - pre[t]

			for len(dq) > 0 && prev[dq[len(dq)-1]]-pre[dq[len(dq)-1]] <= val {
				dq = dq[:len(dq)-1]
			}

			dq = append(dq, t)

			for len(dq) > 0 && dq[0] < i-r {
				dq = dq[1:]
			}

			if len(dq) > 0 {
				cur[i] = pre[i] + prev[dq[0]] - pre[dq[0]]
				if cur[i] > ans {
					ans = cur[i]
				}
			}
		}

		if ans == last {
			break
		}

		last = ans

		best := make([]int64, n+1)
		for i := range best {
			best[i] = neg
		}

		for i := 1; i <= n; i++ {
			if best[i-1] > cur[i] {
				best[i] = best[i-1]
			} else {
				best[i] = cur[i]
			}
		}

		prev = best
	}

	return ans
}