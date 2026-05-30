# @param {Integer[][]} grid
# @return {Integer}
def max_score(grid)
  n = grid.length
  m = grid[0].length

  best = -100

  (1...(n - 1)).each do |i|
    curr = grid[i][0]

    (1...(m - 1)).each do |j|
      curr = [grid[i][j], curr + grid[i][j]].max
      best = [best, curr].max
    end

    best = [best, curr + grid[i][m - 1]].max
  end

  (1...(m - 1)).each do |j|
    curr = grid[0][j]

    (1...(n - 1)).each do |i|
      curr = [grid[i][j], curr + grid[i][j]].max
      best = [best, curr].max
    end

    best = [best, curr + grid[n - 1][j]].max
  end

  border_row = 0
  while border_row < n
    curr = grid[border_row][0]

    (1...m).each do |j|
      curr += grid[border_row][j]
      best = [best, curr].max
      curr = [curr, grid[border_row][j]].max
    end

    break if n == 1
    border_row += n - 1
  end

  border_col = 0
  while border_col < m
    curr = grid[0][border_col]

    (1...n).each do |i|
      curr += grid[i][border_col]
      best = [best, curr].max
      curr = [curr, grid[i][border_col]].max
    end

    break if m == 1
    border_col += m - 1
  end

  best
end