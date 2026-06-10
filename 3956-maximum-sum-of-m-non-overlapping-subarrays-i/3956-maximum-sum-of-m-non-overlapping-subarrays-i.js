/**
 * @param {number[]} nums
 * @param {number} m
 * @param {number} l
 * @param {number} r
 * @return {number}
 */
var maximumSum = function(nums, m, l, r) {

    const unboundDP = (pre, n, l, r) => {
        const dp = Array(n + 1).fill(0);
        const dq = [];
        let ans = -1e18;

        for (let i = l; i <= n; i++) {
            const t = i - l;
            const cur = dp[t] - pre[t];

            while (dq.length &&
                   dp[dq[dq.length - 1]] - pre[dq[dq.length - 1]] <= cur) {
                dq.pop();
            }

            dq.push(t);

            while (dq.length && dq[0] < i - r) {
                dq.shift();
            }

            dp[i] = dp[i - 1];

            if (dq.length) {
                const v = pre[i] + dp[dq[0]] - pre[dq[0]];
                dp[i] = Math.max(dp[i], v);
                ans = Math.max(ans, v);
            }
        }

        return ans;
    };

    const n = nums.length;
    const pre = Array(n + 1).fill(0);

    for (let i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + nums[i];
    }

    const neg = -1e18;

    if (m >= Math.floor(n / l)) {
        return unboundDP(pre, n, l, r);
    }

    let prev = Array(n + 1).fill(0);
    let ans = neg;
    let last = neg;

    for (let k = 1; k <= m; k++) {

        const cur = Array(n + 1).fill(neg);
        const dq = [];

        for (let i = l; i <= n; i++) {
            const t = i - l;
            const val = prev[t] - pre[t];

            while (dq.length &&
                   prev[dq[dq.length - 1]] - pre[dq[dq.length - 1]] <= val) {
                dq.pop();
            }

            dq.push(t);

            while (dq.length && dq[0] < i - r) {
                dq.shift();
            }

            if (dq.length) {
                cur[i] = pre[i] + prev[dq[0]] - pre[dq[0]];
                ans = Math.max(ans, cur[i]);
            }
        }

        if (ans === last) break;

        last = ans;

        const best = Array(n + 1).fill(neg);

        for (let i = 1; i <= n; i++) {
            best[i] = Math.max(best[i - 1], cur[i]);
        }

        prev = best;
    }

    return ans;
};