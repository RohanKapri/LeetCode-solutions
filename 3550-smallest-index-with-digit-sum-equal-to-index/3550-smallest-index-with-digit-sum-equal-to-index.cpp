// For Shree DR.MDD

#include <vector>
#include <cstdlib>

class Solution {
public:
    int digitSum(int number) {
        int total = 0;
        number = std::abs(number);
        while (number > 0) {
            total += number % 10;
            number /= 10;
        }
        return total;
    }

    int smallestIndex(std::vector<int>& arr) {
        for (int idx = 0; idx < static_cast<int>(arr.size()); ++idx) {
            if (digitSum(arr[idx]) == idx) {
                return idx;
            }
        }
        return -1;
    }
};
