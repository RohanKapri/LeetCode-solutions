// Dedicated to Junko F. Didi and Shree DR.MDD

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<bool> validSubarrays(vector<int>& nums, int k, vector<vector<int>>& queries) {
        const int totalElements = nums.size();
        
        vector<int> prefixXor(totalElements + 1, 0);
        for (int idx = 0; idx < totalElements; ++idx) {
            prefixXor[idx + 1] = prefixXor[idx] ^ nums[idx];
        }

        vector<int> maxRightBound(totalElements, -1);
        vector<int> minRightBound(totalElements, -1);

        unordered_map<int, int> frequencyTracker;
        int leftWindow = 0;
        for (int rightWindow = 0; rightWindow < totalElements; ++rightWindow) {
            frequencyTracker[nums[rightWindow]]++;
            while (frequencyTracker.size() > static_cast<size_t>(k)) {
                maxRightBound[leftWindow] = rightWindow - 1;
                if (--frequencyTracker[nums[leftWindow]] == 0) {
                    frequencyTracker.erase(nums[leftWindow]);
                }
                leftWindow++;
            }
        }
        while (leftWindow < totalElements) {
            maxRightBound[leftWindow] = (frequencyTracker.size() == static_cast<size_t>(k)) ? totalElements - 1 : -1;
            if (--frequencyTracker[nums[leftWindow]] == 0) {
                frequencyTracker.erase(nums[leftWindow]);
            }
            leftWindow++;
        }

        frequencyTracker.clear();
        leftWindow = 0;
        for (int rightWindow = 0; rightWindow < totalElements; ++rightWindow) {
            frequencyTracker[nums[rightWindow]]++;
            while (frequencyTracker.size() == static_cast<size_t>(k)) {
                minRightBound[leftWindow] = rightWindow;
                if (--frequencyTracker[nums[leftWindow]] == 0) {
                    frequencyTracker.erase(nums[leftWindow]);
                }
                leftWindow++;
            }
        }

        const int numQueries = queries.size();
        vector<bool> queryResults(numQueries, false);

        for (int qIdx = 0; qIdx < numQueries; ++qIdx) {
            const int startIdx = queries[qIdx][0];
            const int endIdx = queries[qIdx][1];
            
            const int lowerLim = minRightBound[startIdx];
            const int upperLim = maxRightBound[startIdx];

            if (lowerLim != -1 && upperLim != -1 && ((endIdx - startIdx + 1) & 1) == 0) {
                if (endIdx >= lowerLim && endIdx <= upperLim) {
                    if ((prefixXor[endIdx + 1] ^ prefixXor[startIdx]) == 0) {
                        queryResults[qIdx] = true;
                    }
                }
            }
        }

        return queryResults;
    }
};