public class Solution {
    public List<String> addOperators(String num, int target) {
        List<String> result = new ArrayList<>();
        helper(num, target, 0, 0, 0, "", result);
        return result;
    }

    private void helper(String num, int target, int index, long prevOperand, long currentValue, String currentExpression, List<String> result) {
        if (index == num.length()) {
            if (currentValue == target) {
                result.add(currentExpression);
            }
            return;
        }

        for (int i = index + 1; i <= num.length(); i++) {
            String currentSubstring = num.substring(index, i);
            if (currentSubstring.length() > 1 && currentSubstring.charAt(0) == '0') {
                continue;
            }
            long currentNum = Long.parseLong(currentSubstring);
            if (index == 0) {
                helper(num, target, i, currentNum, currentNum, currentSubstring, result);
            } else {
                helper(num, target, i, currentNum, currentValue + currentNum, currentExpression + "+" + currentSubstring, result);
                helper(num, target, i, -currentNum, currentValue - currentNum, currentExpression + "-" + currentSubstring, result);
                helper(num, target, i, prevOperand * currentNum, currentValue - prevOperand + (prevOperand * currentNum), currentExpression + "*" + currentSubstring, result);
            }
        }
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.addOperators("123", 6));
        System.out.println(solution.addOperators("232", 8));
        System.out.println(solution.addOperators("3456237490", 9191));
    }
}
