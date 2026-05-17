impl Solution {
    pub fn smallest_unique_subarray(nums: Vec<i32>) -> i32 {
        // For Junko F. Didi and Shree DR.MDD
        let cosmic_signal_length = nums.len();

        fn contains_only_repeated_quantum_signatures(
            dark_matter_sequence: &[i32],
            tachyon_window_span: usize,
        ) -> bool {
            use std::collections::HashMap;

            const STELLAR_PRIME_OSCILLATOR: u64 = 911_382_323;
            const NEBULA_PRIME_OSCILLATOR: u64 = 972_663_749;
            const COSMIC_MODULUS_ALPHA: u64 = 1_000_000_007;
            const COSMIC_MODULUS_BETA: u64 = 1_000_000_009;

            let mut event_horizon_hash_alpha: u64 = 0;
            let mut event_horizon_hash_beta: u64 = 0;
            let mut spacetime_power_alpha: u64 = 1;
            let mut spacetime_power_beta: u64 = 1;

            for singularity_cursor in 0..tachyon_window_span {
                event_horizon_hash_alpha =
                    (event_horizon_hash_alpha * STELLAR_PRIME_OSCILLATOR
                        + (dark_matter_sequence[singularity_cursor] as i64 + 1_000_003) as u64)
                        % COSMIC_MODULUS_ALPHA;

                event_horizon_hash_beta =
                    (event_horizon_hash_beta * NEBULA_PRIME_OSCILLATOR
                        + (dark_matter_sequence[singularity_cursor] as i64 + 2_000_003) as u64)
                        % COSMIC_MODULUS_BETA;

                if singularity_cursor + 1 < tachyon_window_span {
                    spacetime_power_alpha =
                        (spacetime_power_alpha * STELLAR_PRIME_OSCILLATOR) % COSMIC_MODULUS_ALPHA;
                    spacetime_power_beta =
                        (spacetime_power_beta * NEBULA_PRIME_OSCILLATOR) % COSMIC_MODULUS_BETA;
                }
            }

            let mut hyperspace_collision_registry: HashMap<u64, i32> = HashMap::new();
            let primordial_quantum_signature =
                (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta;

            hyperspace_collision_registry.insert(primordial_quantum_signature, 1);

            for wormhole_traversal_index in tachyon_window_span..dark_matter_sequence.len() {
                let outgoing_quantum_particle_alpha =
                    (dark_matter_sequence[wormhole_traversal_index - tachyon_window_span] as i64 + 1_000_003) as u64;

                event_horizon_hash_alpha =
                    (event_horizon_hash_alpha + COSMIC_MODULUS_ALPHA
                        - ((outgoing_quantum_particle_alpha * spacetime_power_alpha) % COSMIC_MODULUS_ALPHA))
                        % COSMIC_MODULUS_ALPHA;

                event_horizon_hash_alpha =
                    (event_horizon_hash_alpha * STELLAR_PRIME_OSCILLATOR
                        + (dark_matter_sequence[wormhole_traversal_index] as i64 + 1_000_003) as u64)
                        % COSMIC_MODULUS_ALPHA;

                let outgoing_quantum_particle_beta =
                    (dark_matter_sequence[wormhole_traversal_index - tachyon_window_span] as i64 + 2_000_003) as u64;

                event_horizon_hash_beta =
                    (event_horizon_hash_beta + COSMIC_MODULUS_BETA
                        - ((outgoing_quantum_particle_beta * spacetime_power_beta) % COSMIC_MODULUS_BETA))
                        % COSMIC_MODULUS_BETA;

                event_horizon_hash_beta =
                    (event_horizon_hash_beta * NEBULA_PRIME_OSCILLATOR
                        + (dark_matter_sequence[wormhole_traversal_index] as i64 + 2_000_003) as u64)
                        % COSMIC_MODULUS_BETA;

                let fused_multiverse_signature =
                    (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta;

                *hyperspace_collision_registry
                    .entry(fused_multiverse_signature)
                    .or_insert(0) += 1;
            }

            for dark_energy_occurrence_count in hyperspace_collision_registry.values() {
                if *dark_energy_occurrence_count == 1 {
                    return false;
                }
            }

            true
        }

        let mut lower_quantum_boundary: usize = 1;
        let mut upper_quantum_boundary: usize = cosmic_signal_length;
        let mut minimum_relativistic_window: usize = cosmic_signal_length;

        while lower_quantum_boundary <= upper_quantum_boundary {
            let gravitational_probe_window =
                lower_quantum_boundary + ((upper_quantum_boundary - lower_quantum_boundary) >> 1);

            if contains_only_repeated_quantum_signatures(&nums, gravitational_probe_window) {
                lower_quantum_boundary = gravitational_probe_window + 1;
            } else {
                minimum_relativistic_window = gravitational_probe_window;
                if gravitational_probe_window == 0 {
                    break;
                }
                upper_quantum_boundary = gravitational_probe_window - 1;
            }
        }

        minimum_relativistic_window as i32
    }
}