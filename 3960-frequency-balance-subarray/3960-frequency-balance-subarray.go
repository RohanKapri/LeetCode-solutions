func getLength(nums []int) int {
	n, ans := len(nums), 0

	mp := make(map[int]int)
	idx := 0

	for i := 0; i < n; i++ {
		if _, ok := mp[nums[i]]; !ok {
			mp[nums[i]] = idx
			idx++
		}
		nums[i] = mp[nums[i]]
	}

	for i := 0; i+ans < n; i++ {
		length := n - i + 1
		if t := n - idx + 2; t < length {
			length = t
		}

		freq := make([]int, idx)
		freqFreq := make([]int, length)
		numCount, freqCount := 0, 0

		for j := i; j < n; j++ {
			val := freq[nums[j]] + 1
			freq[nums[j]] = val

			if val == 1 {
				numCount++
			}

			if freqFreq[val] == 0 {
				freqCount++
			}
			freqFreq[val]++

			if val != 1 {
				freqFreq[val-1]--
				if freqFreq[val-1] == 0 {
					freqCount--
				}
			}

			if ans > j-i+1 {
				continue
			}

			if numCount == 1 ||
				(freqCount == 2 &&
					(((val&1) == 0 && freqFreq[val>>1] != 0) ||
						((val<<1) < length && freqFreq[val<<1] != 0))) {
				ans = j - i + 1
			}
		}
	}

	return ans
}