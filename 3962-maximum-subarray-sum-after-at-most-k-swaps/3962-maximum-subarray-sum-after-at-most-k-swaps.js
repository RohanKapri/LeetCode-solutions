var maxSum = function(nums, k) {
    const n = nums.length;

    let ans = -2147483648;

    if (k === 0 || n === 1) {
        let sm = 0;
        for (const num of nums) {
            sm += num;
            ans = Math.max(ans, sm);
            if (sm < 0) sm = 0;
        }
        return ans;
    }

    let cnt = 0;
    let cur = 0;
    const pref = new Array(n + 1).fill(0);

    for (let i = 0; i < n; i++) {
        if (nums[i] >= 0) cur += nums[i];
        else cnt++;

        pref[i + 1] = pref[i] + nums[i];
        ans = Math.max(ans, nums[i]);
    }

    if (cnt <= k) return cur;

    const dp = Array.from({ length: n }, () => Array(n).fill(0));

    for (let i = 0; i < n; i++) {
        const pq = [];
        let sm = 0;

        for (let j = i; j < n; j++) {
            if (nums[j] >= 0) {
                dp[i][j] = sm;
                continue;
            }

            if (pq.length < k) {
                pq.push(nums[j]);
                pq.sort((a, b) => b - a);
                sm += nums[j];
            } else if (pq[0] > nums[j]) {
                sm -= pq[0];
                pq[0] = nums[j];
                pq.sort((a, b) => b - a);
                sm += nums[j];
            }
        }
    }

    for (let i = 0; i < n; i++) {
        const pqmax = [];
        let sm = 0;

        for (let j = 0; j < i; j++) {
            if (nums[j] < 0) continue;

            if (pqmax.length < k) {
                pqmax.push(nums[j]);
                pqmax.sort((a, b) => a - b);
                sm += nums[j];
            } else if (pqmax[0] < nums[j]) {
                sm -= pqmax[0];
                pqmax[0] = nums[j];
                pqmax.sort((a, b) => a - b);
                sm += nums[j];
            }
        }

        for (let j = n - 1; j > i; j--) {
            let cur = pref[j + 1] - pref[i];
            cur -= dp[i][j];
            cur += sm;

            ans = Math.max(ans, cur);

            if (nums[j] < 0) continue;

            if (pqmax.length < k) {
                pqmax.push(nums[j]);
                pqmax.sort((a, b) => a - b);
                sm += nums[j];
            } else if (pqmax[0] < nums[j]) {
                sm -= pqmax[0];
                pqmax[0] = nums[j];
                pqmax.sort((a, b) => a - b);
                sm += nums[j];
            }

            if (pqmax.length > 0) {
                ans = Math.max(ans, sm);
            }
        }
    }

    return ans;
};