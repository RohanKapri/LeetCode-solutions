class Solution {
public:
    string smallestGoodBase(string n) {
        long num = stol(n);

        for (int m = static_cast<int>(log2(num)); m >= 2; --m) {
            long k = static_cast<long>(pow(num, 1.0 / m));
            long sum = 1, prod = 1;
            
            for (int i = 0; i < m; ++i) {
                prod *= k;
                sum += prod;
            }
            
            if (sum == num)
                return to_string(k);
        }

        return to_string(num - 1);
    }
};
