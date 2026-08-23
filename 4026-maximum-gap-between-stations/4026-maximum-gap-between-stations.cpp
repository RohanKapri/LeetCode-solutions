// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int maximumGap(string skill, string station) {
        const int skillLen = skill.length();
        const int stationLen = station.length();
        
        vector<int> firstOccurrence(skillLen);
        vector<int> lastOccurrence(skillLen);

        int skillPtr = 0;
        for (int stationPtr = 0; stationPtr < stationLen && skillPtr < skillLen; ++stationPtr) {
            if (station[stationPtr] == skill[skillPtr]) {
                firstOccurrence[skillPtr++] = stationPtr;
            }
        }

        skillPtr = skillLen - 1;
        for (int stationPtr = stationLen - 1; stationPtr >= 0 && skillPtr >= 0; --stationPtr) {
            if (station[stationPtr] == skill[skillPtr]) {
                lastOccurrence[skillPtr--] = stationPtr;
            }
        }

        int maxGapSpan = 0;
        for (int idx = 0; idx < skillLen - 1; ++idx) {
            maxGapSpan = std::max(maxGapSpan, lastOccurrence[idx + 1] - firstOccurrence[idx]);
        }

        return maxGapSpan;
    }
};