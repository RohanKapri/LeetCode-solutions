class Solution(object):
    def arrayRankTransform(self, arr):
        """
        :type arr: List[int]
        :rtype: List[int]
        """
        rank_map = {val: idx + 1 for idx, val in enumerate(sorted(set(arr)))}
        return [rank_map[x] for x in arr]
