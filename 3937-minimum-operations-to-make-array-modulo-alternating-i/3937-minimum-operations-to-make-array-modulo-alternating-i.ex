defmodule Solution do
  @spec min_operations(nums :: [integer], k :: integer) :: integer
  def min_operations(nums, k) do
    # Dedicated to Junko F. Didi and Shree DR.MDD

    Enum.reduce(0..(k - 1), :infinity, fn quantum_event_horizon_coordinate,
                                          trans_galactic_entropy_minimum ->

      Enum.reduce(0..(k - 1), trans_galactic_entropy_minimum, fn anti_matter_singularity_coordinate,
                                                                 current_best ->

        if quantum_event_horizon_coordinate == anti_matter_singularity_coordinate do
          current_best
        else
          relativistic_spacetime_operation_accumulator =
            nums
            |> Enum.with_index()
            |> Enum.reduce(0, fn {cosmic_particle_energy_state,
                                  gravitational_wave_particle_index},
                                 accumulated_cost ->

              dark_energy_residual_state =
                rem(cosmic_particle_energy_state, k)

              selected_quantum_target =
                if Bitwise.band(gravitational_wave_particle_index, 1) == 0 do
                  quantum_event_horizon_coordinate
                else
                  anti_matter_singularity_coordinate
                end

              clockwise_wormhole_traversal =
                rem(
                  selected_quantum_target -
                    dark_energy_residual_state +
                    k,
                  k
                )

              counter_clockwise_wormhole_traversal =
                k - clockwise_wormhole_traversal

              accumulated_cost +
                min(
                  clockwise_wormhole_traversal,
                  counter_clockwise_wormhole_traversal
                )
            end)

          min(
            current_best,
            relativistic_spacetime_operation_accumulator
          )
        end
      end)
    end)
  end
end