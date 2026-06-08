public class Solution {
    public int MaxScore(int[] nums, int maxVal) {
        int mx = maxVal;

        foreach (int x in nums) {
            if (x > mx) mx = x;
        }

        int[] freq = new int[mx + 1];
        foreach (int x in nums) {
            freq[x]++;
        }

        int[] spf = new int[mx + 1];
        for (int i = 0; i <= mx; i++) {
            spf[i] = i;
        }

        int[] mul = new int[mx + 1];

        for (int i = 2; i <= mx; i++) {
            if (spf[i] == i) {
                for (int j = i * 2; j <= mx; j += i) {
                    if (spf[j] == j) spf[j] = i;
                }
            }

            int cnt = 0;
            for (int j = i; j <= mx; j += i) {
                cnt += freq[j];
            }
            mul[i] = cnt;
        }

        int ans = freq[1] > 0 ? 1 : 0;

        for (int i = mx; i >= 2; i--) {
            if (i <= ans) break;

            if (freq[i] == 0 && i > maxVal) continue;

            int x = i;
            List<int> primes = new List<int>();

            while (x != 1) {
                int p = spf[x];
                primes.Add(p);

                while (x % p == 0) {
                    x /= p;
                }
            }

            int bad = -freq[i];
            int total = 1 << primes.Count;

            for (int mask = 1; mask < total; mask++) {
                int prod = 1;
                int bits = 0;

                for (int k = 0; k < primes.Count; k++) {
                    if (((mask >> k) & 1) != 0) {
                        prod *= primes[k];
                        bits++;
                    }
                }

                if ((bits & 1) != 0)
                    bad += mul[prod];
                else
                    bad -= mul[prod];
            }

            int cost = freq[i] > 0
                ? bad + freq[i] - 1
                : Math.Max(bad, 1);

            ans = Math.Max(ans, i - cost);
        }

        return ans;
    }
}