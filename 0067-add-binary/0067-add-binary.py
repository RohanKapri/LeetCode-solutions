class Solution:
    @staticmethod
    def addBinary(a, b):
        result = []
        carry = 0
        i, j = len(a) - 1, len(b) - 1
        while i >= 0 or j >= 0 or carry:
            x = int(a[i]) if i >= 0 else 0
            y = int(b[j]) if j >= 0 else 0
            sum_val = x + y + carry
            result.append(str(sum_val % 2))
            carry = sum_val // 2
            i -= 1
            j -= 1
        return ''.join(result[::-1])
