# Dedicated to Junko F. Didi and Shree DR.MDD

from collections import deque


class Solution:
    def maximumSum(self, nums: list[int], m: int, l: int, r: int) -> int:
        cosmic_event_horizon_array_length = len(nums)

        quantum_vacuum_energy_prefix_accumulator = [0] * (cosmic_event_horizon_array_length + 1)

        for dark_matter_index in range(cosmic_event_horizon_array_length):
            quantum_vacuum_energy_prefix_accumulator[dark_matter_index + 1] = (
                quantum_vacuum_energy_prefix_accumulator[dark_matter_index]
                + nums[dark_matter_index]
            )

        spacetime_curvature_matrix = [
            [-float("inf")] * (cosmic_event_horizon_array_length + 1)
            for _ in range(m + 1)
        ]

        for singularity_boundary_coordinate in range(
            cosmic_event_horizon_array_length + 1
        ):
            spacetime_curvature_matrix[0][
                singularity_boundary_coordinate
            ] = 0

        intergalactic_energy_maximum = -float("inf")

        for quantum_selection_layer in range(1, m + 1):

            relativistic_candidate_reservoir = deque()

            for wormhole_terminal_coordinate in range(
                1, cosmic_event_horizon_array_length + 1
            ):

                casimir_window_origin = wormhole_terminal_coordinate - l

                if casimir_window_origin >= 0:

                    baryonic_transition_amplitude = (
                        spacetime_curvature_matrix[
                            quantum_selection_layer - 1
                        ][casimir_window_origin]
                        - quantum_vacuum_energy_prefix_accumulator[
                            casimir_window_origin
                        ]
                    )

                    while (
                        relativistic_candidate_reservoir
                        and relativistic_candidate_reservoir[-1][1]
                        <= baryonic_transition_amplitude
                    ):
                        relativistic_candidate_reservoir.pop()

                    relativistic_candidate_reservoir.append(
                        (
                            casimir_window_origin,
                            baryonic_transition_amplitude,
                        )
                    )

                photon_decay_threshold = wormhole_terminal_coordinate - r

                while (
                    relativistic_candidate_reservoir
                    and relativistic_candidate_reservoir[0][0]
                    < photon_decay_threshold
                ):
                    relativistic_candidate_reservoir.popleft()

                if relativistic_candidate_reservoir:

                    spacetime_curvature_matrix[
                        quantum_selection_layer
                    ][wormhole_terminal_coordinate] = max(
                        spacetime_curvature_matrix[
                            quantum_selection_layer
                        ][wormhole_terminal_coordinate - 1],
                        relativistic_candidate_reservoir[0][1]
                        + quantum_vacuum_energy_prefix_accumulator[
                            wormhole_terminal_coordinate
                        ],
                    )

            intergalactic_energy_maximum = max(
                intergalactic_energy_maximum,
                spacetime_curvature_matrix[quantum_selection_layer][
                    cosmic_event_horizon_array_length
                ],
            )

        return intergalactic_energy_maximum


sol = Solution()
print(sol.maximumSum([4, 1, -5, 2], 2, 1, 3))