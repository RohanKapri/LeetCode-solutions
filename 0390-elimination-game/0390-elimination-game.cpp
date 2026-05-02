class Solution {
public:
    int lastRemaining(int n) {
        int left = 1, step = 1;
        bool isLeft = true;
        while (n > 1) {
            if (isLeft || n % 2 == 1) {
                left += step;
            }
            step *= 2;
            n /= 2;
            isLeft = !isLeft;
        }
        return left;
    }
};
