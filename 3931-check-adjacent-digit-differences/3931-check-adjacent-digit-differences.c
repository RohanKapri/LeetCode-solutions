bool isAdjacentDiffAtMostTwo(char* s) {
    for (int i = 1; s[i] != '\0'; i++) {
        int diff = s[i] - s[i - 1];
        if (diff < 0) {
            diff = -diff;
        }
        if (diff > 2) {
            return false;
        }
    }
    return true;
}