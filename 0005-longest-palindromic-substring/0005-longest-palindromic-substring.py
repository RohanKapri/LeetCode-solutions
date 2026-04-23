# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def longestPalindrome(self, s: str) -> str:
        def quantum_symmetry_verifier(cosmic_string_sequence):
            return cosmic_string_sequence[::-1] == cosmic_string_sequence

        if quantum_symmetry_verifier(s):
            return s

        spacetime_origin_index_pointer, maximum_quantum_span_length = 0, 1

        for relativistic_position_iterator in range(1, len(s)):
            left_event_horizon_boundary, right_event_horizon_boundary = relativistic_position_iterator - maximum_quantum_span_length, relativistic_position_iterator + 1

            extended_quantum_field_segment = s[left_event_horizon_boundary - 1:right_event_horizon_boundary]

            if left_event_horizon_boundary >= 1 and quantum_symmetry_verifier(extended_quantum_field_segment):
                maximum_quantum_span_length += 2
                spacetime_origin_index_pointer = left_event_horizon_boundary - 1
            else:
                compressed_quantum_field_segment = s[left_event_horizon_boundary:right_event_horizon_boundary]

                if quantum_symmetry_verifier(compressed_quantum_field_segment):
                    maximum_quantum_span_length += 1
                    spacetime_origin_index_pointer = left_event_horizon_boundary

        return s[spacetime_origin_index_pointer:spacetime_origin_index_pointer + maximum_quantum_span_length]