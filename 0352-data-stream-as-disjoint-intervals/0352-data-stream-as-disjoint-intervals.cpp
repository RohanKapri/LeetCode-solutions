class SummaryRanges {
public:
    set<int> nums;

    SummaryRanges() {}
    
    void addNum(int val) {
        nums.insert(val);
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> result;
        if (nums.empty()) return result;
        
        auto it = nums.begin();
        int start = *it, end = *it;
        
        ++it;
        
        for (; it != nums.end(); ++it) {
            if (*it == end + 1) {
                end = *it;
            } else {
                result.push_back({start, end});
                start = *it;
                end = *it;
            }
        }
        result.push_back({start, end});
        return result;
    }
};
