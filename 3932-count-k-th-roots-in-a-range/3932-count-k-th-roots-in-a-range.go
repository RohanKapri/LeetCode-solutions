func countKthRoots(l int, r int, k int) int {
	if k == 1 {
		return r - l + 1
	}

	result := 0
	x := 0

	for {
		value := 1
		for i := 0; i < k; i++ {
			value *= x
			if value > r {
				return result
			}
		}

		if value >= l {
			result++
		}

		x++
	}
}