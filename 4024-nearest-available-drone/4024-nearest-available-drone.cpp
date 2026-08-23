// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int optimalIdx = -1;
        int lowestSeparation = 2e9;
        
        const int targetX = target[0];
        const int targetY = target[1];
        const int totalDrones = drones.size();

        for (int idx = 0; idx < totalDrones; ++idx) {
            const int manhattanDist = std::abs(drones[idx][0] - targetX) + std::abs(drones[idx][1] - targetY);
            const int operationalRange = drones[idx][2];

            if (manhattanDist <= operationalRange && manhattanDist < lowestSeparation) {
                lowestSeparation = manhattanDist;
                optimalIdx = idx;
            }
        }

        return optimalIdx;
    }
};