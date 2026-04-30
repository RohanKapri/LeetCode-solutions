public class Solution {
    public int calculate(String s) {
        int result = 0, sign = 1, currentNumber = 0;
        Deque<Integer> stack = new ArrayDeque<>();
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);  // This line should work fine in Java
            if (Character.isDigit(ch)) {
                currentNumber = currentNumber * 10 + (ch - '0');
            } else if (ch == '+') {
                result += sign * currentNumber;
                sign = 1;
                currentNumber = 0;
            } else if (ch == '-') {
                result += sign * currentNumber;
                sign = -1;
                currentNumber = 0;
            } else if (ch == '(') {
                stack.push(result);
                stack.push(sign);
                result = 0;
                sign = 1;
            } else if (ch == ')') {
                result += sign * currentNumber;
                currentNumber = 0;
                result *= stack.pop();
                result += stack.pop();
            }
        }
        
        result += sign * currentNumber;
        return result;
    }

    public static void main(String[] args) {
        Solution calculator = new Solution();
        System.out.println(calculator.calculate("1 + 1"));
        System.out.println(calculator.calculate(" 2-1 + 2 "));
        System.out.println(calculator.calculate("(1+(4+5+2)-3)+(6+8)"));
    }
}
