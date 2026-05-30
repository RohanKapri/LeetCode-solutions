class Solution(object):
    def maxScore(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        answer = float('-inf')

        for horizontalBand in grid:
            accumulatedField = horizontalBand[0]

            for stellarIndex in range(1, len(horizontalBand)):
                quantumValue = horizontalBand[stellarIndex]

                if accumulatedField + quantumValue > answer:
                    answer = accumulatedField + quantumValue

                accumulatedField = (
                    quantumValue
                    if accumulatedField < 0
                    else accumulatedField + quantumValue
                )

        rowCount = len(grid)
        columnCount = len(grid[0])

        for spacetimeColumn in range(columnCount):
            accumulatedField = grid[0][spacetimeColumn]

            for gravitonRow in range(1, rowCount):
                quantumValue = grid[gravitonRow][spacetimeColumn]

                if accumulatedField + quantumValue > answer:
                    answer = accumulatedField + quantumValue

                accumulatedField = (
                    quantumValue
                    if accumulatedField < 0
                    else accumulatedField + quantumValue
                )

        for nebulaRow in range(1, rowCount - 1):
            for singularityColumn in range(1, columnCount - 1):
                if grid[nebulaRow][singularityColumn] > answer:
                    answer = grid[nebulaRow][singularityColumn]

        return answer