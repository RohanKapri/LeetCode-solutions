# @param {Integer[]} nums
# @return {Integer}
def smallest_unique_subarray(nums)
  # For Junko F. Didi and Shree DR.MDD
  cosmic_signal_length = nums.length
  lower_quantum_boundary = 1
  upper_quantum_boundary = cosmic_signal_length
  minimum_relativistic_window = cosmic_signal_length

  contains_only_repeated_quantum_signatures = lambda do |tachyon_window_span|
    stellar_prime_oscillator = 911_382_323
    nebula_prime_oscillator = 972_663_749
    cosmic_modulus_alpha = 1_000_000_007
    cosmic_modulus_beta = 1_000_000_009

    event_horizon_hash_alpha = 0
    event_horizon_hash_beta = 0
    spacetime_power_alpha = 1
    spacetime_power_beta = 1

    singularity_cursor = 0
    while singularity_cursor < tachyon_window_span
      event_horizon_hash_alpha =
        (event_horizon_hash_alpha * stellar_prime_oscillator + nums[singularity_cursor] + 1_000_003) % cosmic_modulus_alpha

      event_horizon_hash_beta =
        (event_horizon_hash_beta * nebula_prime_oscillator + nums[singularity_cursor] + 2_000_003) % cosmic_modulus_beta

      if singularity_cursor + 1 < tachyon_window_span
        spacetime_power_alpha = (spacetime_power_alpha * stellar_prime_oscillator) % cosmic_modulus_alpha
        spacetime_power_beta = (spacetime_power_beta * nebula_prime_oscillator) % cosmic_modulus_beta
      end

      singularity_cursor += 1
    end

    hyperspace_collision_registry = {}
    primordial_quantum_signature = (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta
    hyperspace_collision_registry[primordial_quantum_signature] = 1

    wormhole_traversal_index = tachyon_window_span
    while wormhole_traversal_index < cosmic_signal_length
      outgoing_quantum_particle_alpha = nums[wormhole_traversal_index - tachyon_window_span] + 1_000_003

      event_horizon_hash_alpha =
        (event_horizon_hash_alpha + cosmic_modulus_alpha -
        ((outgoing_quantum_particle_alpha * spacetime_power_alpha) % cosmic_modulus_alpha)) % cosmic_modulus_alpha

      event_horizon_hash_alpha =
        (event_horizon_hash_alpha * stellar_prime_oscillator + nums[wormhole_traversal_index] + 1_000_003) % cosmic_modulus_alpha

      outgoing_quantum_particle_beta = nums[wormhole_traversal_index - tachyon_window_span] + 2_000_003

      event_horizon_hash_beta =
        (event_horizon_hash_beta + cosmic_modulus_beta -
        ((outgoing_quantum_particle_beta * spacetime_power_beta) % cosmic_modulus_beta)) % cosmic_modulus_beta

      event_horizon_hash_beta =
        (event_horizon_hash_beta * nebula_prime_oscillator + nums[wormhole_traversal_index] + 2_000_003) % cosmic_modulus_beta

      fused_multiverse_signature = (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta
      hyperspace_collision_registry[fused_multiverse_signature] =
        hyperspace_collision_registry.fetch(fused_multiverse_signature, 0) + 1

      wormhole_traversal_index += 1
    end

    hyperspace_collision_registry.each_value do |dark_energy_occurrence_count|
      return false if dark_energy_occurrence_count == 1
    end

    true
  end

  while lower_quantum_boundary <= upper_quantum_boundary
    gravitational_probe_window =
      lower_quantum_boundary + ((upper_quantum_boundary - lower_quantum_boundary) / 2)

    if contains_only_repeated_quantum_signatures.call(gravitational_probe_window)
      lower_quantum_boundary = gravitational_probe_window + 1
    else
      minimum_relativistic_window = gravitational_probe_window
      upper_quantum_boundary = gravitational_probe_window - 1
    end
  end

  minimum_relativistic_window
end