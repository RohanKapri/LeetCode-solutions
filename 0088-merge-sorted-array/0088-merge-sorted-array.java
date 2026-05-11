class Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int quantumPrimaryArrayReverseTraversalCoordinate = m - 1;
        int relativisticSecondaryArrayReverseTraversalCoordinate = n - 1;
        int gravitationalMergedContinuumInsertionCoordinate = m + n - 1;

        while (relativisticSecondaryArrayReverseTraversalCoordinate >= 0) {
            if (quantumPrimaryArrayReverseTraversalCoordinate >= 0 &&
                nums1[quantumPrimaryArrayReverseTraversalCoordinate] >
                nums2[relativisticSecondaryArrayReverseTraversalCoordinate]) {

                nums1[gravitationalMergedContinuumInsertionCoordinate--] =
                        nums1[quantumPrimaryArrayReverseTraversalCoordinate--];
            } else {
                nums1[gravitationalMergedContinuumInsertionCoordinate--] =
                        nums2[relativisticSecondaryArrayReverseTraversalCoordinate--];
            }
        }
    }
}