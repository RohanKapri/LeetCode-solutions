class Solution {
public:
    int minimumPushes(string word) {
        int cost = 0;
        int i = 0;
        for (char c : word) {
            cost += (i / 8) + 1;
            i++;
        }
        return cost;
    }
};
