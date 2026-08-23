// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTravelTime = 0;
        int activeLevel = 0;
        
        for (const int targetLevel : requests) {
            totalTravelTime += std::abs(targetLevel - activeLevel);
            activeLevel = targetLevel;
        }
        
        return totalTravelTime;
    }
};