import java.util.*;

class Solution {
    public long maxSum(int[] nums, int k) {

        int n = nums.length;

        long ans = Integer.MIN_VALUE;

        if (k == 0 || n == 1) {
            long sm = 0;
            for (int num : nums) {
                sm += num;
                ans = Math.max(ans, sm);
                if (sm < 0) {
                    sm = 0;
                }
            }
            return ans;
        }

        int cnt = 0;
        long curPos = 0;
        long[] pref = new long[n + 1];

        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                curPos += nums[i];
            } else {
                cnt++;
            }

            pref[i + 1] = pref[i] + nums[i];
            ans = Math.max(ans, (long) nums[i]);
        }

        if (cnt <= k) {
            return curPos;
        }

        long[][] dp = new long[n][n];

        for (int i = 0; i < n; i++) {
            PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
            long sm = 0;

            for (int j = i; j < n; j++) {
                if (nums[j] >= 0) {
                    dp[i][j] = sm;
                    continue;
                }

                if (pq.size() < k) {
                    pq.offer(nums[j]);
                    sm += nums[j];
                } else {
                    if (pq.peek() > nums[j]) {
                        sm -= pq.poll();
                        sm += nums[j];
                        pq.offer(nums[j]);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            PriorityQueue<Integer> pqmax = new PriorityQueue<>();
            long sm = 0;

            for (int j = 0; j < i; j++) {
                if (nums[j] < 0) {
                    continue;
                }

                if (pqmax.size() < k) {
                    pqmax.offer(nums[j]);
                    sm += nums[j];
                } else {
                    if (pqmax.peek() < nums[j]) {
                        sm -= pqmax.poll();
                        sm += nums[j];
                        pqmax.offer(nums[j]);
                    }
                }
            }

            for (int j = n - 1; j > i; j--) {
                long cur = pref[j + 1] - pref[i];
                cur -= dp[i][j];
                cur += sm;

                ans = Math.max(ans, cur);

                if (nums[j] < 0) {
                    continue;
                }

                if (pqmax.size() < k) {
                    pqmax.offer(nums[j]);
                    sm += nums[j];
                } else {
                    if (pqmax.peek() < nums[j]) {
                        sm -= pqmax.poll();
                        sm += nums[j];
                        pqmax.offer(nums[j]);
                    }
                }

                if (!pqmax.isEmpty()) {
                    ans = Math.max(ans, sm);
                }
            }
        }

        return ans;
    }
}