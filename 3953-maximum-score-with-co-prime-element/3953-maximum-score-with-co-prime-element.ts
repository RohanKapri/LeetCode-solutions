function maxScore(nums: number[], maxVal: number): number {
    let mx = maxVal;

    for (const x of nums) {
        if (x > mx) mx = x;
    }

    const freq = new Array<number>(mx + 1).fill(0);
    for (const x of nums) {
        freq[x]++;
    }

    const spf = Array.from({ length: mx + 1 }, (_, i) => i);
    const mul = new Array<number>(mx + 1).fill(0);

    for (let i = 2; i <= mx; i++) {
        if (spf[i] === i) {
            for (let j = i * 2; j <= mx; j += i) {
                if (spf[j] === j) spf[j] = i;
            }
        }

        let cnt = 0;
        for (let j = i; j <= mx; j += i) {
            cnt += freq[j];
        }
        mul[i] = cnt;
    }

    let ans = freq[1] > 0 ? 1 : 0;

    for (let i = mx; i >= 2; i--) {
        if (i <= ans) break;

        if (freq[i] === 0 && i > maxVal) continue;

        let x = i;
        const primes: number[] = [];

        while (x !== 1) {
            const p = spf[x];
            primes.push(p);
            while (x % p === 0) x = Math.floor(x / p);
        }

        let bad = -freq[i];
        const total = 1 << primes.length;

        for (let mask = 1; mask < total; mask++) {
            let prod = 1;
            let bits = 0;

            for (let k = 0; k < primes.length; k++) {
                if ((mask >> k) & 1) {
                    prod *= primes[k];
                    bits++;
                }
            }

            if (bits & 1) bad += mul[prod];
            else bad -= mul[prod];
        }

        const cost =
            freq[i] > 0
                ? bad + freq[i] - 1
                : Math.max(bad, 1);

        ans = Math.max(ans, i - cost);
    }

    return ans;
}