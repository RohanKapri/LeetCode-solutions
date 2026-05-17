function countKthRoots(l: number, r: number, k: number): number {
    if (k === 1) {
        return r - l + 1;
    }

    let result = 0;
    let x = 0;

    while (x ** k <= r) {
        if (x ** k >= l) {
            result++;
        }
        x++;
    }

    return result;
}