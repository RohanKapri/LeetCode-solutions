MAX = 10**5 + 1
smallestDivisor = [0]*(MAX+1)
for i in range(2, MAX):
    if smallestDivisor[i]: continue
    smallestDivisor[i] = i
    j = i
    while j <= MAX:
        if not smallestDivisor[j]:
            smallestDivisor[j] = i
        j += i

divisors = [set() for _ in range(MAX+1)]
divisors[1] = set([1])
for i in range(2, MAX):
    if smallestDivisor[i] == i:
        divisors[i] = set([1, i])
    else:
        sd = smallestDivisor[i]
        for j in divisors[i//sd]:
            divisors[i].add(j)
            divisors[i].add(j*sd)

class Solution:
    def gcdValues(self, nums: List[int], queries: List[int]) -> List[int]:
        # for each number find divisors
        # cycle over numbers as divisors, have a list of how many nums have given
        #.    divisor
        # keep track of how many GCDs at given x - start at the largest and go down. At each level make a note for smaller x, how many pairs to subtract

        ma = max(nums)
        cnts1 = [0]*(ma + 1)
        for num in nums:
            for d in divisors[num]:
                cnts1[d] += 1
        
        cnts2 = [0]*(ma + 1)
        used = [0]*(ma + 1)
        for i in range(ma,0,-1):
            current = (cnts1[i]*(cnts1[i]-1))//2
            cnts2[i] = current - used[i]
            if cnts2[i] > 0:
                for d in divisors[i]:
                    used[d] += cnts2[i]

        cs = list(accumulate(cnts2))
        ans = []
        for q in queries:
            idx = bisect_right(cs, q)
            ans.append(idx)
        
        return ans