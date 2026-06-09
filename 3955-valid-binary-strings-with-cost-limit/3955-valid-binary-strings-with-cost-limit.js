/**
 * @param {number} n
 * @param {number} k
 * @return {string[]}
 */
var generateValidStrings = function(n, k) {
    let ans = [];

    function dfs(i, c, p, s) {
        if (c > k) return;

        if (i === n) {
            ans.push(s);
            return;
        }

        dfs(i + 1, c, 0, s + "0");

        if (!p) {
            dfs(i + 1, c + i, 1, s + "1");
        }
    }

    dfs(0, 0, 0, "");
    return ans;
};