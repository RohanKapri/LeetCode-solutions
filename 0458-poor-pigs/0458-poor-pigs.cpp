#include <cmath>
using namespace std;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int T = minutesToTest / minutesToDie;
        int pigs = 0;
        
        while (pow(T + 1, pigs) < buckets) {
            pigs++;
        }
        
        return pigs;
    }
};
