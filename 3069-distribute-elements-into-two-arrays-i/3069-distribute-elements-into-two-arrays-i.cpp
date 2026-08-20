class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2;
        
        // First operation: append nums[0] to arr1 and nums[1] to arr2
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        
        // Distribute the remaining elements based on the last elements of arr1 and arr2
        for (int i = 2; i < nums.size(); i++) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }
        
        // Concatenate arr1 and arr2 to form the result
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        
        return arr1;
    }
};
