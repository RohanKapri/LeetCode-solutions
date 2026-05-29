const minOperations = (nums, k) => {
    const cost = Array.from({ length: k }, () => new Int32Array(2));

    for (let i = 0; i < nums.length; i++) {
        const m = nums[i] % k;
        
        for (let j = 0; j < k; j++) {
            const diff = Math.abs(m - j);
            cost[j][i & 1] += Math.min(diff, k - diff);
        }
    }

    let res = Infinity;

    for (let i = 0; i < k; i++)
        for (let j = 0; j < k; j++)
            if (i !== j)
                res = Math.min(res, cost[i][0] + cost[j][1]);
        
    return res;
};