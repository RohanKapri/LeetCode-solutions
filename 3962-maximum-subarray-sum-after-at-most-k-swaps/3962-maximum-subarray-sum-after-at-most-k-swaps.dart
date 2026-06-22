class Solution {
  int maxSum(List<int> nums, int k) {
    int n = nums.length;

    int ans = -(1 << 63);

    if (k == 0 || n == 1) {
      int sm = 0;

      for (int num in nums) {
        sm += num;
        if (sm > ans) ans = sm;

        if (sm < 0) {
          sm = 0;
        }
      }

      return ans;
    }

    int cnt = 0;
    int cur = 0;
    List<int> pref = List.filled(n + 1, 0);

    for (int i = 0; i < n; i++) {
      if (nums[i] >= 0) {
        cur += nums[i];
      } else {
        cnt++;
      }

      pref[i + 1] = pref[i] + nums[i];

      if (nums[i] > ans) {
        ans = nums[i];
      }
    }

    if (cnt <= k) {
      return cur;
    }

    List<List<int>> dp =
        List.generate(n, (_) => List.filled(n, 0));

    for (int i = 0; i < n; i++) {
      List<int> pq = [];
      int sm = 0;

      for (int j = i; j < n; j++) {
        if (nums[j] >= 0) {
          dp[i][j] = sm;
          continue;
        }

        if (pq.length < k) {
          pq.add(nums[j]);
          pq.sort((a, b) => b.compareTo(a));
          sm += nums[j];
        } else if (pq[0] > nums[j]) {
          sm -= pq[0];
          pq[0] = nums[j];
          pq.sort((a, b) => b.compareTo(a));
          sm += nums[j];
        }
      }
    }

    for (int i = 0; i < n; i++) {
      List<int> pqMax = [];
      int sm = 0;

      for (int j = 0; j < i; j++) {
        if (nums[j] < 0) continue;

        if (pqMax.length < k) {
          pqMax.add(nums[j]);
          pqMax.sort();
          sm += nums[j];
        } else if (pqMax[0] < nums[j]) {
          sm -= pqMax[0];
          pqMax[0] = nums[j];
          pqMax.sort();
          sm += nums[j];
        }
      }

      for (int j = n - 1; j > i; j--) {
        int curSum = pref[j + 1] - pref[i];
        curSum -= dp[i][j];
        curSum += sm;

        if (curSum > ans) {
          ans = curSum;
        }

        if (nums[j] < 0) continue;

        if (pqMax.length < k) {
          pqMax.add(nums[j]);
          pqMax.sort();
          sm += nums[j];
        } else if (pqMax[0] < nums[j]) {
          sm -= pqMax[0];
          pqMax[0] = nums[j];
          pqMax.sort();
          sm += nums[j];
        }

        if (pqMax.isNotEmpty && sm > ans) {
          ans = sm;
        }
      }
    }

    return ans;
  }
}