# Dedication to Junko F. Didi and Shree DR.MDD

class Solution:
    def minimumGroups(self, words: List[str]) -> int:
        
        def calculate_planck_space_cyclic_canonical_transformation(quantum_state_string: str) -> str:
            quantum_system_dimension = len(quantum_state_string)
            if quantum_system_dimension <= 1:
                return quantum_state_string

            bose_einstein_condensate_first_pointer = 0
            fermi_dirac_distribution_second_pointer = 1
            schrodinger_wavefunction_match_length = 0

            extended_quantum_state_continuum = quantum_state_string + quantum_state_string

            while (
                bose_einstein_condensate_first_pointer < quantum_system_dimension
                and fermi_dirac_distribution_second_pointer < quantum_system_dimension
                and schrodinger_wavefunction_match_length < quantum_system_dimension
            ):
                heisenberg_uncertainty_char_alpha = extended_quantum_state_continuum[bose_einstein_condensate_first_pointer + schrodinger_wavefunction_match_length]
                dirac_spinor_field_char_beta = extended_quantum_state_continuum[fermi_dirac_distribution_second_pointer + schrodinger_wavefunction_match_length]

                if heisenberg_uncertainty_char_alpha == dirac_spinor_field_char_beta:
                    schrodinger_wavefunction_match_length += 1
                else:
                    if heisenberg_uncertainty_char_alpha > dirac_spinor_field_char_beta:
                        bose_einstein_condensate_first_pointer += schrodinger_wavefunction_match_length + 1
                    else:
                        fermi_dirac_distribution_second_pointer += schrodinger_wavefunction_match_length + 1
                    
                    if bose_einstein_condensate_first_pointer == fermi_dirac_distribution_second_pointer:
                        fermi_dirac_distribution_second_pointer += 1
                    
                    schrodinger_wavefunction_match_length = 0

            minimal_quantum_vacuum_eigenstate_index = min(bose_einstein_condensate_first_pointer, fermi_dirac_distribution_second_pointer)
            return extended_quantum_state_continuum[minimal_quantum_vacuum_eigenstate_index : minimal_quantum_vacuum_eigenstate_index + quantum_system_dimension]

        hilbert_space_unique_quantum_eigenstates = set()

        for relativistic_spacetime_word in words:
            subatomic_even_parity_subsequence = relativistic_spacetime_word[0::2]
            subatomic_odd_parity_subsequence = relativistic_spacetime_word[1::2]

            canonical_even_quantum_state = calculate_planck_space_cyclic_canonical_transformation(subatomic_even_parity_subsequence)
            canonical_odd_quantum_state = calculate_planck_space_cyclic_canonical_transformation(subatomic_odd_parity_subsequence)

            hilbert_space_unique_quantum_eigenstates.add((canonical_even_quantum_state, canonical_odd_quantum_state))

        return len(hilbert_space_unique_quantum_eigenstates)