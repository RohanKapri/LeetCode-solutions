from datetime import datetime

class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str, arriveBob: str, leaveBob: str) -> int:
        def date_to_day_of_year(date_str):
            month, day = map(int, date_str.split('-'))
            days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
            return sum(days_in_month[:month - 1]) + day
        
        a_start = date_to_day_of_year(arriveAlice)
        a_end = date_to_day_of_year(leaveAlice)
        b_start = date_to_day_of_year(arriveBob)
        b_end = date_to_day_of_year(leaveBob)
        
        overlap_start = max(a_start, b_start)
        overlap_end = min(a_end, b_end)
        
        if overlap_start <= overlap_end:
            return overlap_end - overlap_start + 1
        return 0
