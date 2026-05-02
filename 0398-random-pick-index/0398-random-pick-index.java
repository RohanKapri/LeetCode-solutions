class Solution {
    Random rd = new Random();
    int[] nums;
    public Solution(int[] nums) {
        this.nums = nums;
    }
    
    public int pick(int target) {
        int i = rd.nextInt(0,nums.length);
        while(nums[i] != target)i = rd.nextInt(0,nums.length);
        return i;
    }
}
