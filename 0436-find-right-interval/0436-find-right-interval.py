class Solution:
    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        n = len(intervals)
        sortedInts = [(start, end, i) for i, (start, end) in enumerate(intervals)]
        sortedInts.sort()
        starts = [int[0] for int in sortedInts]
        res = [-1] * n

        for s, e, i in sortedInts:
            cur = bisect_left(starts, e)
            if cur < n:
                orig = sortedInts[cur][2]
                res[i] = orig
                
        return res
        
        