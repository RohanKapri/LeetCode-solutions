class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int result = 0;
        
        for (int i = 0; i < n; i++) {
            unordered_map<double, int> slopeMap;
            int samePoint = 0;
            int localMax = 0;

            for (int j = i + 1; j < n; j++) {
                if (points[i] == points[j]) {
                    samePoint++;
                    continue;
                }

                double slope;
                if (points[i][0] == points[j][0]) {
                    slope = INT_MAX;
                } else {
                    slope = double(points[j][1] - points[i][1]) / (points[j][0] - points[i][0]);
                }
                
                slopeMap[slope]++;
                localMax = max(localMax, slopeMap[slope]);
            }

            result = max(result, localMax + samePoint + 1);
        }

        return result;
    }
};
