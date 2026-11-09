var peakValleyDifference = function(nums) {
    let crestTotal = 0;
    let troughTotal = 0;

    for (let index = 1; index < nums.length - 1; index++) {
        const current = nums[index];
        const previous = nums[index - 1];
        const next = nums[index + 1];

        if (previous < current && next < current) {
            crestTotal += current;
        }

        if (previous > current && next > current) {
            troughTotal += current;
        }
    }

    return crestTotal - troughTotal;
};