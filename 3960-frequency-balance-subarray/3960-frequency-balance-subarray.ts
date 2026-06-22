/**
 * @param nums
 * @returns
 */
function getLength(nums: number[]): number {
    const n = nums.length;
    let ans = 0;

    const mp = new Map<number, number>();
    let idx = 0;

    for (let i = 0; i < n; i++) {
        if (!mp.has(nums[i])) mp.set(nums[i], idx++);
        nums[i] = mp.get(nums[i])!;
    }

    for (let i = 0; i + ans < n; i++) {
        const len = Math.min(n - i + 1, n - idx + 2);
        const freq = new Array<number>(idx).fill(0);
        const freqFreq = new Array<number>(len).fill(0);

        let numCount = 0, freqCount = 0;

        for (let j = i; j < n; j++) {
            const val = ++freq[nums[j]];

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
}