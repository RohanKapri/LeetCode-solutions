#include <vector>
#include <cstring>
using namespace std;

class Solution {
public:
    void extractMax(vector<int>& nums, int len, int size, vector<int>& result) {
        result.clear();
        int drop = len - size; 
        for (int num : nums) {
            while (!result.empty() && drop > 0 && result.back() < num) {
                result.pop_back();
                --drop;
            }
            if (result.size() < size) {
                result.push_back(num);
            } else {
                --drop;
            }
        }
    }

    vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        auto it1 = nums1.begin(), it2 = nums2.begin();
        while (it1 != nums1.end() || it2 != nums2.end()) {
            if (lexicographical_compare(it1, nums1.end(), it2, nums2.end())) {
                result.push_back(*it2++);
            } else {
                result.push_back(*it1++);
            }
        }
        return result;
    }

    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int len1 = nums1.size(), len2 = nums2.size();
        vector<int> best;
        for (int i = max(0, k - len2); i <= min(k, len1); ++i) {
            vector<int> part1, part2, candidate;
            extractMax(nums1, len1, i, part1);
            extractMax(nums2, len2, k - i, part2);
            candidate = merge(part1, part2);
            if (lexicographical_compare(best.begin(), best.end(), candidate.begin(), candidate.end())) {
                best = candidate;
            }
        }
        return best;
    }
};
