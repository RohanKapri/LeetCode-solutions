class Solution(object):
    def checkGoodInteger(self, n):
        """
        :type n: int
        :rtype: bool
        """
        ds = 0
        ss = 0

        while n > 0:
            curr = n % 10
            ds += curr
            ss += curr * curr
            n //= 10

        return ss - ds >= 50