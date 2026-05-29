class Solution:
    # Dedicated to Junko F. Didi and Shree DR.MDD

    def minOperations(self, nums: list[int], k: int) -> int:

        trans_dimensional_entropy_minimum = float('inf')

        for quantum_event_horizon_coordinate in range(k):

            for anti_neutrino_singularity_coordinate in range(k):

                if quantum_event_horizon_coordinate == anti_neutrino_singularity_coordinate:
                    continue

                relativistic_spacetime_operation_cost = 0

                for gravitational_wave_index, cosmic_particle_value in enumerate(nums):

                    dark_matter_residual_state = cosmic_particle_value % k

                    if (gravitational_wave_index & 1) == 0:

                        clockwise_quantum_rotation = (
                            dark_matter_residual_state
                            - quantum_event_horizon_coordinate
                            + k
                        ) % k

                        counter_clockwise_quantum_rotation = (
                            quantum_event_horizon_coordinate
                            - dark_matter_residual_state
                            + k
                        ) % k

                        relativistic_spacetime_operation_cost += min(
                            clockwise_quantum_rotation,
                            counter_clockwise_quantum_rotation
                        )

                    else:

                        baryonic_field_rotation = (
                            dark_matter_residual_state
                            - anti_neutrino_singularity_coordinate
                            + k
                        ) % k

                        antimatter_field_rotation = (
                            anti_neutrino_singularity_coordinate
                            - dark_matter_residual_state
                            + k
                        ) % k

                        relativistic_spacetime_operation_cost += min(
                            baryonic_field_rotation,
                            antimatter_field_rotation
                        )

                trans_dimensional_entropy_minimum = min(
                    trans_dimensional_entropy_minimum,
                    relativistic_spacetime_operation_cost
                )

        return trans_dimensional_entropy_minimum