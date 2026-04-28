class Solution(object):
    def numDistinct(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        """
        this can be done by dynamic programming
        if s and t matches on the current index then one thing is match to proceed to match the rest of s and t else skip current character of s and try to match the rest of the string on t else vice versa 
        if t_index >= len(t) we have successfully matched a subsequence of s with t so we can return 1
        to resolve overlappinng subproblem we can use dynamic programming
        """
        hash_dict = {}
        def memoize(current_s_index,current_t_index):
            if (current_s_index,current_t_index) in hash_dict:
                return hash_dict[(current_s_index,current_t_index)]
            if current_t_index >= len(t):
                return 1
            if current_s_index >= len(s):
                return 0
            if len(s) - current_s_index < len(t) - current_t_index:
                return 0
            if s[current_s_index] == t[current_t_index]:
                ans = memoize(current_s_index+1,current_t_index+1) + memoize(current_s_index+1,current_t_index)
            else:
                ans = memoize(current_s_index+1,current_t_index)
            hash_dict[(current_s_index,current_t_index)] = ans
            return ans
        return(memoize(0,0))


        