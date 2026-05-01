class Solution {
public:
    bool isAdditiveNumber(string num) {
        int n = num.size();
        for (int i = 1; i <= n / 2; ++i) {
            if (num[0] == '0' && i > 1) continue;
            for (int j = 1; max(i, j) <= n - i - j; ++j) {
                if (num[i] == '0' && j > 1) continue;
                string num1 = num.substr(0, i), num2 = num.substr(i, j);
                if (isValid(num1, num2, num.substr(i + j))) return true;
            }
        }
        return false;
    }

private:
    bool isValid(string num1, string num2, string remaining) {
        while (!remaining.empty()) {
            string sum = addStrings(num1, num2);
            if (remaining.find(sum) != 0) return false;
            num1 = num2;
            num2 = sum;
            remaining = remaining.substr(sum.size());
        }
        return true;
    }

    string addStrings(string num1, string num2) {
        string result;
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int digit1 = i >= 0 ? num1[i--] - '0' : 0;
            int digit2 = j >= 0 ? num2[j--] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result.push_back(sum % 10 + '0');
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
