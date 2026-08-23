class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int maxEl = *max_element(nums.begin(), nums.end());
        int minEl = *min_element(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if(maxEl < lower) {
            ans.push_back({lower, upper});
            return ans;
        }
        if(minEl > upper) {
            ans.push_back({lower, upper});
            return ans;
        }
        sort(nums.begin(), nums.end());
        int j = lower_bound(nums.begin(), nums.end(), lower) - nums.begin();
        while(lower <= upper){
            if(lower == nums[j]){
                lower++; j++;
                if(j >= nums.size()){
                    if(lower > upper) continue;
                    ans.push_back({lower, upper});
                    break;
                }
            }
            else if(nums[j] > upper){
                if(lower > upper) continue;
                ans.push_back({lower, upper});
                break;
            }
            else{
                if(lower > nums[j]-1){
                    lower = nums[j];
                     continue;
                }
                ans.push_back({lower, nums[j]-1});
                lower = nums[j];
            }
        }
        return ans;
    }
};