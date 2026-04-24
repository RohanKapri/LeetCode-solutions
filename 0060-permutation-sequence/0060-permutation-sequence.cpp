class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums(n);
        for (int i = 1; i <= n; ++i) nums[i-1] = i;
        
        k--;  
        string result = "";
        int fact = 1;
        
        for (int i = 1; i < n; ++i) fact *= i;
        
        while (n > 0) {
            int index = k / fact;
            result += to_string(nums[index]);
            nums.erase(nums.begin() + index);
            k %= fact;
            if (n > 1) fact /= (n - 1);
            n--;
        }
        
        return result;
    }
};
