class Solution:
    def fourSumCount(self, nums1, nums2, nums3, nums4):
        from collections import defaultdict
        ab = defaultdict(int)
        for a in nums1:
            for b in nums2: ab[a+b] += 1
        count = 0
        for c in nums3:
            for d in nums4: count += ab[-(c+d)]
        return count