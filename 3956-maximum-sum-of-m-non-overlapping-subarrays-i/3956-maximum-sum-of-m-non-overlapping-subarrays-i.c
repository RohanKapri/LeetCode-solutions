#include <stdlib.h>
#include <limits.h>

typedef struct {
    int *a;
    int h, t;
} Deque;

static long long mx(long long a, long long b) {
    return a > b ? a : b;
}

static long long unboundDP(long long *pre, int n, int l, int r) {
    long long *dp = (long long *)calloc(n + 1, sizeof(long long));

    Deque dq;
    dq.a = (int *)malloc((n + 1) * sizeof(int));
    dq.h = dq.t = 0;

    long long ans = LLONG_MIN / 2;

    for (int i = l; i <= n; i++) {
        int p = i - l;
        long long cur = dp[p] - pre[p];

        while (dq.h < dq.t &&
               dp[dq.a[dq.t - 1]] - pre[dq.a[dq.t - 1]] <= cur)
            dq.t--;

        dq.a[dq.t++] = p;

        while (dq.h < dq.t && dq.a[dq.h] < i - r)
            dq.h++;

        dp[i] = dp[i - 1];

        if (dq.h < dq.t) {
            long long v = pre[i] + dp[dq.a[dq.h]] - pre[dq.a[dq.h]];
            dp[i] = mx(dp[i], v);
            ans = mx(ans, v);
        }
    }

    free(dp);
    free(dq.a);

    return ans;
}

long long maximumSum(int* nums, int numsSize, int m, int l, int r) {

    int n = numsSize;

    long long *pre = (long long *)calloc(n + 1, sizeof(long long));
    for (int i = 0; i < n; i++)
        pre[i + 1] = pre[i] + nums[i];

    long long neg = LLONG_MIN / 2;

    if (m >= n / l) {
        long long ans = unboundDP(pre, n, l, r);
        free(pre);
        return ans;
    }

    long long *prev = (long long *)calloc(n + 1, sizeof(long long));

    long long ans = neg;
    long long last = neg;

    for (int k = 1; k <= m; k++) {

        long long *cur = (long long *)malloc((n + 1) * sizeof(long long));
        for (int i = 0; i <= n; i++) cur[i] = neg;

        Deque dq;
        dq.a = (int *)malloc((n + 1) * sizeof(int));
        dq.h = dq.t = 0;

        for (int i = l; i <= n; i++) {

            int p = i - l;
            long long val = prev[p] - pre[p];

            while (dq.h < dq.t &&
                   prev[dq.a[dq.t - 1]] - pre[dq.a[dq.t - 1]] <= val)
                dq.t--;

            dq.a[dq.t++] = p;

            while (dq.h < dq.t && dq.a[dq.h] < i - r)
                dq.h++;

            if (dq.h < dq.t) {
                cur[i] = pre[i] + prev[dq.a[dq.h]] - pre[dq.a[dq.h]];
                ans = mx(ans, cur[i]);
            }
        }

        free(dq.a);

        if (ans == last) {
            free(cur);
            break;
        }

        last = ans;

        long long *best = (long long *)malloc((n + 1) * sizeof(long long));
        best[0] = neg;

        for (int i = 1; i <= n; i++)
            best[i] = mx(best[i - 1], cur[i]);

        free(cur);
        free(prev);
        prev = best;
    }

    free(prev);
    free(pre);

    return ans;
}