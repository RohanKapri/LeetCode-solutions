class Solution {
    func getLength(_ nums: [Int]) -> Int {
        var nums = nums
        let n = nums.count
        var ans = 0

        var mp = [Int: Int]()
        var idx = 0

        for i in 0..<n {
            if mp[nums[i]] == nil {
                mp[nums[i]] = idx
                idx += 1
            }
            nums[i] = mp[nums[i]]!
        }

        for i in 0..<n {
            if i + ans >= n { break }

            let len = min(n - i + 1, n - idx + 2)
            var freq = Array(repeating: 0, count: idx)
            var freqFreq = Array(repeating: 0, count: len)

            var numCount = 0
            var freqCount = 0

            for j in i..<n {
                let val = freq[nums[j]] + 1
                freq[nums[j]] = val

                if val == 1 { numCount += 1 }

                if freqFreq[val] == 0 { freqCount += 1 }
                freqFreq[val] += 1

                if val != 1 {
                    freqFreq[val - 1] -= 1
                    if freqFreq[val - 1] == 0 {
                        freqCount -= 1
                    }
                }

                if ans > j - i + 1 { continue }

                if numCount == 1 ||
                    (freqCount == 2 &&
                     (((val & 1) == 0 && freqFreq[val >> 1] != 0) ||
                      ((val << 1) < len && freqFreq[val << 1] != 0))) {
                    ans = j - i + 1
                }
            }
        }

        return ans
    }
}