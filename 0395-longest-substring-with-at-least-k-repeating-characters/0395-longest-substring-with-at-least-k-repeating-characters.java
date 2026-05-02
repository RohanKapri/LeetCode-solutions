class Solution {
    public int longestSubstring(String s, int k) {
        return helper(s, k, 0, s.length() - 1);
    }
    
    private int helper(String s, int k, int start, int end) {
        if (end - start + 1 < k) {
            return 0;
        }

        int[] freq = new int[26];
        for (int i = start; i <= end; i++) {
            freq[s.charAt(i) - 'a']++;
        }

        boolean valid = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0 && freq[i] < k) {
                valid = false;
                break;
            }
        }

        if (valid) {
            return end - start + 1;
        }

        int maxLength = 0;
        int i = start;
        while (i <= end) {
            while (i <= end && freq[s.charAt(i) - 'a'] < k) {
                i++;
            }
            int j = i;
            while (j <= end && freq[s.charAt(j) - 'a'] >= k) {
                j++;
            }
            if (i < j) {
                maxLength = Math.max(maxLength, helper(s, k, i, j - 1));
            }
            i = j;
        }
        return maxLength;
    }
}
