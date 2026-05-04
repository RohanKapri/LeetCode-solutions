class Solution:
    def numberOfBoomerangs(self, points: List[List[int]]) -> int:
        #step 1: calculate distances
        n = len(points)
        dist = [[0]*n for _ in range(n)]
        for i in range(n-1):
            for j in range(i+1,n):
                d = (points[i][0]-points[j][0])**2 + (points[i][1]-points[j][1])**2 
                dist[i][j] = dist[j][i] = d
        #step 2: find boomerangs
        boom = 0
        for i in range(n):
            c = Counter(dist[i])
            for v in c.values():
                if v>1:
                    boom += v*(v-1)
        return boom