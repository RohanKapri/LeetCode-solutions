class Solution {
  int getLength(List<int> nums) {
    nums = List<int>.from(nums);
    int n = nums.length;
    int ans = 0;

    Map<int, int> mp = {};
    int idx = 0;

    for (int i = 0; i < n; i++) {
      if (!mp.containsKey(nums[i])) {
        mp[nums[i]] = idx++;
      }
      nums[i] = mp[nums[i]]!;
    }

    for (int i = 0; i < n; i++) {
      if (i + ans >= n) break;

      int len = (n - i + 1 < n - idx + 2) ? n - i + 1 : n - idx + 2;
      List<int> freq = List.filled(idx, 0);
      List<int> freqFreq = List.filled(len, 0);

      int numCount = 0;
      int freqCount = 0;

      for (int j = i; j < n; j++) {
        int val = ++freq[nums[j]];

        if (val == 1) numCount++;

        if (freqFreq[val] == 0) freqCount++;
        freqFreq[val]++;

        if (val != 1) {
          freqFreq[val - 1]--;
          if (freqFreq[val - 1] == 0) {
            freqCount--;
          }
        }

        if (ans > j - i + 1) continue;

        if (numCount == 1 ||
            (freqCount == 2 &&
                (((val & 1) == 0 && freqFreq[val >> 1] != 0) ||
                    ((val << 1) < len && freqFreq[val << 1] != 0)))) {
          ans = j - i + 1;
        }
      }
    }

    return ans;
  }
}