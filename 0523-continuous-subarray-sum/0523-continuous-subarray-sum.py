class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        return (s:=set()) or any(d[0] in s or s.add(d[1]) for d in accumulate(accumulate(nums), lambda a,n: (n%k, a[0]), initial=(0,-1)))