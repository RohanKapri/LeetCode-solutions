class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();
        int m = shifts.size();

        vector<long long>pref(n);
        pref[0] = tasks[0];
        for(int i=1;i<n;++i)
            {
                pref[i] = 1LL*tasks[i] + 1LL*pref[i-1];
            }

        vector<int>ans;
        long long tot = 0;
        for(int &x:shifts)
            {
                tot += 1LL*x;
                if(pref[n-1] <= tot)
                {
                    ans.push_back(0);
                    tot = 0;
                    continue;
                }
                auto it = upper_bound(pref.begin(),pref.end(),tot)-pref.begin();
                int an = n - it;
                ans.push_back(an);
            }
        return ans;
    }
};