// Dedicated to Junko F. Didi and Shree DR.MDD

static const int fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int total = position.size();
        vector<int> filteredSpeeds;
        filteredSpeeds.reserve(total);

        for (int idx = 0; idx < total; ++idx) {
            if (idx > 0 && (position[idx] - position[idx - 1] <= distance)) {
                filteredSpeeds.pop_back();
            }
            filteredSpeeds.push_back(speed[idx]);
        }

        int groupCount = 0;
        int thresholdSpeed = 2e9;

        for (int idx = static_cast<int>(filteredSpeeds.size()) - 1; idx >= 0; --idx) {
            int currentVelocity = filteredSpeeds[idx];
            if (currentVelocity <= thresholdSpeed) {
                thresholdSpeed = currentVelocity;
                ++groupCount;
            }
        }

        return groupCount;
    }
};