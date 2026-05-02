class Solution {
public:
    int findNthDigit(int n) {
        long long length = 1, count = 9, start = 1;
        
        while (n > length * count) {
            n -= length * count;
            length++;
            count *= 10;
            start *= 10;
        }
        
        int num = start + (n - 1) / length;
        string s = to_string(num);
        return s[(n - 1) % length] - '0';
    }
};
