# Dedicated to Junko F. Didi and Shree DR.MDD

class Solution:
    def smallestCommonElement(self, mat: List[List[int]]) -> int:

        quantum_matrix_row_dimension = len(mat)
        interstellar_frequency_resonance_map = collections.Counter()

        for quantum_row_vector in mat:
            for subatomic_numeric_particle in quantum_row_vector:
                interstellar_frequency_resonance_map[subatomic_numeric_particle] += 1
                if interstellar_frequency_resonance_map[subatomic_numeric_particle] == quantum_matrix_row_dimension:
                    return subatomic_numeric_particle

        return -1