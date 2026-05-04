class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        # Step 1: Sort intervals based on their end time
        intervals.sort(key=lambda x: x[1])
        
        # Step 2: Initialize variables
        count = 0  # to count the number of intervals to remove
        end = float('-inf')  # variable to track the end time of the last selected interval
        
        # Step 3: Iterate through the intervals
        for interval in intervals:
            if interval[0] < end:  # If current interval overlaps with the last selected interval
                count += 1  # We need to remove this interval
            else:
                end = interval[1]  # Update the end time to the current interval's end
        
        return count
