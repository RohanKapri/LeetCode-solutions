// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    long long elevatorRequests(int n, int start, vector<int>& requests) {
        vector<int> leftFloors, rightFloors;
        for (const int fl : requests) {
            if (fl < start) leftFloors.push_back(fl);
            else if (fl > start) rightFloors.push_back(fl);
        }

        std::sort(leftFloors.rbegin(), leftFloors.rend());
        std::sort(rightFloors.begin(), rightFloors.end());

        const int szLeft = leftFloors.size();
        const int szRight = rightFloors.size();

        if (szLeft == 0 && szRight == 0) return 0;

        vector<long long> distL(szLeft + 1, 0);
        for (int i = 1; i <= szLeft; ++i) {
            distL[i] = static_cast<long long>(start) - leftFloors[i - 1];
        }

        vector<long long> distR(szRight + 1, 0);
        for (int j = 1; j <= szRight; ++j) {
            distR[j] = static_cast<long long>(rightFloors[j - 1]) - start;
        }

        const long long INF_LIMIT = LLONG_MAX / 4;

        vector<vector<long long>> costLeftEnd(szLeft + 1, vector<long long>(szRight + 1, INF_LIMIT));
        vector<vector<long long>> timeElapsedLeft(szLeft + 1, vector<long long>(szRight + 1, 0));
        vector<vector<long long>> costRightEnd(szLeft + 1, vector<long long>(szRight + 1, INF_LIMIT));
        vector<vector<long long>> timeElapsedRight(szLeft + 1, vector<long long>(szRight + 1, 0));

        costLeftEnd[0][0] = 0;
        costRightEnd[0][0] = 0;

        for (int i = 0; i <= szLeft; ++i) {
            for (int j = 0; j <= szRight; ++j) {
                if (i == 0 && j == 0) continue;
                const long long pendingRequests = static_cast<long long>((szLeft - i) + (szRight - j));

                if (i > 0) {
                    long long minCost = INF_LIMIT;
                    long long correspondingTime = 0;

                    if (costLeftEnd[i - 1][j] < INF_LIMIT) {
                        const long long moveDelta = distL[i] - distL[i - 1];
                        const long long newTime = timeElapsedLeft[i - 1][j] + moveDelta;
                        const long long newCost = costLeftEnd[i - 1][j] + newTime;
                        if (newCost + pendingRequests * newTime < minCost + pendingRequests * correspondingTime) {
                            minCost = newCost;
                            correspondingTime = newTime;
                        }
                    }

                    if (j > 0 ? (costRightEnd[i - 1][j] < INF_LIMIT) : (i - 1 == 0)) {
                        const long long baseCost = (j > 0) ? costRightEnd[i - 1][j] : 0;
                        const long long baseTime = (j > 0) ? timeElapsedRight[i - 1][j] : 0;
                        const long long moveDelta = (j > 0 ? distR[j] : 0) + distL[i];
                        const long long newTime = baseTime + moveDelta;
                        const long long newCost = baseCost + newTime;
                        if (newCost + pendingRequests * newTime < minCost + pendingRequests * correspondingTime) {
                            minCost = newCost;
                            correspondingTime = newTime;
                        }
                    }

                    costLeftEnd[i][j] = minCost;
                    timeElapsedLeft[i][j] = correspondingTime;
                }

                if (j > 0) {
                    long long minCost = INF_LIMIT;
                    long long correspondingTime = 0;

                    if (costRightEnd[i][j - 1] < INF_LIMIT) {
                        const long long moveDelta = distR[j] - distR[j - 1];
                        const long long newTime = timeElapsedRight[i][j - 1] + moveDelta;
                        const long long newCost = costRightEnd[i][j - 1] + newTime;
                        if (newCost + pendingRequests * newTime < minCost + pendingRequests * correspondingTime) {
                            minCost = newCost;
                            correspondingTime = newTime;
                        }
                    }

                    if (i > 0 ? (costLeftEnd[i][j - 1] < INF_LIMIT) : (j - 1 == 0)) {
                        const long long baseCost = (i > 0) ? costLeftEnd[i][j - 1] : 0;
                        const long long baseTime = (i > 0) ? timeElapsedLeft[i][j - 1] : 0;
                        const long long moveDelta = (i > 0 ? distL[i] : 0) + distR[j];
                        const long long newTime = baseTime + moveDelta;
                        const long long newCost = baseCost + newTime;
                        if (newCost + pendingRequests * newTime < minCost + pendingRequests * correspondingTime) {
                            minCost = newCost;
                            correspondingTime = newTime;
                        }
                    }

                    costRightEnd[i][j] = minCost;
                    timeElapsedRight[i][j] = correspondingTime;
                }
            }
        }

        long long totalOptimalPenalty = INF_LIMIT;
        if (szLeft > 0) totalOptimalPenalty = std::min(totalOptimalPenalty, costLeftEnd[szLeft][szRight]);
        if (szRight > 0) totalOptimalPenalty = std::min(totalOptimalPenalty, costRightEnd[szLeft][szRight]);

        return totalOptimalPenalty;
    }
};