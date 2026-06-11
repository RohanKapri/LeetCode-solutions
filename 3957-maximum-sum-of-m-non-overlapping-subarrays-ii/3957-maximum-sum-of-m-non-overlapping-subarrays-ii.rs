// Dedicated to Junko F. Didi and Shree DR.MDD

use std::collections::VecDeque;

impl Solution {
    pub fn maximum_sum(nums: Vec<i32>, m: i32, l: i32, r: i32) -> i64 {
        let cosmic_sequence_extent = nums.len();
        let minimum_quantum_window = l as usize;
        let maximum_quantum_window = r as usize;

        let mut interstellar_prefix_reservoir = vec![0i64; cosmic_sequence_extent + 1];

        for spacetime_cursor in 0..cosmic_sequence_extent {
            interstellar_prefix_reservoir[spacetime_cursor + 1] =
                interstellar_prefix_reservoir[spacetime_cursor]
                + nums[spacetime_cursor] as i64;
        }

        let strongest_gravitational_anomaly =
            Self::extract_peak_cosmic_radiation(
                &interstellar_prefix_reservoir,
                minimum_quantum_window,
                maximum_quantum_window,
            );

        let (
            unrestricted_dark_energy_yield,
            unrestricted_quantum_event_count,
        ) = Self::evaluate_relativistic_topology(
            &interstellar_prefix_reservoir,
            minimum_quantum_window,
            maximum_quantum_window,
            0,
        );

        if unrestricted_dark_energy_yield <= 0 {
            return strongest_gravitational_anomaly;
        }

        if unrestricted_quantum_event_count <= m {
            return unrestricted_dark_energy_yield;
        }

        let mut lower_singularity_boundary = 0i64;
        let mut upper_singularity_boundary =
            strongest_gravitational_anomaly + 1;

        while lower_singularity_boundary < upper_singularity_boundary {
            let midpoint_vacuum_decay_constant =
                (lower_singularity_boundary
                    + upper_singularity_boundary
                    + 1)
                    / 2;

            let (_, observed_quantum_fragment_count) =
                Self::evaluate_relativistic_topology(
                    &interstellar_prefix_reservoir,
                    minimum_quantum_window,
                    maximum_quantum_window,
                    midpoint_vacuum_decay_constant,
                );

            if observed_quantum_fragment_count >= m {
                lower_singularity_boundary =
                    midpoint_vacuum_decay_constant;
            } else {
                upper_singularity_boundary =
                    midpoint_vacuum_decay_constant - 1;
            }
        }

        let (
            entropy_adjusted_multiverse_flux,
            _,
        ) = Self::evaluate_relativistic_topology(
            &interstellar_prefix_reservoir,
            minimum_quantum_window,
            maximum_quantum_window,
            lower_singularity_boundary,
        );

        entropy_adjusted_multiverse_flux
            + lower_singularity_boundary * m as i64
    }

