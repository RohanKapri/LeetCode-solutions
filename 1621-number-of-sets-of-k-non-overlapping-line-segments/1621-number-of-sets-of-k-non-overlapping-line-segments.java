class Solution {
    private static final int MOD = 1000000007;

    public int numberOfSets(int n, int k) {
        long[][] dpTable = new long[k + 1][n];
        dpTable[0][0] = 1;

        for (int segment = 1; segment <= k; segment++) {
            long accumulated = 1;
            for (int pos = segment; pos < n; pos++) {
                dpTable[segment][pos] = (dpTable[segment][pos - 1] + accumulated) % MOD;
                accumulated = (accumulated + dpTable[segment - 1][pos]) % MOD;
            }
        }

        long total = 0;
        for (int i = 0; i < n; i++) {
            total = (total + dpTable[k][i]) % MOD;
        }

        return (int) total;
    }
}
