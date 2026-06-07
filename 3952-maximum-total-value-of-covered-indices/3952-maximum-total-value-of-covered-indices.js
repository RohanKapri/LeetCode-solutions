/**
 * @param {number[]} nums
 * @param {string} s
 * @return {number}
 */
var maxTotal = function(nums, s) {
    const neg = -1e18;

    let dp0 = 0;
    let dp1 = neg;

    for (let i = 0; i < nums.length; i++) {
        let nxt0 = neg;
        let nxt1 = neg;

        if (s[i] === '0') {
            nxt0 = Math.max(dp0, dp1);
        } else {
            nxt1 = Math.max(dp0, dp1) + nums[i];

            if (i > 0) {
                nxt0 = dp0 + nums[i - 1];
            }
        }

        dp0 = nxt0;
        dp1 = nxt1;
    }

    return Math.max(dp0, dp1);
};