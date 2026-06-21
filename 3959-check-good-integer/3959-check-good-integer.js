/**
 * @param {number} n
 * @return {boolean}
 */
var checkGoodInteger = function(n) {
    let ds = 0;
    let ss = 0;

    while (n > 0) {
        let curr = n % 10;
        ds += curr;
        ss += curr * curr;
        n = Math.floor(n / 10);
    }

    return ss - ds >= 50;
};