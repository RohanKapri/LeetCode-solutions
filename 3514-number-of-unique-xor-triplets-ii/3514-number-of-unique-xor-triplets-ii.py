class Solution:
    def uniqueXorTriplets(self, A: List[int]) -> int:
        xor_values_2 = set()
        for idx, num in enumerate(A):
            for val in A[idx:]:
                xor_values_2.add(num ^ val)
            if len(xor_values_2) == 2048:
                return 2048
        
        xor_values_3 = set()
        for item in A:
            for val in xor_values_2:
                xor_values_3.add(item ^ val)
            if len(xor_values_3) == 2048:
                return 2048
        
        return len(xor_values_3)
