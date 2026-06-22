class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int m = units.size() ;
        int n = units[0].size() ;

        if(n == 1){
            long long sum = 0 ;
            for(int i=0; i<m; i++) sum += units[i][0] ;

            return sum ;
        }

        long long sum = 0 ;
        long long mini_f = 1e9, mini_s = 1e9  ;

        for(int i=0; i<m; i++)
        {
            long long sec_min = 1e9 ;
            long long fir_min = 1e9 ;

            for(int j=0; j<n; j++)
            {
                long long val = units[i][j] ;

                if(val < fir_min){
                    sec_min = fir_min ;
                    fir_min = val ;
                }
                else if(val < sec_min) sec_min = val ;
            }

            sum += sec_min ;
            mini_f = min(mini_f, fir_min) ;
            mini_s = min(mini_s, sec_min) ;
        }

        return sum - mini_s + mini_f ;

    }
};