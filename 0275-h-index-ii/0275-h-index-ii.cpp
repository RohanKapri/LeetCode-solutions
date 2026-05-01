class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int left = 0, right = n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (citations[mid] >= n - mid) {
                right = mid - 1; // Look for a larger h-index
            } else {
                left = mid + 1; // Look for a smaller h-index
            }
        }
        
        return n - left;
    }
};
