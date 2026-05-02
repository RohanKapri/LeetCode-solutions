from random import randint as _ri

class Solution:
    def __init__(self, nums):
        self.orig = nums[:]
        self.nums = nums

    def reset(self):
        self.nums[:] = self.orig
        return self.nums

    def shuffle(self):
        a = self.nums; n = len(a)
        for i in range(n):
            j = _ri(i, n - 1)
            a[i], a[j] = a[j], a[i]
        return a