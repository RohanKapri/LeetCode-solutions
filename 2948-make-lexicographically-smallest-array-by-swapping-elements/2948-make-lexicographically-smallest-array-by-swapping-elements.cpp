#include <ranges>
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& arr, int limit) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        auto partitions = sorted | std::views::chunk_by([&](int a, int b) { return b - a <= limit; });
        vector<int> partitionHeads;
        vector<vector<int>::iterator> iterators;
        for (const auto& part : partitions) {
            partitionHeads.push_back(part.front());
            iterators.push_back(part.begin());
        }
        for (auto& elem : arr) {
            auto position = upper_bound(partitionHeads.begin(), partitionHeads.end(), elem) - 1;
            size_t index = distance(partitionHeads.begin(), position);
            elem = *(iterators[index]++);
        }
        return arr;
    }
};
static auto init = []() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return nullptr; }();
