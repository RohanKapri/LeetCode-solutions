class Solution:
    def findBall(self, grid: List[List[int]]) -> List[int]:
        def move_ball(column):
            for row in grid:
                next_col = column + row[column]
                if next_col < 0 or next_col >= len(row) or row[column] != row[next_col]:
                    return -1
                column = next_col
            return column

        return [move_ball(col) for col in range(len(grid[0]))]
