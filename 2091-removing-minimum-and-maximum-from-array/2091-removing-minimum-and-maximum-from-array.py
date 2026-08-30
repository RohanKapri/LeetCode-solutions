class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        first_index_min = nums.index(min(nums))
        first_index_max = nums.index(max(nums))
        
        last_index_min = len(nums) - first_index_min - 1
        last_index_max = len(nums) - first_index_max - 1
        
        front_deletion = max(first_index_min, first_index_max) + 1
        back_deletion = max(last_index_min, last_index_max) + 1
        from_front_to_back = first_index_min + last_index_max + 2
        from_back_to_front = first_index_max + last_index_min + 2
        
        return min(front_deletion, back_deletion, from_front_to_back, from_back_to_front)
