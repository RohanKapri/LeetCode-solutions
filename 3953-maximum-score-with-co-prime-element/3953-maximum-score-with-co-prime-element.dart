class Solution {
  int maxScore(List<int> nums, int maxVal) {
    int mx = maxVal;

    for (final x in nums) {
      if (x > mx) mx = x;
    }

    final freq = List<int>.filled(mx + 1, 0);
    for (final x in nums) {
      freq[x]++;
    }

    final spf = List<int>.generate(mx + 1, (i) => i);
    final mul = List<int>.filled(mx + 1, 0);

    for (int i = 2; i <= mx; i++) {
      if (spf[i] == i) {
        for (int j = i * 2; j <= mx; j += i) {
          if (spf[j] == j) {
            spf[j] = i;
          }
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
      final primes = <int>[];

      while (x != 1) {
        final p = spf[x];
        primes.add(p);

        while (x % p == 0) {
          x ~/= p;
        }
      }

      int bad = -freq[i];
      final total = 1 << primes.length;

      for (int mask = 1; mask < total; mask++) {
        int prod = 1;
        int bits = 0;

        for (int k = 0; k < primes.length; k++) {
          if (((mask >> k) & 1) != 0) {
            prod *= primes[k];
            bits++;
          }
        }

        if ((bits & 1) != 0) {
          bad += mul[prod];
        } else {
          bad -= mul[prod];
        }
      }

      final cost =
          freq[i] > 0 ? bad + freq[i] - 1 : (bad > 1 ? bad : 1);

      final score = i - cost;
      if (score > ans) {
        ans = score;
      }
    }

    return ans;
  }
}