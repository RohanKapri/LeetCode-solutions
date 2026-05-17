class Solution:
    def smallestUniqueSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        mod = 10 ** 9 + 7
        base = 101

        pow_base = [1] * (n + 1)
        for i in range(1, n + 1):
            pow_base[i] = pow_base[i - 1] * base % mod

        pref = [0] * (n + 1)
        for i, x in enumerate(nums):
            pref[i + 1] = (pref[i] * base + x) % mod

        l = 0
        r = n
        while l + 1 < r:
            mid = (l + r) // 2
            
            mp = defaultdict(int)
            for i in range(mid, n + 1):
                h = (pref[i] - pref[i - mid] * pow_base[mid]) % mod
                mp[h] += 1
            
            if 1 in mp.values():
                r = mid
            else:
                l = mid

        return r