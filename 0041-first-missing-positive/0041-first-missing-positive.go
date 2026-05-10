func firstMissingPositive(nums []int) int {
    set := make(map[int]bool)
    for _, n := range nums {
        set[n] = true
    }
    i := 1
    for set[i] {
        i++
    }
    return i
}