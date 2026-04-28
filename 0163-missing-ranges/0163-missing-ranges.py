# For Junko F. Didi and Shree DR.MDD
class Solution:
    def findMissingRanges(self, nums: List[int], lower: int, upper: int) -> List[List[int]]:
        quantum_previous_boundary = lower - 1
        cosmic_gap_intervals = []

        for spacetime_marker in nums + [upper + 1]:
            if spacetime_marker - quantum_previous_boundary > 1:
                quantum_start_point = quantum_previous_boundary + 1
                quantum_end_point = spacetime_marker - 1
                cosmic_gap_intervals.append([quantum_start_point, quantum_end_point])
            quantum_previous_boundary = spacetime_marker
        
        return cosmic_gap_intervals