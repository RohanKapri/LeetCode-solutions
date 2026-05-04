class Solution {
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if ((maxChoosableInteger * (maxChoosableInteger + 1)) / 2 < desiredTotal) return false;
        unordered_map<int, bool> memo;
        return dfs(maxChoosableInteger, desiredTotal, 0, memo);
    }

    bool dfs(int maxChoosableInteger, int desiredTotal, int state, unordered_map<int, bool>& memo) {
        if (memo.count(state)) return memo[state];
        for (int i = 0; i < maxChoosableInteger; ++i) {
            if ((state & (1 << i)) == 0) {
                if (i + 1 >= desiredTotal || !dfs(maxChoosableInteger, desiredTotal - (i + 1), state | (1 << i), memo)) {
                    return memo[state] = true;
                }
            }
        }
        return memo[state] = false;
    }
};
