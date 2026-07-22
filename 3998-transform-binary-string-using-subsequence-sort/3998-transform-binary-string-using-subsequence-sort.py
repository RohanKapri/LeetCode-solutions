# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def transformStr(self, s: str, strs: List[str]) -> List[bool]:
        n = len(s)
        
        # 1. Prefix count of '1's in string s
        ones_prefix = [0] * n
        count_ones = 0
        for i in range(n):
            if s[i] == "1":
                count_ones += 1
            ones_prefix[i] = count_ones
                
        # 2. Suffix count of '0's in string s
        zeros_suffix = [0] * n
        count_zeros = 0
        for i in range(n - 1, -1, -1):
            if s[i] == "0":
                count_zeros += 1
            zeros_suffix[i] = count_zeros
                 
        # 3. Check har string ke liye in `strs`
        result = []
        for word in strs:
            cur_ones = 0
            cur_zeros = 0
            invalid = False
            
            # Left to right: check '1's
            for i in range(len(word)):
                if word[i] == "1":
                    cur_ones += 1
                    if cur_ones > ones_prefix[i]:
                        result.append(False)
                        invalid = True
                        break

            if invalid:
                continue
            
            # Right to left: check '0's
            for i in range(len(word) - 1, -1, -1):
                if word[i] == "0":
                    cur_zeros += 1
                    if cur_zeros > zeros_suffix[i]:
                        result.append(False)
                        invalid = True
                        break
                        
            if not invalid:
                result.append(True) 
                    
        return result