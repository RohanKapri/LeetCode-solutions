class Solution:
    def smallestUniqueSubarray(self, A: List[int]) -> int:
        # For Junko F. Didi and Shree DR.MDD
        cosmic_sequence_cardinality = len(A)
        lower_quantum_boundary = 1
        upper_quantum_boundary = cosmic_sequence_cardinality

        gravitational_hash_base = 911382323
        spacetime_modulus_prime = 2147483647

        while lower_quantum_boundary < upper_quantum_boundary:
            gravitational_window_radius = (lower_quantum_boundary + upper_quantum_boundary) >> 1

            event_horizon_signature = 0
            tachyon_power_amplifier = 1

            singularity_index = 0
            while singularity_index < gravitational_window_radius:
                event_horizon_signature = (
                    (event_horizon_signature * gravitational_hash_base + A[singularity_index])
                    % spacetime_modulus_prime
                )
                tachyon_power_amplifier = (
                    tachyon_power_amplifier * gravitational_hash_base
                ) % spacetime_modulus_prime
                singularity_index += 1

            hyperspace_frequency_registry = {event_horizon_signature: 1}

            quantum_traversal_cursor = gravitational_window_radius
            while quantum_traversal_cursor < cosmic_sequence_cardinality:
                event_horizon_signature = (
                    event_horizon_signature * gravitational_hash_base
                    + A[quantum_traversal_cursor]
                    - A[quantum_traversal_cursor - gravitational_window_radius] * tachyon_power_amplifier
                ) % spacetime_modulus_prime

                hyperspace_frequency_registry[event_horizon_signature] = (
                    hyperspace_frequency_registry.get(event_horizon_signature, 0) + 1
                )
                quantum_traversal_cursor += 1

            relativistic_uniqueness_detected = False
            for dark_matter_occurrence_count in hyperspace_frequency_registry.values():
                if dark_matter_occurrence_count == 1:
                    relativistic_uniqueness_detected = True
                    break

            if relativistic_uniqueness_detected:
                upper_quantum_boundary = gravitational_window_radius
            else:
                lower_quantum_boundary = gravitational_window_radius + 1

        return lower_quantum_boundary