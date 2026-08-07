def generate_number(req, length):
    result = []
    for d in range(9, 1, -1):
        while req % d == 0:
            result.append(d)
            req //= d
    
    result.extend([1] * max(0, length - len(result)))
    return "".join(map(str, reversed(result)))

class Solution:
    def smallestNumber(self, S: str, T: int) -> str:
        N = len(S)
        t = T
        for p in [2, 3, 5, 7]:
            while t % p == 0:
                t //= p
        if t != 1:
            return "-1"

        P = [T] * (N + 1)
        for i, x in enumerate(map(int, S)):
            if x == 0: break
            P[i + 1] = P[i] // gcd(P[i], x)
        if P[-1] == 1:
            return S

        zero_position = S.find("0") % N
        for i in range(zero_position, -1, -1):
            req = P[i]
            remaining_digits = N - 1 - i
            for d in range(int(S[i]) + 1, 10):
                suffix = generate_number(req // gcd(req, d), remaining_digits)
                if len(suffix) <= remaining_digits:
                    return S[:i] + str(d) + suffix

        return generate_number(T, len(S) + 1)