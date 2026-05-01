class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Step 1: Initialize the slow and fast pointers
        int slow = nums[0];
        int fast = nums[0];

        // Step 2: Detect the cycle using the tortoise and hare approach
        do {
            slow = nums[slow];  // move slow by 1 step
            fast = nums[nums[fast]];  // move fast by 2 steps
        } while (slow != fast);  // loop until they meet

        // Step 3: Find the entrance to the cycle (the duplicate number)
        slow = nums[0];  // start slow from the beginning
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;  // The duplicate number is where slow and fast meet
    }
};
