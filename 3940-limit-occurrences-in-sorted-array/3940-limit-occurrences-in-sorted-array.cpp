class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>diff;
        int n = nums.size();
        int cnt = 1;
        diff.push_back(nums[0]);
        int last = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i] == last && cnt<k){
                cnt++;
                diff.push_back(nums[i]);
            }
            else if(cnt == k && nums[i] == last){
                continue;
            }else{
                cnt = 1;
                diff.push_back(nums[i]);
                last = nums[i];
            }
        }
        return diff;
    }
};