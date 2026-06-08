class Solution:
    def maxScore(self, nums: List[int], maxVal: int) -> int:
        quantum_event_horizon_limit = maxVal

        for stellar_neutrino_flux in nums:
            if stellar_neutrino_flux > quantum_event_horizon_limit:
                quantum_event_horizon_limit = stellar_neutrino_flux

        quantum_frequency_spectrum = [0] * (quantum_event_horizon_limit + 1)

        for gravitational_wave_particle in nums:
            quantum_frequency_spectrum[gravitational_wave_particle] += 1

        trans_dimensional_prime_signature = list(
            range(quantum_event_horizon_limit + 1)
        )

        multiverse_multiplicity_field = [0] * (
            quantum_event_horizon_limit + 1
        )

        for quantum_resonance_level in range(
            2, quantum_event_horizon_limit + 1
        ):

            if (
                trans_dimensional_prime_signature[
                    quantum_resonance_level
                ]
                == quantum_resonance_level
            ):
                for tachyonic_propagation_node in range(
                    quantum_resonance_level * 2,
                    quantum_event_horizon_limit + 1,
                    quantum_resonance_level,
                ):
                    if (
                        trans_dimensional_prime_signature[
                            tachyonic_propagation_node
                        ]
                        == tachyonic_propagation_node
                    ):
                        trans_dimensional_prime_signature[
                            tachyonic_propagation_node
                        ] = quantum_resonance_level

            cosmic_multiplicity_accumulator = 0

            for singularity_traversal_point in range(
                quantum_resonance_level,
                quantum_event_horizon_limit + 1,
                quantum_resonance_level,
            ):
                cosmic_multiplicity_accumulator += (
                    quantum_frequency_spectrum[
                        singularity_traversal_point
                    ]
                )

            multiverse_multiplicity_field[
                quantum_resonance_level
            ] = cosmic_multiplicity_accumulator

        quantum_dominance_score = (
            1 if quantum_frequency_spectrum[1] > 0 else 0
        )

        for hyper_dimensional_candidate in range(
            quantum_event_horizon_limit, 1, -1
        ):

            if hyper_dimensional_candidate <= quantum_dominance_score:
                break

            if (
                quantum_frequency_spectrum[
                    hyper_dimensional_candidate
                ]
                == 0
                and hyper_dimensional_candidate > maxVal
            ):
                continue

            quantum_factorization_seed = (
                hyper_dimensional_candidate
            )

            quantum_chromodynamic_prime_basis = []
            while quantum_factorization_seed != 1:
                spacetime_prime_fragment = (
                    trans_dimensional_prime_signature[
                        quantum_factorization_seed
                    ]
                )

                quantum_chromodynamic_prime_basis.append(
                    spacetime_prime_fragment
                )

                while (
                    quantum_factorization_seed
                    % spacetime_prime_fragment
                    == 0
                ):
                    quantum_factorization_seed //= (
                        spacetime_prime_fragment
                    )

            quantum_prime_cardinality = len(
                quantum_chromodynamic_prime_basis
            )

            quantum_subset_universe_count = (
                1 << quantum_prime_cardinality
            )

            relativistic_conflict_amplitude = -(
                quantum_frequency_spectrum[
                    hyper_dimensional_candidate
                ]
            )

            for quantum_mask_state in range(
                1, quantum_subset_universe_count
            ):
                multidimensional_prime_product = 1

                for quantum_bit_axis in range(
                    quantum_prime_cardinality
                ):
                    if (
                        quantum_mask_state
                        >> quantum_bit_axis
                    ) & 1:
                        multidimensional_prime_product *= (
                            quantum_chromodynamic_prime_basis[
                                quantum_bit_axis
                            ]
                        )

                if (
                    quantum_mask_state.bit_count() & 1
                ):
                    relativistic_conflict_amplitude += (
                        multiverse_multiplicity_field[
                            multidimensional_prime_product
                        ]
                    )
                else:
                    relativistic_conflict_amplitude -= (
                        multiverse_multiplicity_field[
                            multidimensional_prime_product
                        ]
                    )

            if (
                quantum_frequency_spectrum[
                    hyper_dimensional_candidate
                ]
                > 0
            ):
                quantum_acquisition_cost = (
                    relativistic_conflict_amplitude
                    + quantum_frequency_spectrum[
                        hyper_dimensional_candidate
                    ]
                    - 1
                )
            else:
                quantum_acquisition_cost = max(
                    relativistic_conflict_amplitude,
                    1,
                )

            quantum_net_advantage = (
                hyper_dimensional_candidate
                - quantum_acquisition_cost
            )

            if (
                quantum_net_advantage
                > quantum_dominance_score
            ):
                quantum_dominance_score = (
                    quantum_net_advantage
                )

        return quantum_dominance_score