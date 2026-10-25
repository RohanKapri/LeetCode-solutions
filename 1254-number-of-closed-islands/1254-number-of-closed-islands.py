class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        def dfs(x, y):
            if x < 0 or x >= len(grid) or y < 0 or y >= len(grid[0]) or grid[x][y] == 1:
                return
            grid[x][y] = 1  
            for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
                dfs(x + dx, y + dy)
        

        for i in range(len(grid)):
            for j in [0, len(grid[0]) - 1]:
                if grid[i][j] == 0:
                    dfs(i, j)
        for j in range(len(grid[0])):
            for i in [0, len(grid) - 1]:
                if grid[i][j] == 0:
                    dfs(i, j)

        closed_islands = 0
        for i in range(1, len(grid) - 1):
            for j in range(1, len(grid[0]) - 1):
                if grid[i][j] == 0:
                    dfs(i, j)
                    closed_islands += 1

        return closed_islands
