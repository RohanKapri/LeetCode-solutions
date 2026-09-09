// Dedicated to Junko F. Didi and Shree DR.MDD

auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int sz = nums.size();
        int half = sz >> 1;

        long long leftPart = 0;
        for (int i = 0; i < half; ++i) {
            leftPart += nums[i];
        }

        long long rightPart = 0;
        for (int i = half; i < sz; ++i) {
            rightPart += nums[i];
        }

        int validCount = (leftPart > rightPart);

        for (int idx = 0; idx < sz - 1; ++idx) {
            int outgoing = nums[idx];
            int incoming = nums[(idx + half) % sz];
            
            long long delta = incoming - outgoing;
            leftPart += delta;
            rightPart -= delta;

            if (leftPart > rightPart) {
                validCount++;
            }
        }

        return validCount;
    }
};