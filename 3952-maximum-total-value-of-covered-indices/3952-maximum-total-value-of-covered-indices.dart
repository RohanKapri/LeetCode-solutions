class Solution {
  int maxTotal(List<int> nums, String s) {
    const int neg = -1000000000000000000;

    int dp0 = 0;
    int dp1 = neg;

    for (int i = 0; i < nums.length; i++) {
      int nxt0 = neg;
      int nxt1 = neg;

      if (s[i] == '0') {
        nxt0 = dp0 > dp1 ? dp0 : dp1;
      } else {
        int best = dp0 > dp1 ? dp0 : dp1;
        nxt1 = best + nums[i];

        if (i > 0) {
          nxt0 = dp0 + nums[i - 1];
        }
      }

      dp0 = nxt0;
      dp1 = nxt1;
    }

    return dp0 > dp1 ? dp0 : dp1;
  }
}