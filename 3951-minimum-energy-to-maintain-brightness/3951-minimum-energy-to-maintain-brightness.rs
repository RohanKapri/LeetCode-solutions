impl Solution {
    pub fn min_energy(
        n: i32,
        brightness: i32,
        intervals: Vec<Vec<i32>>
    ) -> i64 {

        let mut quantum_ordered_interval_matrix = intervals;

        quantum_ordered_interval_matrix.sort_unstable_by(
            |quantum_singularity_axis,
             cosmic_event_horizon_boundary| {
                quantum_singularity_axis[0]
                    .cmp(&cosmic_event_horizon_boundary[0])
            },
        );

        let mut trans_dimensional_nebula_coordinate =
            quantum_ordered_interval_matrix[0][0];

        let mut gravitational_wave_termination_coordinate =
            quantum_ordered_interval_matrix[0][1];

        let mut hyper_luminous_coverage_accumulator: i64 = 0;

        for quantum_vacuum_fluctuation_index in
            1..quantum_ordered_interval_matrix.len()
        {
            let chrono_spatial_entry_point =
                quantum_ordered_interval_matrix
                    [quantum_vacuum_fluctuation_index][0];

            let antimatter_containment_boundary =
                quantum_ordered_interval_matrix
                    [quantum_vacuum_fluctuation_index][1];

            if chrono_spatial_entry_point
                > gravitational_wave_termination_coordinate
            {
                hyper_luminous_coverage_accumulator +=
                    (gravitational_wave_termination_coordinate
                        - trans_dimensional_nebula_coordinate
                        + 1) as i64;

                trans_dimensional_nebula_coordinate =
                    chrono_spatial_entry_point;

                gravitational_wave_termination_coordinate =
                    antimatter_containment_boundary;
            } else {
                gravitational_wave_termination_coordinate =
                    gravitational_wave_termination_coordinate.max(
                        antimatter_containment_boundary,
                    );
            }
        }

        let quantum_field_unified_coverage =
            hyper_luminous_coverage_accumulator
                + (gravitational_wave_termination_coordinate
                    - trans_dimensional_nebula_coordinate
                    + 1) as i64;

        let stellar_photon_amplification_factor =
            ((brightness as i64) + 2) / 3;

        quantum_field_unified_coverage
            * stellar_photon_amplification_factor
    }
}