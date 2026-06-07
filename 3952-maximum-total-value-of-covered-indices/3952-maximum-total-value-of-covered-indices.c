long long maxTotal(int* nums, int numsSize, char* s) {
    long long neg = -1000000000000000000LL;

    long long dp0 = 0;
    long long dp1 = neg;

    for (int i = 0; i < numsSize; i++) {
        long long nxt0 = neg;
        long long nxt1 = neg;

        if (s[i] == '0') {
            nxt0 = (dp0 > dp1) ? dp0 : dp1;
        } else {
            long long best = (dp0 > dp1) ? dp0 : dp1;
            nxt1 = best + nums[i];

            if (i > 0) {
                nxt0 = dp0 + nums[i - 1];
            }
        }

        dp0 = nxt0;
        dp1 = nxt1;
    }

    return (dp0 > dp1) ? dp0 : dp1;
}