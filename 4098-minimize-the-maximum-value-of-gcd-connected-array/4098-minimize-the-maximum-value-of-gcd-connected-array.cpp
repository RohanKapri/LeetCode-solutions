class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
        if (value == 1) return -1;
        long long smallestPrime = -1;
        if (!(value%2)) smallestPrime = 2;
        else {
            for (long long i = 3; i*i <= value; i+=2){
                if (value%i == 0){
                    smallestPrime = i;
                    break;
                }
            }
        }
        if (smallestPrime == 2){
            long long dividend = value / 2;
            if (dividend <= index) return -1;
            return 2*(dividend + (long long)(n-index-1));
        }
        if (smallestPrime == -1) {
            if (index > 0) return -1;
            smallestPrime = value;
            long long next = value*2;
            if (n == 2) return value*2;
            return next+ (long long)2*(n-2);
        }
        else {
            long long dividend = value/smallestPrime;
            long long prev = smallestPrime*(dividend-1);
            long long next = smallestPrime*(dividend+1);
            long long div1 = prev/2;
            if (index > div1) return -1;
            long long div2 = next/2;
            if (index == n-1) return value;
            return (long long)next + (long long)(n-index-2)*2;
        }
    }
};