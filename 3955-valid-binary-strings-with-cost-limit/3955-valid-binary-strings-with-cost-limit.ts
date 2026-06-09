function generateValidStrings(n: number, k: number): string[] {
    const ans: string[] = [];

    function dfs(i: number, c: number, p: boolean, s: string): void {
        if (c > k) return;

        if (i === n) {
            ans.push(s);
            return;
        }

        dfs(i + 1, c, false, s + "0");

        if (!p) {
            dfs(i + 1, c + i, true, s + "1");
        }
    }

    dfs(0, 0, false, "");
    return ans;
}