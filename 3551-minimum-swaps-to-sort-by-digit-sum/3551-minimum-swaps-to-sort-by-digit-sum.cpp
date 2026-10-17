// Dedicated to Shree DR.MDD

class Solution {
public:
    int calcDigitSum(int val){
        int total = 0;
        while(val > 0){
            total += val % 10;
            val /= 10;
        }
        return total;
    }

    int minSwaps(vector<int>& nums) {
        int length = nums.size();
        vector<pair<int,int>> indexed(length);
        for(int idx = 0; idx < length; idx++){
            indexed[idx] = {nums[idx], idx};
        }

        vector<pair<pair<int,int>, int>> transformed(length);
        for(int idx = 0; idx < length; idx++){
            int ds = calcDigitSum(nums[idx]);
            transformed[idx] = {{ds, nums[idx]}, idx};
        }

        sort(transformed.begin(), transformed.end());

        vector<int> mapping(length);
        for(int idx = 0; idx < length; idx++){
            mapping[transformed[idx].second] = idx;
        }

        int swaps = 0;
        vector<bool> visited(length, false);
        for(int i = 0; i < length; i++){
            if(visited[i] || mapping[i] == i) continue;
            int cycle_size = 0;
            int j = i;
            while(!visited[j]){
                visited[j] = true;
                j = mapping[j];
                cycle_size++;
            }
            swaps += (cycle_size - 1);
        }
        return swaps;
    }
};
