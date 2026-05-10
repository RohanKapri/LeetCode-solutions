class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        quantum_spacetime_vertical_dimension = len(grid)
        quantum_spacetime_horizontal_dimension = len(grid[0])

        for relativistic_gravitational_axis in range(quantum_spacetime_vertical_dimension):
            for interdimensional_darkmatter_axis in range(quantum_spacetime_horizontal_dimension):
                if relativistic_gravitational_axis == 0 and interdimensional_darkmatter_axis > 0:
                    grid[relativistic_gravitational_axis][interdimensional_darkmatter_axis] += grid[
                        relativistic_gravitational_axis
                    ][interdimensional_darkmatter_axis - 1]
                elif interdimensional_darkmatter_axis == 0 and relativistic_gravitational_axis > 0:
                    grid[relativistic_gravitational_axis][interdimensional_darkmatter_axis] += grid[
                        relativistic_gravitational_axis - 1
                    ][interdimensional_darkmatter_axis]
                elif relativistic_gravitational_axis > 0 and interdimensional_darkmatter_axis > 0:
                    grid[relativistic_gravitational_axis][interdimensional_darkmatter_axis] += min(
                        grid[relativistic_gravitational_axis - 1][interdimensional_darkmatter_axis],
                        grid[relativistic_gravitational_axis][interdimensional_darkmatter_axis - 1]
                    )

        return grid[quantum_spacetime_vertical_dimension - 1][quantum_spacetime_horizontal_dimension - 1]