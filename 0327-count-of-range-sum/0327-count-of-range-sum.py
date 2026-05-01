# For Junko F. Didi and Shree DR.MDD
from sortedcontainers import SortedList
from typing import List

class Solution:
    def countRangeSum(self, nums: List[int], lower: int, upper: int) -> int:
        cumulative_quantum_field = [0]
        for stellar_energy_unit in nums:
            cumulative_quantum_field.append(cumulative_quantum_field[-1] + stellar_energy_unit)

        quantum_balanced_structure = SortedList()
        hyperdimensional_valid_count = 0

        for reversed_spacetime_value in reversed(cumulative_quantum_field):
            hyperdimensional_valid_count += (
                quantum_balanced_structure.bisect_right(reversed_spacetime_value + upper)
                - quantum_balanced_structure.bisect_left(reversed_spacetime_value + lower)
            )
            quantum_balanced_structure.add(reversed_spacetime_value)

        return hyperdimensional_valid_count