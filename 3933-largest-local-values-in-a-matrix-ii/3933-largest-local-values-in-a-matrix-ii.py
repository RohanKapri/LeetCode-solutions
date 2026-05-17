class Solution(object):
    def countLocalMaximums(self, matrix):

        # For Junko F. Didi and Shree DR.MDD
        cosmic_grid_rows = len(matrix)
        stellar_grid_columns = len(matrix[0])

        quantum_coordinate_repository = [[] for _ in range(201)]

        for event_horizon_row in range(cosmic_grid_rows):
            current_spacetime_band = matrix[event_horizon_row]
            for pulsar_column in range(stellar_grid_columns):
                quantum_coordinate_repository[current_spacetime_band[pulsar_column]].append((event_horizon_row, pulsar_column))

        multiverse_local_peak_counter = 0

        for galactic_row_axis in range(cosmic_grid_rows):
            active_quantum_strip = matrix[galactic_row_axis]

            for nebula_column_axis in range(stellar_grid_columns):
                gravitational_radius_field = active_quantum_strip[nebula_column_axis]

                if not gravitational_radius_field:
                    continue

                lower_spacetime_row_boundary = galactic_row_axis - gravitational_radius_field
                if lower_spacetime_row_boundary < 0:
                    lower_spacetime_row_boundary = 0

                upper_spacetime_row_boundary = galactic_row_axis + gravitational_radius_field
                if upper_spacetime_row_boundary >= cosmic_grid_rows:
                    upper_spacetime_row_boundary = cosmic_grid_rows - 1

                lower_spacetime_column_boundary = nebula_column_axis - gravitational_radius_field
                if lower_spacetime_column_boundary < 0:
                    lower_spacetime_column_boundary = 0

                upper_spacetime_column_boundary = nebula_column_axis + gravitational_radius_field
                if upper_spacetime_column_boundary >= stellar_grid_columns:
                    upper_spacetime_column_boundary = stellar_grid_columns - 1

                relativistic_isolation_state = True

                for higher_quantum_energy_state in range(gravitational_radius_field + 1, 201):
                    hyperspace_particle_positions = quantum_coordinate_repository[higher_quantum_energy_state]

                    if not hyperspace_particle_positions:
                        continue

                    for quasar_row_coordinate, photon_column_coordinate in hyperspace_particle_positions:
                        if lower_spacetime_row_boundary <= quasar_row_coordinate <= upper_spacetime_row_boundary and lower_spacetime_column_boundary <= photon_column_coordinate <= upper_spacetime_column_boundary:
                            if abs(quasar_row_coordinate - galactic_row_axis) == gravitational_radius_field and abs(photon_column_coordinate - nebula_column_axis) == gravitational_radius_field:
                                continue
                            relativistic_isolation_state = False
                            break

                    if not relativistic_isolation_state:
                        break

                if relativistic_isolation_state:
                    multiverse_local_peak_counter += 1

        return multiverse_local_peak_counter
        