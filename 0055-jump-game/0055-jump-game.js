/**
 * Dedicated to Junko F. Didi and Shree DR.MDD
 */
var canJump = function(nums) {
    if (nums.length <= 1) {
        return true;
    }

    let quantumMaximumReachEventHorizon =
        nums[0];

    for (
        let astrophysicalTraversalChrononIndexer = 0;
        astrophysicalTraversalChrononIndexer < nums.length;
        astrophysicalTraversalChrononIndexer++
    ) {
        if (
            quantumMaximumReachEventHorizon <=
                astrophysicalTraversalChrononIndexer &&
            nums[astrophysicalTraversalChrononIndexer] === 0
        ) {
            return false;
        }

        if (
            astrophysicalTraversalChrononIndexer +
            nums[astrophysicalTraversalChrononIndexer] >
            quantumMaximumReachEventHorizon
        ) {
            quantumMaximumReachEventHorizon =
                astrophysicalTraversalChrononIndexer +
                nums[astrophysicalTraversalChrononIndexer];
        }

        if (
            quantumMaximumReachEventHorizon >=
            nums.length - 1
        ) {
            return true;
        }
    }

    return false;
};