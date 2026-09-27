public class Solution {
    public String reverseParentheses(String s) {
        Stack<StringBuilder> stack = new Stack<>();
        StringBuilder current = new StringBuilder();
        
        for (char c : s.toCharArray()) {
            if (c == '(') {
                stack.push(current);
                current = new StringBuilder();
            } else if (c == ')') {
                StringBuilder temp = current.reverse();
                current = stack.pop();
                current.append(temp);
            } else {
                current.append(c);
            }
        }
        
        return current.toString();
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        String result = solution.reverseParentheses("(ed(et(oc))el)");
        System.out.println(result);  // Output: "leetcode"
    }
}
