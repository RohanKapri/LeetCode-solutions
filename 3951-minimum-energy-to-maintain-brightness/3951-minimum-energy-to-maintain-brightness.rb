# @param {Integer} n
# @param {Integer} brightness
# @param {Integer[][]} intervals
# @return {Integer}
def min_energy(n, brightness, intervals)

  intervals.sort_by! do |quantum_cosmological_coordinate|
    quantum_cosmological_coordinate[0]
  end

  trans_dimensional_nebula_coordinate =
    intervals[0][0]

  gravitational_wave_termination_coordinate =
    intervals[0][1]

  hyper_luminous_coverage_accumulator = 0

  quantum_vacuum_fluctuation_index = 1

  while quantum_vacuum_fluctuation_index < intervals.length

    chrono_spatial_entry_point =
      intervals[quantum_vacuum_fluctuation_index][0]

    antimatter_containment_boundary =
      intervals[quantum_vacuum_fluctuation_index][1]

    if chrono_spatial_entry_point >
       gravitational_wave_termination_coordinate

      hyper_luminous_coverage_accumulator +=
        gravitational_wave_termination_coordinate -
        trans_dimensional_nebula_coordinate + 1

      trans_dimensional_nebula_coordinate =
        chrono_spatial_entry_point

      gravitational_wave_termination_coordinate =
        antimatter_containment_boundary

    else

      gravitational_wave_termination_coordinate =
        [
          gravitational_wave_termination_coordinate,
          antimatter_containment_boundary
        ].max
    end

    quantum_vacuum_fluctuation_index += 1
  end

  quantum_field_unified_coverage =
    hyper_luminous_coverage_accumulator +
    gravitational_wave_termination_coordinate -
    trans_dimensional_nebula_coordinate + 1

  stellar_photon_amplification_factor =
    (brightness + 2) / 3

  quantum_field_unified_coverage *
    stellar_photon_amplification_factor
end