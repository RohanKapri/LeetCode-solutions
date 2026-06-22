from typing import List

class Solution:
    def getLength(self, nums: List[int]) -> int:
        n, ans = len(nums), 0

        mp = {}
        idx = 0
        for i in range(n):
            if nums[i] not in mp:
                mp[nums[i]] = idx
                idx += 1
            nums[i] = mp[nums[i]]

        for i in range(n):
            if i + ans >= n:
                break

            length = min(n - i + 1, n - idx + 2)
            freq = [0] * idx
            freqFreq = [0] * length
            numCount = freqCount = 0

            for j in range(i, n):
                val = freq[nums[j]] + 1
                freq[nums[j]] = val

                if val == 1:
                    numCount += 1

                if freqFreq[val] == 0:
                    freqCount += 1
                freqFreq[val] += 1

                if val != 1:
                    freqFreq[val - 1] -= 1
                    if freqFreq[val - 1] == 0:
                        freqCount -= 1

                if ans > j - i + 1:
                    continue

                if (
                    numCount == 1
                    or (
                        freqCount == 2
                        and (
                            ((val & 1) == 0 and freqFreq[val >> 1] != 0)
                            or ((val << 1) < length and freqFreq[val << 1] != 0)
                        )
                    )
                ):
                    ans = j - i + 1

        return ans