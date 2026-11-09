class Solution {
    public int minOperations(int[] nums, int[] locked, int k) {
        int inversions = 0;

        for (int left = 0; left < nums.length; left++) {
            for (int right = left + 1; right < nums.length; right++) {
                if (nums[left] > nums[right]) {
                    inversions++;
                }
            }
        }

        int prefixMaximum = 0;
        int segmentStart = 0;
        int lockedCount = 0;

        for (int index = 0; index < nums.length; index++) {
            prefixMaximum = Math.max(prefixMaximum, nums[index]);

            if (prefixMaximum == index + 1) {
                if (index > segmentStart) {
                    for (int pos = segmentStart; pos <= index; pos++) {
                        if (locked[pos] == 1) {
                            lockedCount++;
                        }
                    }
                }

                segmentStart = index + 1;
            }
        }

        if (lockedCount > k) {
            return -1;
        }

        return inversions + lockedCount;
    }
}
