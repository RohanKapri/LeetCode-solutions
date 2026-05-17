class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isAdjacentDiffAtMostTwo($s) {
        for ($i = 1; $i < strlen($s); $i++) {
            if (abs(ord($s[$i]) - ord($s[$i - 1])) > 2) {
                return false;
            }
        }
        return true;
    }
}