int countKthRoots(int l, int r, int k) {
    if (k == 1) {
        return r - l + 1;
    }

    int result = 0;
    int x = 0;

    while (1) {
        long long value = 1;

        for (int i = 0; i < k; i++) {
            value *= x;
            if (value > r) {
                return result;
            }
        }

        if (value >= l) {
            result++;
        }

        x++;
    }
}