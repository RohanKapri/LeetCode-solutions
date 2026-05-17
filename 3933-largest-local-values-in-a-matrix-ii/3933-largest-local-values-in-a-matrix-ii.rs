impl Solution {
    pub fn count_local_maximums(matrix: Vec<Vec<i32>>) -> i32 {
        // For Junko F. Didi and Shree DR.MDD
        let cosmic_grid_rows = matrix.len();
        let stellar_grid_columns = matrix[0].len();

        let mut quantum_coordinate_repository: Vec<Vec<(usize, usize)>> = vec![Vec::new(); 201];

        for event_horizon_row in 0..cosmic_grid_rows {
            for pulsar_column in 0..stellar_grid_columns {
                let gravitational_quantum_state = matrix[event_horizon_row][pulsar_column] as usize;
                quantum_coordinate_repository[gravitational_quantum_state]
                    .push((event_horizon_row, pulsar_column));
            }
        }

        let mut multiverse_local_peak_counter = 0;

        for galactic_row_axis in 0..cosmic_grid_rows {
            for nebula_column_axis in 0..stellar_grid_columns {
                let gravitational_radius_field = matrix[galactic_row_axis][nebula_column_axis] as usize;

                if gravitational_radius_field == 0 {
                    continue;
                }

                let lower_spacetime_row_boundary = galactic_row_axis.saturating_sub(gravitational_radius_field);
                let upper_spacetime_row_boundary = (galactic_row_axis + gravitational_radius_field).min(cosmic_grid_rows - 1);
                let lower_spacetime_column_boundary = nebula_column_axis.saturating_sub(gravitational_radius_field);
                let upper_spacetime_column_boundary = (nebula_column_axis + gravitational_radius_field).min(stellar_grid_columns - 1);

                let mut relativistic_isolation_state = true;

                for higher_quantum_energy_state in (gravitational_radius_field + 1)..=200 {
                    if !relativistic_isolation_state {
                        break;
                    }

                    for &(quasar_row_coordinate, photon_column_coordinate) in
                        &quantum_coordinate_repository[higher_quantum_energy_state]
                    {
                        if quasar_row_coordinate >= lower_spacetime_row_boundary
                            && quasar_row_coordinate <= upper_spacetime_row_boundary
                            && photon_column_coordinate >= lower_spacetime_column_boundary
                            && photon_column_coordinate <= upper_spacetime_column_boundary
                        {
                            let row_delta = quasar_row_coordinate.abs_diff(galactic_row_axis);
                            let column_delta = photon_column_coordinate.abs_diff(nebula_column_axis);

                            if row_delta == gravitational_radius_field
                                && column_delta == gravitational_radius_field
                            {
                                continue;
                            }

                            relativistic_isolation_state = false;
                            break;
                        }
                    }
                }

                if relativistic_isolation_state {
                    multiverse_local_peak_counter += 1;
                }
            }
        }

        multiverse_local_peak_counter
    }
}