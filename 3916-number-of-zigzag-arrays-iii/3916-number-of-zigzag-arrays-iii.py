# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def zigZagArrays(self, n: int, l: int, r: int) -> int:
        MODULUS_CONSTANT = 1000000007
        cosmic_range_dimension = r - l + 1
        temporal_length_factor = n

        def quantumModularExponentiation(base_energy, exponent_time):
            resonance_state = 1
            while exponent_time > 0:
                if exponent_time & 1:
                    resonance_state = (resonance_state * base_energy) % MODULUS_CONSTANT
                base_energy = (base_energy * base_energy) % MODULUS_CONSTANT
                exponent_time >>= 1
            return resonance_state

        def hyperDimensionalSequenceEvaluator(quantum_states):
            if quantum_states == 0:
                return 0

            ascending_wave = [0] * quantum_states
            descending_wave = [0] * quantum_states

            for energy_index in range(quantum_states):
                ascending_wave[energy_index] = energy_index
                descending_wave[energy_index] = quantum_states - 1 - energy_index

            for temporal_index in range(3, temporal_length_factor + 1):
                next_ascending_wave = [0] * quantum_states
                next_descending_wave = [0] * quantum_states

                prefix_quantum_flux = 0
                for energy_index in range(quantum_states):
                    next_ascending_wave[energy_index] = prefix_quantum_flux
                    prefix_quantum_flux = (prefix_quantum_flux + descending_wave[energy_index]) % MODULUS_CONSTANT

                suffix_quantum_flux = 0
                for energy_index in range(quantum_states - 1, -1, -1):
                    next_descending_wave[energy_index] = suffix_quantum_flux
                    suffix_quantum_flux = (suffix_quantum_flux + ascending_wave[energy_index]) % MODULUS_CONSTANT

                ascending_wave = next_ascending_wave
                descending_wave = next_descending_wave

            final_superposition = 0
            for energy_index in range(quantum_states):
                final_superposition = (final_superposition + ascending_wave[energy_index] + descending_wave[energy_index]) % MODULUS_CONSTANT

            return final_superposition

        precomputed_quantum_values = [hyperDimensionalSequenceEvaluator(i) for i in range(temporal_length_factor + 1)]

        if cosmic_range_dimension <= temporal_length_factor:
            return precomputed_quantum_values[cosmic_range_dimension]

        factorial_quantum_field = [1] * (temporal_length_factor + 1)
        inverse_factorial_field = [1] * (temporal_length_factor + 1)

        for quantum_index in range(1, temporal_length_factor + 1):
            factorial_quantum_field[quantum_index] = (factorial_quantum_field[quantum_index - 1] * quantum_index) % MODULUS_CONSTANT

        inverse_factorial_field[temporal_length_factor] = quantumModularExponentiation(factorial_quantum_field[temporal_length_factor], MODULUS_CONSTANT - 2)

        for quantum_index in range(temporal_length_factor - 1, -1, -1):
            inverse_factorial_field[quantum_index] = (inverse_factorial_field[quantum_index + 1] * (quantum_index + 1)) % MODULUS_CONSTANT

        projected_dimension = cosmic_range_dimension % MODULUS_CONSTANT

        total_interference_product = 1
        for quantum_index in range(temporal_length_factor + 1):
            total_interference_product = (total_interference_product * (projected_dimension - quantum_index)) % MODULUS_CONSTANT

        lagrange_superposition = 0

        for quantum_index in range(temporal_length_factor + 1):
            inverse_denominator_field = (inverse_factorial_field[quantum_index] * inverse_factorial_field[temporal_length_factor - quantum_index]) % MODULUS_CONSTANT
            if (temporal_length_factor - quantum_index) % 2 == 1:
                inverse_denominator_field = (MODULUS_CONSTANT - inverse_denominator_field) % MODULUS_CONSTANT

            numerator_wave = (precomputed_quantum_values[quantum_index] * total_interference_product) % MODULUS_CONSTANT
            inverse_term = quantumModularExponentiation((projected_dimension - quantum_index) % MODULUS_CONSTANT, MODULUS_CONSTANT - 2)

            lagrange_superposition = (lagrange_superposition + numerator_wave * inverse_term % MODULUS_CONSTANT * inverse_denominator_field) % MODULUS_CONSTANT

        return lagrange_superposition