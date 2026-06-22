import "container/heap"

type MaxHeap []int

func (h MaxHeap) Len() int            { return len(h) }
func (h MaxHeap) Less(i, j int) bool  { return h[i] > h[j] }
func (h MaxHeap) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *MaxHeap) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *MaxHeap) Pop() interface{} {
	old := *h
	x := old[len(old)-1]
	*h = old[:len(old)-1]
	return x
}

type MinHeap []int

func (h MinHeap) Len() int            { return len(h) }
func (h MinHeap) Less(i, j int) bool  { return h[i] < h[j] }
func (h MinHeap) Swap(i, j int)       { h[i], h[j] = h[j], h[i] }
func (h *MinHeap) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *MinHeap) Pop() interface{} {
	old := *h
	x := old[len(old)-1]
	*h = old[:len(old)-1]
	return x
}

func maxSum(nums []int, k int) int64 {
	n := len(nums)

	ans := int64(-(1 << 31))

	if k == 0 || n == 1 {
		var sm int64

		for _, num := range nums {
			sm += int64(num)

			if sm > ans {
				ans = sm
			}

			if sm < 0 {
				sm = 0
			}
		}

		return ans
	}

	cnt := 0
	var cur int64
	pref := make([]int64, n+1)

	for i := 0; i < n; i++ {
		if nums[i] >= 0 {
			cur += int64(nums[i])
		} else {
			cnt++
		}

		pref[i+1] = pref[i] + int64(nums[i])

		if int64(nums[i]) > ans {
			ans = int64(nums[i])
		}
	}

	if cnt <= k {
		return cur
	}

	dp := make([][]int64, n)
	for i := range dp {
		dp[i] = make([]int64, n)
	}

	for i := 0; i < n; i++ {
		pq := &MaxHeap{}
		heap.Init(pq)

		var sm int64

		for j := i; j < n; j++ {
			if nums[j] >= 0 {
				dp[i][j] = sm
				continue
			}

			if pq.Len() < k {
				heap.Push(pq, nums[j])
				sm += int64(nums[j])
			} else if (*pq)[0] > nums[j] {
				sm -= int64((*pq)[0])
				(*pq)[0] = nums[j]
				heap.Fix(pq, 0)
				sm += int64(nums[j])
			}
		}
	}

	for i := 0; i < n; i++ {
		pqmax := &MinHeap{}
		heap.Init(pqmax)

		var sm int64

		for j := 0; j < i; j++ {
			if nums[j] < 0 {
				continue
			}

			if pqmax.Len() < k {
				heap.Push(pqmax, nums[j])
				sm += int64(nums[j])
			} else if (*pqmax)[0] < nums[j] {
				sm -= int64((*pqmax)[0])
				(*pqmax)[0] = nums[j]
				heap.Fix(pqmax, 0)
				sm += int64(nums[j])
			}
		}

		for j := n - 1; j > i; j-- {
			curSum := pref[j+1] - pref[i]
			curSum -= dp[i][j]
			curSum += sm

			if curSum > ans {
				ans = curSum
			}

			if nums[j] < 0 {
				continue
			}

			if pqmax.Len() < k {
				heap.Push(pqmax, nums[j])
				sm += int64(nums[j])
			} else if (*pqmax)[0] < nums[j] {
				sm -= int64((*pqmax)[0])
				(*pqmax)[0] = nums[j]
				heap.Fix(pqmax, 0)
				sm += int64(nums[j])
			}

			if pqmax.Len() > 0 && sm > ans {
				ans = sm
			}
		}
	}

	return ans
}