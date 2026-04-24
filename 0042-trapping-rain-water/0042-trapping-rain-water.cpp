#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& heights) {
        int low = 0, high = heights.size() - 1;
        int maxOnLeft = 0, maxOnRight = 0;
        int trappedWater = 0;

        while (low <= high) {
            if (heights[low] < heights[high]) {
                if (heights[low] > maxOnLeft) {
                    maxOnLeft = heights[low];
                } else {
                    trappedWater += maxOnLeft - heights[low];
                }
                ++low;
            } else {
                if (heights[high] > maxOnRight) {
                    maxOnRight = heights[high];
                } else {
                    trappedWater += maxOnRight - heights[high];
                }
                --high;
            }
        }
        return trappedWater;
    }
};
