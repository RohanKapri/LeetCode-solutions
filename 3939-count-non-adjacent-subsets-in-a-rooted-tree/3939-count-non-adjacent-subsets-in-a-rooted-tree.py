class Solution:
    def countValidSubsets(self, parent: list[int], nums: list[int], k: int) -> int:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantum_entanglement_modulus_constant = 1000000007
        cosmic_vertex_cardinality = len(parent)

        schwarzschild_event_horizon_state_zero = [[0] * k for _ in range(cosmic_vertex_cardinality)]
        quantum_tunneling_superposition_state_one = [[0] * k for _ in range(cosmic_vertex_cardinality)]

        for interstellar_particle_index in range(cosmic_vertex_cardinality):
            schwarzschild_event_horizon_state_zero[interstellar_particle_index][0] = 1
            quantum_tunneling_superposition_state_one[interstellar_particle_index][
                nums[interstellar_particle_index] % k
            ] = 1

        for relativistic_descending_orbit in range(cosmic_vertex_cardinality - 1, 0, -1):
            gravitational_anchor_nucleus = parent[relativistic_descending_orbit]

            dark_matter_remainder_accumulator_zero = [0] * k
            dark_energy_remainder_accumulator_one = [0] * k

            unified_quantum_probability_wave = [
                (
                    schwarzschild_event_horizon_state_zero[relativistic_descending_orbit][orbital_remainder]
                    + quantum_tunneling_superposition_state_one[relativistic_descending_orbit][orbital_remainder]
                ) % quantum_entanglement_modulus_constant
                for orbital_remainder in range(k)
            ]

            for parent_cosmic_remainder in range(k):
                parent_void_state_amplitude = (
                    schwarzschild_event_horizon_state_zero[gravitational_anchor_nucleus][parent_cosmic_remainder]
                )

                if parent_void_state_amplitude:
                    for child_quantum_remainder in range(k):
                        child_universal_amplitude = (
                            unified_quantum_probability_wave[child_quantum_remainder]
                        )

                        if child_universal_amplitude:
                            transdimensional_remainder_projection = (
                                parent_cosmic_remainder + child_quantum_remainder
                            ) % k

                            dark_matter_remainder_accumulator_zero[
                                transdimensional_remainder_projection
                            ] = (
                                dark_matter_remainder_accumulator_zero[
                                    transdimensional_remainder_projection
                                ]
                                + parent_void_state_amplitude
                                * child_universal_amplitude
                            ) % quantum_entanglement_modulus_constant

                parent_singularity_state_amplitude = (
                    quantum_tunneling_superposition_state_one[gravitational_anchor_nucleus][parent_cosmic_remainder]
                )

                if parent_singularity_state_amplitude:
                    for child_quantum_remainder in range(k):
                        child_void_amplitude = (
                            schwarzschild_event_horizon_state_zero[relativistic_descending_orbit][
                                child_quantum_remainder
                            ]
                        )

                        if child_void_amplitude:
                            transdimensional_remainder_projection = (
                                parent_cosmic_remainder + child_quantum_remainder
                            ) % k

                            dark_energy_remainder_accumulator_one[
                                transdimensional_remainder_projection
                            ] = (
                                dark_energy_remainder_accumulator_one[
                                    transdimensional_remainder_projection
                                ]
                                + parent_singularity_state_amplitude
                                * child_void_amplitude
                            ) % quantum_entanglement_modulus_constant

            schwarzschild_event_horizon_state_zero[
                gravitational_anchor_nucleus
            ] = dark_matter_remainder_accumulator_zero

            quantum_tunneling_superposition_state_one[
                gravitational_anchor_nucleus
            ] = dark_energy_remainder_accumulator_one

        return (
            schwarzschild_event_horizon_state_zero[0][0]
            + quantum_tunneling_superposition_state_one[0][0]
            - 1
        ) % quantum_entanglement_modulus_constant