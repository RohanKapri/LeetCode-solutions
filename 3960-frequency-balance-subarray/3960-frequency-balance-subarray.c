int getLength(int* nums, int numsSize) {
    int n = numsSize, ans = 0;

    int *vals = (int*)malloc(n * sizeof(int));
    int idx = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < idx; j++)
            if (vals[j] == nums[i]) break;

        if (j == idx)
            vals[idx++] = nums[i];

        nums[i] = j;
    }

    for (int i = 0; i + ans < n; i++) {
        int len = (n - i + 1 < n - idx + 2) ? n - i + 1 : n - idx + 2;
        int *freq = (int*)calloc(idx, sizeof(int));
        int *freqFreq = (int*)calloc(len, sizeof(int));

        int numCount = 0, freqCount = 0;

        for (int j = i; j < n; j++) {
            int val = ++freq[nums[j]];

            if (val == 1) numCount++;

            if (freqFreq[val]++ == 0) freqCount++;
            if (val != 1 && --freqFreq[val - 1] == 0) freqCount--;

            if (ans > j - i + 1) continue;

            if (
                numCount == 1 ||
                (
                    freqCount == 2 &&
                    (
                        ((val & 1) == 0 && freqFreq[val >> 1] != 0) ||
                        ((val << 1) < len && freqFreq[val << 1] != 0)
                    )
                )
            ) {
                ans = j - i + 1;
            }
        }

        free(freq);
        free(freqFreq);
    }

    free(vals);
    return ans;
}