/**
 * @param {number[]} parent
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countValidSubsets = function(parent, nums, k) {
    const MOD = 1000000007n;
    const n = parent.length;

    const children = Array.from({ length: n }, () => []);

    for (let i = 1; i < n; i++) {
        children[parent[i]].push(i);
    }

    const dp0 = Array.from({ length: n }, () => Array(k).fill(0));
    const dp1 = Array.from({ length: n }, () => Array(k).fill(0));

    const addMul = (a, b, cur) => {
        return Number((BigInt(cur) + BigInt(a) * BigInt(b)) % MOD);
    };

    for (let u = n - 1; u >= 0; u--) {
        dp0[u][0] = 1;
        dp1[u][nums[u] % k] = 1;

        for (const v of children[u]) {
            const next0 = Array(k).fill(0);
            const next1 = Array(k).fill(0);

            for (let i = 0; i < k; i++) {
                if (dp0[u][i] !== 0) {
                    for (let j = 0; j < k; j++) {
                        const total = (dp0[v][j] + dp1[v][j]) % Number(MOD);

                        if (total !== 0) {
                            next0[(i + j) % k] = addMul(
                                dp0[u][i],
                                total,
                                next0[(i + j) % k]
                            );
                        }
                    }
                }

                if (dp1[u][i] !== 0) {
                    for (let j = 0; j < k; j++) {
                        if (dp0[v][j] !== 0) {
                            next1[(i + j) % k] = addMul(
                                dp1[u][i],
                                dp0[v][j],
                                next1[(i + j) % k]
                            );
                        }
                    }
                }
            }

            dp0[u] = next0;
            dp1[u] = next1;
        }
    }

    return (dp0[0][0] + dp1[0][0] - 1 + Number(MOD)) % Number(MOD);
};