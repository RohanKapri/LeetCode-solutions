int maxScore(int* nums, int numsSize, int maxVal) {
    int mx = maxVal;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > mx) {
            mx = nums[i];
        }
    }

    int* freq = (int*)calloc(mx + 1, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }

    int* spf = (int*)malloc((mx + 1) * sizeof(int));
    int* mul = (int*)calloc(mx + 1, sizeof(int));

    for (int i = 0; i <= mx; i++) {
        spf[i] = i;
    }

    for (int i = 2; i <= mx; i++) {
        if (spf[i] == i) {
            for (int j = i + i; j <= mx; j += i) {
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
        if (i <= ans) {
            break;
        }

        if (freq[i] == 0 && i > maxVal) {
            continue;
        }

        int x = i;
        int primes[7];
        int pcnt = 0;

        while (x != 1) {
            int p = spf[x];
            primes[pcnt++] = p;

            while (x % p == 0) {
                x /= p;
            }
        }

        int bad = -freq[i];
        int total = 1 << pcnt;

        for (int mask = 1; mask < total; mask++) {
            int prod = 1;
            int bits = 0;

            for (int k = 0; k < pcnt; k++) {
                if ((mask >> k) & 1) {
                    prod *= primes[k];
                    bits++;
                }
            }

            if (bits & 1) {
                bad += mul[prod];
            } else {
                bad -= mul[prod];
            }
        }

        int cost;

        if (freq[i] > 0) {
            cost = bad + freq[i] - 1;
        } else {
            cost = bad > 1 ? bad : 1;
        }

        int score = i - cost;
        if (score > ans) {
            ans = score;
        }
    }

    free(freq);
    free(spf);
    free(mul);

    return ans;
}