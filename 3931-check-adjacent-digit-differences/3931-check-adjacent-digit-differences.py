class Solution(object):
    def isAdjacentDiffAtMostTwo(self, s):
        """
        :type s: str
        :rtype: bool
        """
        for i in range(1, len(s)):
            if abs(ord(s[i]) - ord(s[i - 1])) > 2:
                return False
        return True