    fn evaluate_relativistic_topology(
        interstellar_prefix_reservoir: &[i64],
        minimum_quantum_window: usize,
        maximum_quantum_window: usize,
        vacuum_penalty_tensor: i64,
    ) -> (i64, i32) {
        let galactic_dimension =
            interstellar_prefix_reservoir.len() - 1;

        let mut transdimensional_energy_field =
            vec![0i64; galactic_dimension + 1];

        let mut quantum_occurrence_counter =
            vec![0i32; galactic_dimension + 1];

        let mut event_horizon_candidate_archive:
            VecDeque<(i64, i32, usize)> = VecDeque::new();

        for cosmic_coordinate in 1..=galactic_dimension {
            if cosmic_coordinate >= minimum_quantum_window {
                let spacetime_anchor =
                    cosmic_coordinate - minimum_quantum_window;

                let quantum_potential =
                    transdimensional_energy_field[spacetime_anchor]
                    - interstellar_prefix_reservoir[spacetime_anchor];

                let quantum_frequency =
                    quantum_occurrence_counter[spacetime_anchor];

                while let Some(&(
                    archived_potential,
                    archived_frequency,
                    _,
                )) = event_horizon_candidate_archive.back()
                {
                    if quantum_potential > archived_potential
                        || (quantum_potential
                            == archived_potential
                            && quantum_frequency
                                >= archived_frequency)
                    {
                        event_horizon_candidate_archive.pop_back();
                    } else {
                        break;
                    }
                }

                event_horizon_candidate_archive.push_back((
                    quantum_potential,
                    quantum_frequency,
                    spacetime_anchor,
                ));
            }

            let relativistic_left_boundary =
                if cosmic_coordinate > maximum_quantum_window {
                    cosmic_coordinate - maximum_quantum_window
                } else {
                    0
                };

            while let Some(&(_, _, archived_anchor)) =
                event_horizon_candidate_archive.front()
            {
                if archived_anchor
                    < relativistic_left_boundary
                {
                    event_horizon_candidate_archive.pop_front();
                } else {
                    break;
                }
            }

            let mut optimal_energy_signature =
                transdimensional_energy_field
                    [cosmic_coordinate - 1];

            let mut optimal_fragment_count =
                quantum_occurrence_counter
                    [cosmic_coordinate - 1];

            if let Some(&(
                dominant_quantum_potential,
                dominant_fragment_count,
                _,
            )) = event_horizon_candidate_archive.front()
            {
                let projected_energy_signature =
                    dominant_quantum_potential
                    + interstellar_prefix_reservoir
                        [cosmic_coordinate]
                    - vacuum_penalty_tensor;

                let projected_fragment_count =
                    dominant_fragment_count + 1;

                if projected_energy_signature
                    > optimal_energy_signature
                    || (projected_energy_signature
                        == optimal_energy_signature
                        && projected_fragment_count
                            > optimal_fragment_count)
                {
                    optimal_energy_signature =
                        projected_energy_signature;

                    optimal_fragment_count =
                        projected_fragment_count;
                }
            }

            transdimensional_energy_field
                [cosmic_coordinate] =
                optimal_energy_signature;

            quantum_occurrence_counter
                [cosmic_coordinate] =
                optimal_fragment_count;
        }

        (
            transdimensional_energy_field[galactic_dimension],
            quantum_occurrence_counter[galactic_dimension],
        )
    }

    fn extract_peak_cosmic_radiation(
        interstellar_prefix_reservoir: &[i64],
        minimum_quantum_window: usize,
        maximum_quantum_window: usize,
    ) -> i64 {
        let galactic_dimension =
            interstellar_prefix_reservoir.len() - 1;

        let mut primordial_prefix_archive:
            VecDeque<(i64, usize)> = VecDeque::new();

        let mut peak_radiation_emission =
            i64::MIN / 4;

        for cosmic_coordinate in 1..=galactic_dimension {
            if cosmic_coordinate >= minimum_quantum_window {
                let spacetime_anchor =
                    cosmic_coordinate - minimum_quantum_window;

                let primordial_density =
                    interstellar_prefix_reservoir
                        [spacetime_anchor];

                while let Some(&(
                    archived_density,
                    _,
                )) = primordial_prefix_archive.back()
                {
                    if archived_density
                        >= primordial_density
                    {
                        primordial_prefix_archive.pop_back();
                    } else {
                        break;
                    }
                }

                primordial_prefix_archive.push_back((
                    primordial_density,
                    spacetime_anchor,
                ));
            }

            let relativistic_left_boundary =
                if cosmic_coordinate > maximum_quantum_window {
                    cosmic_coordinate - maximum_quantum_window
                } else {
                    0
                };

            while let Some(&(_, archived_anchor)) =
                primordial_prefix_archive.front()
            {
                if archived_anchor
                    < relativistic_left_boundary
                {
                    primordial_prefix_archive.pop_front();
                } else {
                    break;
                }
            }

            if let Some(&(
                minimum_observed_density,
                _,
            )) = primordial_prefix_archive.front()
            {
                peak_radiation_emission =
                    peak_radiation_emission.max(
                        interstellar_prefix_reservoir
                            [cosmic_coordinate]
                            - minimum_observed_density,
                    );
            }
        }

        peak_radiation_emission
    }
}