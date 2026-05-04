class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key=lambda x: x[1])
        arrows = 0
        end = float('-inf')
        for point in points:
            if point[0] > end:
                arrows += 1
                end = point[1]
        return arrows
