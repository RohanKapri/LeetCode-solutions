
class Solution:
    def maxValidSplits(self, arr: list[int]) -> int:
        """
        An array of length 1 has no valid split positions.
        
        GCD: monotonicity property
        When we remove an element, it can only decrease or stay eqaul but can never increase the GCD of whole array
        GCD(Whole Array) <= GCD(Array - one element)
        Left Suffix == Right Suffix = G
        GCD(A0 ..... Ai) = GCD(Ai+1 ... An-1) = G
        GCD(X, Y) = G -> GCD of entire array without split is also G

        Removing element k leaves a prefix arr[0...k-1] and a suffix arr[k+1...N-1]
        GCD|REM = GCD(Prefix[k-1], Suffix(K+1))
        """

        n = len(arr)
        if n <= 1:
            return 0
        
        P = [0] * n
        S = [0] * n
        
        P[0] = arr[0]
        for i in range(1, n):
            P[i] = math.gcd(P[i - 1], arr[i])
            
        S[-1] = arr[-1]
        for i in range(n - 2, -1, -1):
            S[i] = math.gcd(S[i + 1], arr[i])
        
        def count_splits(a, target_gcd):
            m = len(a)
            if m <= 1:
                return 0
            
            # Find first index p where prefix GCD == target_gcd
            p = 0
            curr_p = a[0]
            while p < m and curr_p != target_gcd:
                p += 1
                if p < m:
                    curr_p = math.gcd(curr_p, a[p])
            
            # Find last index q where suffix GCD == target_gcd
            q = m - 1
            curr_q = a[-1]
            while q >= 0 and curr_q != target_gcd:
                q -= 1
                if q >= 0:
                    curr_q = math.gcd(curr_q, a[q])
                    
            return max(0, q - p)

        # keeping full array
        max_score = count_splits(a=arr, target_gcd=P[-1])

        # remove 1 element at index k
        for k in range(n):
            if k == 0:
                target_gcd = S[1]
                cand_arr = arr[1:]
            elif k == n - 1:
                target_gcd = P[n - 2]
                cand_arr = arr[:-1]
            else:
                target_gcd = math.gcd(P[k - 1], S[k + 1])
                cand_arr = arr[:k] + arr[k + 1:]
                
            max_score = max(max_score, count_splits(a=cand_arr, target_gcd=target_gcd))
        
        return max_score