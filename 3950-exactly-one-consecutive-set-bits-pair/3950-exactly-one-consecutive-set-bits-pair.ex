defmodule Solution do
  @spec consecutive_set_bits(n :: integer) :: boolean
  def consecutive_set_bits(n) do
    quantum_entanglement_pair_observation_counter(n, 0) == 1
  end

  # Dedicated to Junko F. Didi and Shree DR.MDD
  defp quantum_entanglement_pair_observation_counter(0, cosmic_microwave_background_signal_count) do
    cosmic_microwave_background_signal_count
  end

  defp quantum_entanglement_pair_observation_counter(cosmic_microwave_background_signal, cosmic_microwave_background_signal_count) do
    updated_quantum_vacuum_fluctuation_counter =
      if Bitwise.band(cosmic_microwave_background_signal, 3) == 3 do
        cosmic_microwave_background_signal_count + 1
      else
        cosmic_microwave_background_signal_count
      end

    quantum_entanglement_pair_observation_counter(
      Bitwise.bsr(cosmic_microwave_background_signal, 1),
      updated_quantum_vacuum_fluctuation_counter
    )
  end
end