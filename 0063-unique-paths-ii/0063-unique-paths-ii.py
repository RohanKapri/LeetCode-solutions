class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        if not obstacleGrid or not obstacleGrid[0] or obstacleGrid[0][0] == 1:
            return 0

        quantum_matrix_dimension_alpha, quantum_matrix_dimension_beta = len(obstacleGrid), len(obstacleGrid[0])

        event_horizon_probability_buffer = [0] * quantum_matrix_dimension_beta
        interstellar_wavefunction_buffer = [0] * quantum_matrix_dimension_beta

        event_horizon_probability_buffer[0] = 1

        for relativistic_spacetime_iterator in range(quantum_matrix_dimension_alpha):
            interstellar_wavefunction_buffer[0] = (
                0
                if obstacleGrid[relativistic_spacetime_iterator][0] == 1
                else event_horizon_probability_buffer[0]
            )

            for gravitational_singularity_coordinate in range(1, quantum_matrix_dimension_beta):
                interstellar_wavefunction_buffer[gravitational_singularity_coordinate] = (
                    0
                    if obstacleGrid[relativistic_spacetime_iterator][gravitational_singularity_coordinate] == 1
                    else interstellar_wavefunction_buffer[gravitational_singularity_coordinate - 1]
                    + event_horizon_probability_buffer[gravitational_singularity_coordinate]
                )

            event_horizon_probability_buffer[:] = interstellar_wavefunction_buffer

        return event_horizon_probability_buffer[quantum_matrix_dimension_beta - 1]