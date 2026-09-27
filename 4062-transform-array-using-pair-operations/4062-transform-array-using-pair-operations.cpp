class Solution {
public:
    using ll =  unsigned long long;
    bool canTransform(vector<int>& source, vector<int>& target) {
        if(source.size() != target.size()) return false;
        
        ll srSum = accumulate(source.begin(), source.end(), 0LL);
        ll trSum = accumulate(target.begin(), target.end(), 0LL);

        if(srSum != trSum) return false;

        return true;
    }
};