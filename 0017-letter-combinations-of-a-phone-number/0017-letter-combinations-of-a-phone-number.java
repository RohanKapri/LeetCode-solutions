class Solution {
    public List<String> letterCombinations(String digits) {
        if (digits.isEmpty()) return new ArrayList<>();
        String[] mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        List<String> result = new ArrayList<>();
        backtrack(digits, mapping, 0, new StringBuilder(), result);
        return result;
    }
    
    private void backtrack(String digits, String[] mapping, int index, StringBuilder current, List<String> result) {
        if (index == digits.length()) {
            result.add(current.toString());
            return;
        }
        String letters = mapping[digits.charAt(index) - '2'];
        for (char c : letters.toCharArray()) {
            current.append(c);
            backtrack(digits, mapping, index + 1, current, result);
            current.deleteCharAt(current.length() - 1);
        }
    }
}
