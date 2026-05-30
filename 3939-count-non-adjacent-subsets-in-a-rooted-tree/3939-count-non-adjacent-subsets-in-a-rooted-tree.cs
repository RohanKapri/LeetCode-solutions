public class Solution {
    public int CountValidSubsets(int[] parent, int[] nums, int k) {
        const long MOD = 1000000007L;

        int n = parent.Length;

        List<int>[] children = new List<int>[n];
        for (int i = 0; i < n; i++) {
            children[i] = new List<int>();
        }

        for (int i = 1; i < n; i++) {
            children[parent[i]].Add(i);
        }

        int[][] dp0 = new int[n][];
        int[][] dp1 = new int[n][];

        for (int i = 0; i < n; i++) {
            dp0[i] = new int[k];
            dp1[i] = new int[k];
        }

        for (int u = n - 1; u >= 0; u--) {
            dp0[u][0] = 1;
            dp1[u][nums[u] % k] = 1;

            foreach (int v in children[u]) {
                int[] next0 = new int[k];
                int[] next1 = new int[k];

                for (int i = 0; i < k; i++) {
                    if (dp0[u][i] != 0) {
                        for (int j = 0; j < k; j++) {
                            int total = (int)(((long)dp0[v][j] + dp1[v][j]) % MOD);

                            if (total != 0) {
                                int idx = (i + j) % k;
                                next0[idx] = (int)((next0[idx] + (long)dp0[u][i] * total) % MOD);
                            }
                        }
                    }

                    if (dp1[u][i] != 0) {
                        for (int j = 0; j < k; j++) {
                            if (dp0[v][j] != 0) {
                                int idx = (i + j) % k;
                                next1[idx] = (int)((next1[idx] + (long)dp1[u][i] * dp0[v][j]) % MOD);
                            }
                        }
                    }
                }

                dp0[u] = next0;
                dp1[u] = next1;
            }
        }

        return (int)(((long)dp0[0][0] + dp1[0][0] - 1 + MOD) % MOD);
    }
}