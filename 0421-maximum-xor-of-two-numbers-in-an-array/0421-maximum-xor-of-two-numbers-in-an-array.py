class Solution:
    def findMaximumXOR(self, nums: List[int]) -> int:
        mx = max(nums)
        ans = mask = 0
        for i in range(mx.bit_length()-1, -1, -1):
            mask |= (1<<i)
            new_ans = ans | (1<<i)
            seen = set()
            for x in nums:
                x &= mask
                if new_ans^x in seen:
                    ans = new_ans
                    break
                seen.add(x)
        return ans