// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    long long elevatorRequests(int n, int start, vector<vector<int>>& req) {
        const int numReqs = req.size();
        const int fullMask = (1 << numReqs) - 1;
        const long long INF = 1e16;

        auto computeMinTime = [&](int initialIdx, long long upperLimit) -> long long {
            vector<vector<long long>> minTime(numReqs, vector<long long>(fullMask + 1, INF));
            using State = tuple<long long, int, int>;
            priority_queue<State, vector<State>, greater<State>> minHeap;

            long long initialArriveTime = std::max(static_cast<long long>(req[initialIdx][0]), static_cast<long long>(std::abs(start - req[initialIdx][1])));
            minTime[initialIdx][1 << initialIdx] = initialArriveTime;
            minHeap.emplace(initialArriveTime, initialIdx, 1 << initialIdx);

            while (!minHeap.empty()) {
                auto [currTime, currIdx, mask] = minHeap.top();
                minHeap.pop();

                if (currTime > minTime[currIdx][mask]) continue;
                if (mask == fullMask) return currTime;
                if (currTime >= upperLimit) return upperLimit;

                for (int nextIdx = 0; nextIdx < numReqs; ++nextIdx) {
                    if (!(mask & (1 << nextIdx))) {
                        int nextMask = mask | (1 << nextIdx);
                        long long travelTime = currTime + std::abs(req[currIdx][1] - req[nextIdx][1]);
                        long long reachTime = std::max(static_cast<long long>(req[nextIdx][0]), travelTime);

                        if (reachTime < minTime[nextIdx][nextMask]) {
                            minTime[nextIdx][nextMask] = reachTime;
                            minHeap.emplace(reachTime, nextIdx, nextMask);
                        }
                    }
                }
            }
            return INF;
        };

        long long optimalResult = INF;
        for (int i = 0; i < numReqs; ++i) {
            optimalResult = std::min(optimalResult, computeMinTime(i, optimalResult));
        }

        return optimalResult;
    }
};