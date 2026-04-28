// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    int minimumTotal(vector<vector<int>>& pyramidData) {
        for (int depthIdx = pyramidData.size() - 2; depthIdx >= 0; depthIdx--) {
            for (int cellIdx = 0; cellIdx < pyramidData[depthIdx].size(); cellIdx++) {
                pyramidData[depthIdx][cellIdx] += 
                    min(pyramidData[depthIdx + 1][cellIdx], pyramidData[depthIdx + 1][cellIdx + 1]);
            }
        }
        return pyramidData[0][0];
    }
};
