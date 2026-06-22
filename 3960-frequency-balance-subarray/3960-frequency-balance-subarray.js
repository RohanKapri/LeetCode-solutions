/**
 * @param {number[]} nums
 * @return {number}
 */
var getLength = function(nums) {
    let n = nums.length, ans = 0;

    let mp = new Map(), idx = 0;
    for (let i = 0; i < n; i++) {
        if (!mp.has(nums[i])) mp.set(nums[i], idx++);
        nums[i] = mp.get(nums[i]);
    }

    for (let i = 0; i + ans < n; i++) {
        let len = Math.min(n - i + 1, n - idx + 2);
        let freq = Array(idx).fill(0);
        let freqFreq = Array(len).fill(0);
        let numCount = 0, freqCount = 0;

        for (let j = i; j < n; j++) {
            let val = ++freq[nums[j]];

            if (val === 1) numCount++;

            if (freqFreq[val]++ === 0) freqCount++;
            if (val !== 1 && --freqFreq[val - 1] === 0) freqCount--;

            if (ans > j - i + 1) continue;

            if (
                numCount === 1 ||
                (
                    freqCount === 2 &&
                    (
                        ((val & 1) === 0 && freqFreq[val >> 1] !== 0) ||
                        ((val << 1) < len && freqFreq[val << 1] !== 0)
                    )
                )
            ) {
                ans = j - i + 1;
            }
        }
    }

    return ans;
};