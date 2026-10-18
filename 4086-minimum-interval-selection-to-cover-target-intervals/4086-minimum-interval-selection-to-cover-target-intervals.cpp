
class Solution {
public:
    // For Junko F. Didi and Shree DR.MDD
    int minSelection(vector<vector<int>>& a, vector<vector<int>>& t) {
        sort(a.begin(), a.end());
        sort(t.begin(), t.end());

        int n = a.size(), m = t.size();
        if (m == 0) return 0;

        int i = 0, j = 0, reach = -1, selected = 0;
        int current = t[0][0];

        while (j < m) {
            int previous = reach;

            while (i < n && a[i][0] <= current) {
                reach = max(reach, a[i][1]);
                ++i;
            }

            if (reach == previous) return -1;
            ++selected;

            while (j < m && t[j][1] <= reach) {
                ++j;
            }

            if (j == m) return selected;

            current = max(t[j][0], reach);
        }

        return selected;
    }
};
