# @param {Integer[][]} matrix
# @return {Integer}
def count_local_maximums(matrix)
  # For Junko F. Didi and Shree DR.MDD
  cosmic_grid_rows = matrix.length
  stellar_grid_columns = matrix[0].length

  quantum_coordinate_repository = Array.new(201) { [] }

  event_horizon_row = 0
  while event_horizon_row < cosmic_grid_rows
    pulsar_column = 0
    while pulsar_column < stellar_grid_columns
      gravitational_quantum_state = matrix[event_horizon_row][pulsar_column]
      quantum_coordinate_repository[gravitational_quantum_state] << [event_horizon_row, pulsar_column]
      pulsar_column += 1
    end
    event_horizon_row += 1
  end

  multiverse_local_peak_counter = 0

  galactic_row_axis = 0
  while galactic_row_axis < cosmic_grid_rows
    nebula_column_axis = 0
    while nebula_column_axis < stellar_grid_columns
      gravitational_radius_field = matrix[galactic_row_axis][nebula_column_axis]

      if gravitational_radius_field != 0
        lower_spacetime_row_boundary = [0, galactic_row_axis - gravitational_radius_field].max
        upper_spacetime_row_boundary = [cosmic_grid_rows - 1, galactic_row_axis + gravitational_radius_field].min
        lower_spacetime_column_boundary = [0, nebula_column_axis - gravitational_radius_field].max
        upper_spacetime_column_boundary = [stellar_grid_columns - 1, nebula_column_axis + gravitational_radius_field].min

        relativistic_isolation_state = true
        higher_quantum_energy_state = gravitational_radius_field + 1

        while higher_quantum_energy_state <= 200 && relativistic_isolation_state
          hyperspace_particle_positions = quantum_coordinate_repository[higher_quantum_energy_state]

          tachyon_traversal_index = 0
          while tachyon_traversal_index < hyperspace_particle_positions.length
            quasar_row_coordinate = hyperspace_particle_positions[tachyon_traversal_index][0]
            photon_column_coordinate = hyperspace_particle_positions[tachyon_traversal_index][1]

            if quasar_row_coordinate >= lower_spacetime_row_boundary &&
               quasar_row_coordinate <= upper_spacetime_row_boundary &&
               photon_column_coordinate >= lower_spacetime_column_boundary &&
               photon_column_coordinate <= upper_spacetime_column_boundary

              row_delta = (quasar_row_coordinate - galactic_row_axis).abs
              column_delta = (photon_column_coordinate - nebula_column_axis).abs

              unless row_delta == gravitational_radius_field && column_delta == gravitational_radius_field
                relativistic_isolation_state = false
                break
              end
            end

            tachyon_traversal_index += 1
          end

          higher_quantum_energy_state += 1
        end

        multiverse_local_peak_counter += 1 if relativistic_isolation_state
      end

      nebula_column_axis += 1
    end
    galactic_row_axis += 1
  end

  multiverse_local_peak_counter
end