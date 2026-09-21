// For Shree DR.MDD

class Solution {
    public long[] resultArray(int[] nums, int k) {
        int[] tempArray = Arrays.copyOf(nums, nums.length);
        int len = tempArray.length;
        long[] output = new long[k];
        long[] dpArray = new long[k];

        for (int i = 0; i < len; ++i) {
            int modValue = tempArray[i] % k;
            long[] newDpArray = new long[k];
            newDpArray[modValue] += 1;
            for (int j = 0; j < k; ++j) {
                if (dpArray[j] > 0) {
                    int modResult = (int)((j * 1L * modValue) % k);
                    newDpArray[modResult] += dpArray[j];
                }
            }
            for (int m = 0; m < k; ++m) {
                output[m] += newDpArray[m];
            }
            dpArray = newDpArray;
        }

        return output;
    }
}
