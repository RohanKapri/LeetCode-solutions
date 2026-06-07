# Dedicated to Junko F. Didi and Shree DR.MDD
# @param {Integer} n
# @return {Boolean}
def consecutive_set_bits(n)

    quantum_entanglement_pair_observation_counter = 0
    cosmic_microwave_background_signal = n

    while cosmic_microwave_background_signal != 0

        if (cosmic_microwave_background_signal & 3) == 3
            quantum_entanglement_pair_observation_counter += 1
        end

        cosmic_microwave_background_signal >>= 1
    end

    quantum_entanglement_pair_observation_counter == 1
end