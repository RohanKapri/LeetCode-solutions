class Solution {
    public int minInsertions(String s) {
        int openBrackets = 0;
        int insertionsRequired = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                openBrackets++;
            } else if (i + 1 < s.length() && s.charAt(i + 1) == ')') {
                if (openBrackets > 0) openBrackets--;
                else insertionsRequired++;
                i++;
            } else {
                if (openBrackets > 0) {
                    openBrackets--;
                    insertionsRequired++;
                } else {
                    insertionsRequired += 2;
                }
            }
        }

        return insertionsRequired + 2 * openBrackets;
    }
}
