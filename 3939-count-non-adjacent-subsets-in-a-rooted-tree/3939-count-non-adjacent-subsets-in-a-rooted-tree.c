int countValidSubsets(int* parent, int parentSize, int* nums, int numsSize, int k) {
    const long long MOD = 1000000007LL;

    int** children = (int**)malloc(parentSize * sizeof(int*));
    int* childCount = (int*)calloc(parentSize, sizeof(int));

    for (int i = 1; i < parentSize; i++) {
        childCount[parent[i]]++;
    }

    for (int i = 0; i < parentSize; i++) {
        children[i] = (int*)malloc(childCount[i] * sizeof(int));
        childCount[i] = 0;
    }

    for (int i = 1; i < parentSize; i++) {
        children[parent[i]][childCount[parent[i]]++] = i;
    }

    int** dp0 = (int**)malloc(parentSize * sizeof(int*));
    int** dp1 = (int**)malloc(parentSize * sizeof(int*));

    for (int i = 0; i < parentSize; i++) {
        dp0[i] = (int*)calloc(k, sizeof(int));
        dp1[i] = (int*)calloc(k, sizeof(int));
    }

    for (int u = parentSize - 1; u >= 0; u--) {
        dp0[u][0] = 1;
        dp1[u][nums[u] % k] = 1;

        for (int c = 0; c < childCount[u]; c++) {
            int v = children[u][c];

            int* next0 = (int*)calloc(k, sizeof(int));
            int* next1 = (int*)calloc(k, sizeof(int));

            for (int i = 0; i < k; i++) {
                if (dp0[u][i]) {
                    for (int j = 0; j < k; j++) {
                        int total = (dp0[v][j] + dp1[v][j]) % (int)MOD;

                        if (total) {
                            int idx = (i + j) % k;
                            next0[idx] = (next0[idx] + (long long)dp0[u][i] * total) % MOD;
                        }
                    }
                }

                if (dp1[u][i]) {
                    for (int j = 0; j < k; j++) {
                        if (dp0[v][j]) {
                            int idx = (i + j) % k;
                            next1[idx] = (next1[idx] + (long long)dp1[u][i] * dp0[v][j]) % MOD;
                        }
                    }
                }
            }

            free(dp0[u]);
            free(dp1[u]);

            dp0[u] = next0;
            dp1[u] = next1;
        }
    }

    int answer = (int)(((long long)dp0[0][0] + dp1[0][0] - 1 + MOD) % MOD);

    for (int i = 0; i < parentSize; i++) {
        free(children[i]);
        free(dp0[i]);
        free(dp1[i]);
    }

    free(children);
    free(childCount);
    free(dp0);
    free(dp1);

    return answer;
}