class Solution {
    struct State {
        let value: Int64
        let count: Int
    }

    private func better(_ a: State, _ b: State) -> State {
        if a.value != b.value {
            return a.value > b.value ? a : b
        }
        return a.count >= b.count ? a : b
    }

    func maximumSum(_ nums: [Int], _ m: Int, _ l: Int, _ r: Int) -> Int {
        let n = nums.count

        var prefix = Array(repeating: Int64(0), count: n + 1)
        for i in 0..<n {
            prefix[i + 1] = prefix[i] + Int64(nums[i])
        }

        func calc(_ penalty: Int64) -> State {
            var dp = Array(
                repeating: State(value: 0, count: 0),
                count: n + 1
            )

            var bestNonEmpty = State(
                value: Int64.min / 4,
                count: 0
            )

            var deque = Array(repeating: 0, count: n + 1)
            var head = 0
            var tail = 0

            func key(_ index: Int) -> State {
                let s = dp[index]
                return State(
                    value: s.value - prefix[index],
                    count: s.count
                )
            }

            func keyBetterOrEqual(
                _ leftIndex: Int,
                _ rightIndex: Int
            ) -> Bool {
                let leftKey = key(leftIndex)
                let rightKey = key(rightIndex)

                return leftKey.value > rightKey.value ||
                    (
                        leftKey.value == rightKey.value &&
                        leftKey.count >= rightKey.count
                    )
            }

            for i in 1...n {
                let addIndex = i - l

                if addIndex >= 0 {
                    while head < tail &&
                        keyBetterOrEqual(
                            addIndex,
                            deque[tail - 1]
                        ) {
                        tail -= 1
                    }

                    deque[tail] = addIndex
                    tail += 1
                }

                let minimumAllowed = i - r

                while head < tail &&
                    deque[head] < minimumAllowed {
                    head += 1
                }

                if head < tail {
                    let j = deque[head]
                    let previous = dp[j]

                    let candidate = State(
                        value: previous.value +
                            prefix[i] -
                            prefix[j] -
                            penalty,
                        count: previous.count + 1
                    )

                    bestNonEmpty = better(
                        bestNonEmpty,
                        candidate
                    )
                }

                dp[i] = better(
                    dp[i - 1],
                    bestNonEmpty
                )
            }

            return bestNonEmpty
        }

        let noPenalty = calc(0)

        if noPenalty.count <= m {
            return Int(noPenalty.value)
        }

        var low: Int64 = 0
        var high: Int64 = 20_000_000_005

        while low < high {
            let mid = (low + high + 1) / 2
            let result = calc(mid)

            if result.count >= m {
                low = mid
            } else {
                high = mid - 1
            }
        }

        let result = calc(low)

        return Int(result.value + low * Int64(m))
    }
}