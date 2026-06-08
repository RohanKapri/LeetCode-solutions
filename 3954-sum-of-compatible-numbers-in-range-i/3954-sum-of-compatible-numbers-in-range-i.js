/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var sumOfGoodIntegers = function(n, k) {
    let sum = 0;

    for (let x = Math.max(1, n - k); x <= n + k; x++) {
        if ((n & x) === 0) {
            sum += x;
        }
    }

    return sum;
};