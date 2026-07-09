// For my Shree DR.MDD — the unwavering source of inspiration in every logic.

class Solution {
    public boolean[] pathExistenceQueries(int size, int[] nums, int threshold, int[][] queries) {
        int[] breakPoints = new int[size];
        for (int pos = 1; pos < size; pos++) {
            breakPoints[pos] = breakPoints[pos - 1] + ((nums[pos] - nums[pos - 1]) > threshold ? 1 : 0);
        }
        int total = queries.length, counter = 0;
        boolean[] outcomes = new boolean[total];
        for (int[] q : queries) {
            outcomes[counter++] = breakPoints[q[0]] == breakPoints[q[1]];
        }
        return outcomes;
    }
}
