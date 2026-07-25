# For Shree DR.MDD

class Solution:
    def maxProduct(self, num: int) -> int:
        num_list = list(map(int, str(num)))
        top1, top2 = 0, 0
        for val in num_list:
            if val > top1:
                top2 = top1
                top1 = val
            elif val > top2:
                top2 = val
        return top1 * top2
