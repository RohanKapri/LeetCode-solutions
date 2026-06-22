class Solution {
    public int maxNumberOfBalloons(String text) {
        int[] charCount = new int[26];
        for (char ch : text.toCharArray()) {
            charCount[ch - 'a']++;
        }

        int countB = charCount['b' - 'a'];
        int countA = charCount['a' - 'a'];
        int countL = charCount['l' - 'a'] / 2;
        int countO = charCount['o' - 'a'] / 2;
        int countN = charCount['n' - 'a'];

        return Math.min(Math.min(countB, Math.min(countA, Math.min(countL, Math.min(countO, countN)))), Integer.MAX_VALUE);
    }
}
