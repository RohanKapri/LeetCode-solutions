import java.util.Arrays;

public class Solution {
    public void wiggleSort(int[] nums) {
        if (nums == null || nums.length <= 1) return;
        
        Arrays.sort(nums);
        int[] sorted = Arrays.copyOf(nums, nums.length);
        
        int left = (nums.length - 1) / 2, right = nums.length - 1;
        for (int i = 0; i < nums.length; i++) {
            if (i % 2 == 0) {
                nums[i] = sorted[left--];
            } else {
                nums[i] = sorted[right--];
            }
        }
    }
}
