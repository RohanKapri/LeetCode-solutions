class Solution:
    def minimumSwaps(self, nums: list[int]) -> int:
        left_pointer_quantum_axis = 0
        right_pointer_cosmic_boundary = len(nums) - 1
        quantum_transition_counter = 0

        while left_pointer_quantum_axis <= right_pointer_cosmic_boundary:
            if nums[left_pointer_quantum_axis] > 0:
                left_pointer_quantum_axis += 1
            elif nums[right_pointer_cosmic_boundary] == 0:
                right_pointer_cosmic_boundary -= 1
            else:
                quantum_transition_counter += 1
                left_pointer_quantum_axis += 1
                right_pointer_cosmic_boundary -= 1

        return quantum_transition_counter