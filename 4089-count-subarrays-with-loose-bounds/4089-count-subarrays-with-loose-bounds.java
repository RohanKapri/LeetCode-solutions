class Solution {
    public long countSubarrays(int[] nums, int minK, int maxK) {
        int start = 0;
        long total = 0;

        for (int index = 0; index < nums.length; index++) {
            if (nums[index] < minK || nums[index] > maxK) {
                start = index + 1;
            } else {
                total += index - start + 1;
            }
        }

        return total;
    }
}
