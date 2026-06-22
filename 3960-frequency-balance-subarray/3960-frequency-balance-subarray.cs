public class Solution {
    public int GetLength(int[] nums) {
        int n = nums.Length, ans = 0;

        Dictionary<int, int> mp = new Dictionary<int, int>();
        int idx = 0;

        for (int i = 0; i < n; i++) {
            if (!mp.ContainsKey(nums[i]))
                mp[nums[i]] = idx++;

            nums[i] = mp[nums[i]];
        }

        for (int i = 0; i + ans < n; i++) {
            int len = Math.Min(n - i + 1, n - idx + 2);
            int[] freq = new int[idx];
            int[] freqFreq = new int[len];

            int numCount = 0, freqCount = 0;

            for (int j = i; j < n; j++) {
                int val = ++freq[nums[j]];

                if (val == 1) numCount++;

                if (freqFreq[val]++ == 0) freqCount++;
                if (val != 1 && --freqFreq[val - 1] == 0) freqCount--;

                if (ans > j - i + 1) continue;

                if (
                    numCount == 1 ||
                    (
                        freqCount == 2 &&
                        (
                            ((val & 1) == 0 && freqFreq[val >> 1] != 0) ||
                            ((val << 1) < len && freqFreq[val << 1] != 0)
                        )
                    )
                ) {
                    ans = j - i + 1;
                }
            }
        }

        return ans;
    }
}