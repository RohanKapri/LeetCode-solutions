class Solution {
    public int getLength(int[] nums) {
        int ans = 1;

        for (int i = 0; i < nums.length; i++) {
            HashMap<Integer, Integer> cnt = new HashMap<>();
            HashMap<Integer, Integer> freq = new HashMap<>();

            for (int j = i; j < nums.length; j++) {
                int x = nums[j];

                if (cnt.containsKey(x)) {
                    int old = cnt.get(x);
                    freq.put(old, freq.get(old) - 1);
                    if (freq.get(old) == 0) freq.remove(old);
                }

                int cur = cnt.getOrDefault(x, 0) + 1;
                cnt.put(x, cur);
                freq.put(cur, freq.getOrDefault(cur, 0) + 1);

                if (cnt.size() == 1) {
                    ans = Math.max(ans, j - i + 1);
                } else if (freq.size() == 2) {
                    int a = 0, b = 0, k = 0;

                    for (int v : freq.keySet()) {
                        if (k++ == 0) a = v;
                        else b = v;
                    }

                    int small = Math.min(a, b);
                    int large = Math.max(a, b);

                    if (large == 2 * small) {
                        ans = Math.max(ans, j - i + 1);
                    }
                }
            }
        }

        return ans;
    }
}