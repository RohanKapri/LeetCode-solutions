function checkGoodInteger(n: number): boolean {
    let ds = 0;
    let ss = 0;

    while (n > 0) {
        const curr = n % 10;
        ds += curr;
        ss += curr * curr;
        n = Math.floor(n / 10);
    }

    return ss - ds >= 50;
}