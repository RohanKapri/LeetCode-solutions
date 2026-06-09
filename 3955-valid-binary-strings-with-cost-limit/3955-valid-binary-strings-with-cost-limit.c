void dfs(int i, int n, int k, int c, int p, char *s,
         char **ans, int *sz) {
    if (c > k) return;

    if (i == n) {
        s[n] = '\0';
        ans[*sz] = (char *)malloc((n + 1) * sizeof(char));
        strcpy(ans[*sz], s);
        (*sz)++;
        return;
    }

    s[i] = '0';
    dfs(i + 1, n, k, c, 0, s, ans, sz);

    if (!p) {
        s[i] = '1';
        dfs(i + 1, n, k, c + i, 1, s, ans, sz);
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** generateValidStrings(int n, int k, int* returnSize) {
    char **ans = (char **)malloc(100000 * sizeof(char *));
    char *s = (char *)malloc((n + 1) * sizeof(char));

    *returnSize = 0;
    dfs(0, n, k, 0, 0, s, ans, returnSize);

    free(s);
    return ans;
}