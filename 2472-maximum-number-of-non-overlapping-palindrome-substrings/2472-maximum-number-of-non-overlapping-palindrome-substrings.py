# class Solution:
#     def maxPalindromes(self, s: str, k: int) -> int:

#         def isPalindrome(candidate: str) -> bool:
#             left, right = 0, len(candidate) - 1
#             while left < right:
#                 if candidate[left] != candidate[right]:
#                     return False
                
#                 left += 1
#                 right -= 1
#             return True

#         dp = [0] * (len(s) + 1)

#         for i in range(1, len(dp)):
#             str_end_index = i
#             cnt = -math.inf

#             for j in range(i - k + 1, 0, -1):
#                 str_start_index = j - 1
#                 if isPalindrome(s[str_start_index:str_end_index]):
#                     cnt = max(cnt, dp[j - 1] + 1)
#                     break

#             dp[i] = max(dp[i - 1], cnt)

#         return dp[-1]
class Solution:
    def isPalindrome(self, l, r, s):
        while l < r:
            if s[l] != s[r]:
                return False
            l += 1
            r -= 1
        return True

    def maxPalindromes(self, s: str, k: int) -> int:
        n = len(s)
        count = 0
        i = 0

        while i < n:
            # check length k
            if i + k <= n and self.isPalindrome(i, i + k - 1, s):
                count += 1
                i += k

            # check length k + 1
            elif i + k + 1 <= n and self.isPalindrome(i, i + k, s):
                count += 1
                i += k + 1

            else:
                i += 1

        return count