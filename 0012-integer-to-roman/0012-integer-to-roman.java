class Solution {
    public String intToRoman(int num) {
        // Define the values and their corresponding Roman numerals
        int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        StringBuilder result = new StringBuilder();
        
        // Loop over the values and subtract them from the number when possible
        for (int i = 0; i < values.length; i++) {
            // While the number is larger than the current value, append the corresponding symbol
            while (num >= values[i]) {
                result.append(symbols[i]);
                num -= values[i];
            }
        }
        
        return result.toString();
    }
}
