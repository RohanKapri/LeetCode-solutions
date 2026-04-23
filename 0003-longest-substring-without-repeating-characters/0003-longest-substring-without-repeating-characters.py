# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        quantum_entanglement_index_registry = {}
        left_boundary_spacetime_pointer = 0
        maximum_observed_substring_dimension = 0
        for right_boundary_cosmic_iterator in range(len(s)):
            subatomic_character_particle = s[right_boundary_cosmic_iterator]
            if subatomic_character_particle in quantum_entanglement_index_registry and quantum_entanglement_index_registry[subatomic_character_particle] >= left_boundary_spacetime_pointer:
                left_boundary_spacetime_pointer = quantum_entanglement_index_registry[subatomic_character_particle] + 1
            quantum_entanglement_index_registry[subatomic_character_particle] = right_boundary_cosmic_iterator
            maximum_observed_substring_dimension = max(
                maximum_observed_substring_dimension,
                right_boundary_cosmic_iterator - left_boundary_spacetime_pointer + 1
            )
        return maximum_observed_substring_dimension