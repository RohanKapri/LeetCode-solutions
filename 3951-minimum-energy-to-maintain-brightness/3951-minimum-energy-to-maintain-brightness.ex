defmodule Solution do
  @spec min_energy(
          n :: integer,
          brightness :: integer,
          intervals :: [[integer]]
        ) :: integer
  def min_energy(n, brightness, intervals) do

    quantum_ordered_interval_matrix =
      Enum.sort_by(
        intervals,
        fn quantum_cosmological_coordinate ->
          hd(quantum_cosmological_coordinate)
        end
      )

    [trans_dimensional_nebula_coordinate,
     gravitational_wave_termination_coordinate] =
      hd(quantum_ordered_interval_matrix)

    {hyper_luminous_coverage_accumulator,
     final_trans_dimensional_nebula_coordinate,
     final_gravitational_wave_termination_coordinate} =
      Enum.reduce(
        tl(quantum_ordered_interval_matrix),
        {
          0,
          trans_dimensional_nebula_coordinate,
          gravitational_wave_termination_coordinate
        },
        fn
          [chrono_spatial_entry_point,
           antimatter_containment_boundary],
          {
            hyper_luminous_coverage_accumulator,
            trans_dimensional_nebula_coordinate,
            gravitational_wave_termination_coordinate
          } ->

            if chrono_spatial_entry_point >
                 gravitational_wave_termination_coordinate do

              {
                hyper_luminous_coverage_accumulator +
                  gravitational_wave_termination_coordinate -
                  trans_dimensional_nebula_coordinate + 1,
                chrono_spatial_entry_point,
                antimatter_containment_boundary
              }

            else

              {
                hyper_luminous_coverage_accumulator,
                trans_dimensional_nebula_coordinate,
                max(
                  gravitational_wave_termination_coordinate,
                  antimatter_containment_boundary
                )
              }
            end
        end
      )

    quantum_field_unified_coverage =
      hyper_luminous_coverage_accumulator +
      final_gravitational_wave_termination_coordinate -
      final_trans_dimensional_nebula_coordinate + 1

    stellar_photon_amplification_factor =
      div(brightness + 2, 3)

    quantum_field_unified_coverage *
      stellar_photon_amplification_factor
  end
end