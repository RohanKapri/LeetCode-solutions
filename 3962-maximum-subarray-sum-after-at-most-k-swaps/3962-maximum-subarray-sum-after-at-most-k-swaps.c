#include <stdlib.h>
#include <limits.h>

typedef struct {
    int *a;
    int sz;
} MaxHeap;

typedef struct {
    int *a;
    int sz;
} MinHeap;

void maxHeapPush(MaxHeap *h, int x) {
    int i = h->sz++;
    h->a[i] = x;

    while (i > 0) {
        int p = (i - 1) / 2;
        if (h->a[p] >= h->a[i]) break;

        int t = h->a[p];
        h->a[p] = h->a[i];
        h->a[i] = t;
        i = p;
    }
}

int maxHeapTop(MaxHeap *h) {
    return h->a[0];
}

void maxHeapReplace(MaxHeap *h, int x) {
    h->a[0] = x;
    int i = 0;

    while (1) {
        int l = 2 * i + 1, r = 2 * i + 2, mx = i;

        if (l < h->sz && h->a[l] > h->a[mx]) mx = l;
        if (r < h->sz && h->a[r] > h->a[mx]) mx = r;

        if (mx == i) break;

        int t = h->a[i];
        h->a[i] = h->a[mx];
        h->a[mx] = t;
        i = mx;
    }
}

void minHeapPush(MinHeap *h, int x) {
    int i = h->sz++;
    h->a[i] = x;

    while (i > 0) {
        int p = (i - 1) / 2;
        if (h->a[p] <= h->a[i]) break;

        int t = h->a[p];
        h->a[p] = h->a[i];
        h->a[i] = t;
        i = p;
    }
}

int minHeapTop(MinHeap *h) {
    return h->a[0];
}

void minHeapReplace(MinHeap *h, int x) {
    h->a[0] = x;
    int i = 0;

    while (1) {
        int l = 2 * i + 1, r = 2 * i + 2, mn = i;

        if (l < h->sz && h->a[l] < h->a[mn]) mn = l;
        if (r < h->sz && h->a[r] < h->a[mn]) mn = r;

        if (mn == i) break;

        int t = h->a[i];
        h->a[i] = h->a[mn];
        h->a[mn] = t;
        i = mn;
    }
}

long long maxSum(int* nums, int numsSize, int k) {

    int n = numsSize;

    long long ans = INT_MIN;

    if (k == 0 || n == 1) {
        long long sm = 0;

        for (int i = 0; i < n; i++) {
            sm += nums[i];
            if (sm > ans) ans = sm;
            if (sm < 0) sm = 0;
        }

        return ans;
    }

    int cnt = 0;
    long long cur = 0;
    long long *pref = (long long *)calloc(n + 1, sizeof(long long));

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0)
            cur += nums[i];
        else
            cnt++;

        pref[i + 1] = pref[i] + nums[i];

        if ((long long)nums[i] > ans)
            ans = nums[i];
    }

    if (cnt <= k) {
        free(pref);
        return cur;
    }

    long long **dp = (long long **)malloc(n * sizeof(long long *));
    for (int i = 0; i < n; i++)
        dp[i] = (long long *)calloc(n, sizeof(long long));

    for (int i = 0; i < n; i++) {
        MaxHeap pq;
        pq.a = (int *)malloc(k * sizeof(int));
        pq.sz = 0;

        long long sm = 0;

        for (int j = i; j < n; j++) {
            if (nums[j] >= 0) {
                dp[i][j] = sm;
                continue;
            }

            if (pq.sz < k) {
                maxHeapPush(&pq, nums[j]);
                sm += nums[j];
            } else if (maxHeapTop(&pq) > nums[j]) {
                sm -= maxHeapTop(&pq);
                maxHeapReplace(&pq, nums[j]);
                sm += nums[j];
            }
        }

        free(pq.a);
    }

    for (int i = 0; i < n; i++) {
        MinHeap pq;
        pq.a = (int *)malloc(k * sizeof(int));
        pq.sz = 0;

        long long sm = 0;

        for (int j = 0; j < i; j++) {
            if (nums[j] < 0)
                continue;

            if (pq.sz < k) {
                minHeapPush(&pq, nums[j]);
                sm += nums[j];
            } else if (minHeapTop(&pq) < nums[j]) {
                sm -= minHeapTop(&pq);
                minHeapReplace(&pq, nums[j]);
                sm += nums[j];
            }
        }

        for (int j = n - 1; j > i; j--) {
            long long curSum = pref[j + 1] - pref[i];
            curSum -= dp[i][j];
            curSum += sm;

            if (curSum > ans)
                ans = curSum;

            if (nums[j] < 0)
                continue;

            if (pq.sz < k) {
                minHeapPush(&pq, nums[j]);
                sm += nums[j];
            } else if (minHeapTop(&pq) < nums[j]) {
                sm -= minHeapTop(&pq);
                minHeapReplace(&pq, nums[j]);
                sm += nums[j];
            }

            if (pq.sz > 0 && sm > ans)
                ans = sm;
        }

        free(pq.a);
    }

    for (int i = 0; i < n; i++)
        free(dp[i]);

    free(dp);
    free(pref);

    return ans;
}