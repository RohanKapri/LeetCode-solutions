func maxScore(nums []int, maxVal int) int {
	mx := maxVal

	for _, x := range nums {
		if x > mx {
			mx = x
		}
	}

	freq := make([]int, mx+1)
	for _, x := range nums {
		freq[x]++
	}

	spf := make([]int, mx+1)
	for i := 0; i <= mx; i++ {
		spf[i] = i
	}

	mul := make([]int, mx+1)

	for i := 2; i <= mx; i++ {
		if spf[i] == i {
			for j := i * 2; j <= mx; j += i {
				if spf[j] == j {
					spf[j] = i
				}
			}
		}

		cnt := 0
		for j := i; j <= mx; j += i {
			cnt += freq[j]
		}
		mul[i] = cnt
	}

	ans := 0
	if freq[1] > 0 {
		ans = 1
	}

	for i := mx; i >= 2; i-- {
		if i <= ans {
			break
		}

		if freq[i] == 0 && i > maxVal {
			continue
		}

		x := i
		primes := make([]int, 0, 7)

		for x != 1 {
			p := spf[x]
			primes = append(primes, p)

			for x%p == 0 {
				x /= p
			}
		}

		bad := -freq[i]
		total := 1 << len(primes)

		for mask := 1; mask < total; mask++ {
			prod := 1
			bits := 0

			for k := 0; k < len(primes); k++ {
				if (mask>>k)&1 == 1 {
					prod *= primes[k]
					bits++
				}
			}

			if bits&1 == 1 {
				bad += mul[prod]
			} else {
				bad -= mul[prod]
			}
		}

		cost := 0
		if freq[i] > 0 {
			cost = bad + freq[i] - 1
		} else {
			if bad > 1 {
				cost = bad
			} else {
				cost = 1
			}
		}

		score := i - cost
		if score > ans {
			ans = score
		}
	}

	return ans
}