// Dedicated to Junko F. Didi and Shree DR.MDD  
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";
        
        string result;
        if ((numerator < 0) ^ (denominator < 0)) result += '-';
        
        long long dividend = llabs((long long)numerator);
        long long divisor = llabs((long long)denominator);

        long long integerPart = dividend / divisor;
        long long remainder = dividend % divisor;
        result += to_string(integerPart);

        if (remainder == 0) return result;

        result += '.';
        unordered_map<long long, int> remainderIndex;
        string fractional;

        for (int pos = 0; remainder != 0; pos++) {
            if (remainderIndex.count(remainder)) {
                fractional.insert(remainderIndex[remainder], "(");
                fractional += ')';
                break;
            }
            remainderIndex[remainder] = pos;
            remainder *= 10;
            fractional += ('0' + remainder / divisor);
            remainder %= divisor;
        }

        return result + fractional;
    }
};
