class Solution {
  int maxRatings(List<List<int>> units) {
    int m = units.length;
    int n = units[0].length;

    if (n == 1) {
      int sum = 0;
      for (int i = 0; i < m; i++) {
        sum += units[i][0];
      }
      return sum;
    }

    int total = 0;
    int miniF = 1000000000;
    int miniS = 1000000000;

    for (int i = 0; i < m; i++) {
      int firMin = 1000000000;
      int secMin = 1000000000;

      for (int j = 0; j < n; j++) {
        int val = units[i][j];

        if (val < firMin) {
          secMin = firMin;
          firMin = val;
        } else if (val < secMin) {
          secMin = val;
        }
      }

      total += secMin;
      if (firMin < miniF) miniF = firMin;
      if (secMin < miniS) miniS = secMin;
    }

    return total - miniS + miniF;
  }
}