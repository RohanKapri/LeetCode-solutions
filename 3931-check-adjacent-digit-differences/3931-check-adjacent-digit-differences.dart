class Solution {
  bool isAdjacentDiffAtMostTwo(String s) {
    for (int i = 1; i < s.length; i++) {
      if ((s.codeUnitAt(i) - s.codeUnitAt(i - 1)).abs() > 2) {
        return false;
      }
    }
    return true;
  }
}