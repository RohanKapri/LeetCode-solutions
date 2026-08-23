class Solution:
    def sumGame(self, num: str) -> bool:
        length = len(num)
        sum_left = sum(int(c) for c in num[:length // 2] if c != "?")
        sum_right = sum(int(c) for c in num[length // 2:] if c != "?")
        count_left = num[:length // 2].count("?")
        count_right = num[length // 2:].count("?")
        
        min_count = min(count_left, count_right)
        count_left -= min_count
        count_right -= min_count

        if count_left and sum_left > sum_right:
            return True
        if count_right and sum_right > sum_left:
            return True
        total_count = count_left + count_right
        if total_count % 2 == 1:
            return True
        return 9 * total_count // 2 != abs(sum_right - sum_left)